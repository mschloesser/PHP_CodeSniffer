<?php

// ok
somefunction1($foo, $bar, [
    // ...
], $baz);

// ok
$app->get('/hello/{name}', function ($name) use ($app) {
    return 'Hello '.$app->escape($name);
}, array(
    '1',
    '2',
    '3',
));

// error
somefunction2($foo, $bar, [
    // ...
    ],
$baz);

// ok
somefunction3(
    $foo,
    $bar,
    [
        // ...
    ],
    $baz
);

// ok
somefunction4('
    this should not
    give an error
    because it\'s actually
    one line call
    with multi-line string
');

// ok
somefunction5("hey,
multi-line string with some
extra args", $foo, 12);

// error
somefunction6('
    but args in a new line
    are not ok…
    ',
    $foo
);

$this->setFoo(true
    ? 1
    : 2, false, array(
    'value',
    'more'));

$this->setFoo('some'
    . 'long'
    . 'text', 'string');

foo(bar(), $a);
foo();bar();

foo(
    true
);

myFunction(<<<END
Foo
END
);

var_dump(array(<<<'EOD'
foobar!
EOD
));

myFunction(<<<END
Foo
END
, 'bar');

myFunction(<<<END
Foo
END
,
'bar');

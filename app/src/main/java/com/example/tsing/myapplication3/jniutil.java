package com.example.tsing.myapplication3;

/**
 * Created by Tsing on 9/4/2017.
 */

public class jniutil {
    static{
        System.loadLibrary("myapplication3");
    }
    public static native String sayHello();
}

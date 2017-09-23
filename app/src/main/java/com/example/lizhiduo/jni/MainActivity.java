package com.example.lizhiduo.jni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Log.d("test_jni", ""+ JNI.sayHello());

        JNI.callBackAdd(8, 9);

        JNI.callBackHelloFromJava();
    }
}

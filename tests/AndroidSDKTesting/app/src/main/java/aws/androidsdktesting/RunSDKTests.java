package aws.androidsdktesting;

import android.app.Activity;
import android.content.Context;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;


public class RunSDKTests extends AppCompatActivity {

    class TestTask extends AsyncTask<String, Void, Boolean> {

        private Activity m_source;

        private Map< String, ArrayList< String > > m_testLibraryDependencies;

        void InitializeLibraryDependencies()
        {
            m_testLibraryDependencies = new HashMap< String, ArrayList< String > >();

            ArrayList< String > coreDependencies = new ArrayList< String >();
            coreDependencies.add("runCoreUnitTests");
            m_testLibraryDependencies.put("core", coreDependencies);

            ArrayList< String > cloudfrontDependencies = new ArrayList< String >();
            cloudfrontDependencies.add("aws-cpp-sdk-cloudfront");
            cloudfrontDependencies.add("runCloudfrontIntegrationTests");
            m_testLibraryDependencies.put("cloudfront", cloudfrontDependencies);

            ArrayList< String > cognitoidentityDependencies = new ArrayList< String >();
            cognitoidentityDependencies.add("aws-cpp-sdk-cognito-identity");
            cognitoidentityDependencies.add("aws-cpp-sdk-iam");
            cognitoidentityDependencies.add("aws-cpp-sdk-access-management");
            cognitoidentityDependencies.add("runCognitoIntegrationTests");
            m_testLibraryDependencies.put("cognito-identity", cognitoidentityDependencies);

            ArrayList< String > dynamodbDependencies = new ArrayList< String >();
            dynamodbDependencies.add("aws-cpp-sdk-dynamodb");
            dynamodbDependencies.add("runDynamoDBIntegrationTests");
            m_testLibraryDependencies.put("dynamodb", dynamodbDependencies);

            ArrayList< String > identityDependencies = new ArrayList< String >();
            identityDependencies.add("aws-cpp-sdk-identity-management");
            identityDependencies.add("runIdentityManagementTests");
            m_testLibraryDependencies.put("identity", identityDependencies);

            ArrayList< String > lambdaDependencies = new ArrayList< String >();
            lambdaDependencies.add("aws-cpp-sdk-kinesis");
            lambdaDependencies.add("aws-cpp-sdk-lambda");
            lambdaDependencies.add("aws-cpp-sdk-cognito-identity");
            lambdaDependencies.add("aws-cpp-sdk-iam");
            lambdaDependencies.add("aws-cpp-sdk-access-management");
            lambdaDependencies.add("runLambdaManagementTests");
            m_testLibraryDependencies.put("lambda", lambdaDependencies);

            ArrayList< String > loggingDependencies = new ArrayList< String >();
            loggingDependencies.add("aws-cpp-sdk-s3");
            loggingDependencies.add("aws-cpp-sdk-logging");
            loggingDependencies.add("runLoggingIntegrationTests");
            m_testLibraryDependencies.put("logging", loggingDependencies);

            ArrayList< String > redshiftDependencies = new ArrayList< String >();
            redshiftDependencies.add("aws-cpp-sdk-redshift");
            redshiftDependencies.add("runRedshiftIntegrationTests");
            m_testLibraryDependencies.put("redshift", redshiftDependencies);

            ArrayList< String > s3Dependencies = new ArrayList< String >();
            s3Dependencies.add("aws-cpp-sdk-s3");
            s3Dependencies.add("runS3IntegrationTests");
            m_testLibraryDependencies.put("s3", s3Dependencies);

            ArrayList< String > sqsDependencies = new ArrayList< String >();
            sqsDependencies.add("aws-cpp-sdk-sqs");
            sqsDependencies.add("aws-cpp-sdk-cognito-identity");
            sqsDependencies.add("aws-cpp-sdk-iam");
            sqsDependencies.add("aws-cpp-sdk-access-management");
            sqsDependencies.add("runSqsIntegrationTests");
            m_testLibraryDependencies.put("sqs", sqsDependencies);

            ArrayList< String > transferDependencies = new ArrayList< String >();
            transferDependencies.add("aws-cpp-sdk-s3");
            transferDependencies.add("aws-cpp-sdk-transfer");
            transferDependencies.add("runTransferIntegrationTests");
            m_testLibraryDependencies.put("transfer", transferDependencies);

            ArrayList< String > unifiedDependencies = new ArrayList< String >();
            unifiedDependencies.add("android-unified-tests");
            m_testLibraryDependencies.put("unified", unifiedDependencies);
        }

        public TestTask(Activity taskSource)
        {
            m_source = taskSource;
        }

        protected Boolean doInBackground(String... testNames)
        {
            InitializeLibraryDependencies();

            String testName = testNames[ 0 ];

            Log.i("AwsNativeSDK", "Running test " + testName);

            if(!testName.equals("unified"))
            {
                Log.i("AwsNativeSDK", "Loading common libraries ");

                //System.loadLibrary("c");
                try {
                    System.loadLibrary("c++_shared");
                } catch (Exception e) {
                    ;
                }

                try {
                    System.loadLibrary("gnustl_shared");
                } catch (Exception e) {
                    ;
                }

                System.loadLibrary("log");
                System.loadLibrary("aws-cpp-sdk-core");
                System.loadLibrary("testing-resources");
            }

            ArrayList< String > testLibraries = m_testLibraryDependencies.get( testName );
            if(testLibraries == null)
            {
                Log.i("AwsNativeSDK", "Test " + testName + " does not exist!");
                return false;
            }

            Log.i("AwsNativeSDK", "Loading test libraries ");
            for(String testLibraryName : testLibraries)
            {
                Log.i("AwsNativeSDK", "Loading library " + testLibraryName);
                System.loadLibrary(testLibraryName);
            }

            Log.i("AwsNativeSDK", "Starting  tests");

            boolean success = runTests((Context)m_source) == 0;
            if(success) {
                Log.i("AwsNativeSDK", "Tests Succeeded!");
            } else {
                Log.i("AwsNativeSDK", "Tests Failed =(");
            }

            return success;
        }

        protected void onPostExecute(Boolean testsSucceeded)
        {
            Log.i("AwsNativeSDK", "Shutting down TestActivity");
            m_source.finish();
        }
    }

    static public native int runTests(Context context);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_run_sdktests);

        String testName = getIntent().getStringExtra("test");
        if(testName == null) {
            testName = "unified";
        }
        new TestTask(this).execute(testName);
    }

    @Override
    public void onDestroy()
    {
        super.onDestroy();
        Log.i("AwsNativeSDK", "OnDestroy called!");
    }
}

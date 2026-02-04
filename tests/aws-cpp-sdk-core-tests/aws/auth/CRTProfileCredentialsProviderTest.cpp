#include <aws/core/auth/CRTProfileCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <fstream>

using namespace Aws::Auth;

class CRTProfileCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    void SetUp() override {
        SaveEnv("AWS_CONFIG_FILE");
        SaveEnv("AWS_SHARED_CREDENTIALS_FILE");
        SaveEnv("AWS_PROFILE");
        
        Aws::FileSystem::CreateDirectoryIfNotExists(GetTestDir().c_str());
        m_configFile = GetTestDir() + "/config";
        m_credsFile = GetTestDir() + "/credentials";
        
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFile.c_str(), 1);
        Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", m_credsFile.c_str(), 1);
    }

    void TearDown() override {
        Aws::FileSystem::RemoveFileIfExists(m_configFile.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_credsFile.c_str());
        RestoreEnv();
    }

    void SaveEnv(const char* name) {
        m_savedEnv.emplace_back(name, Aws::Environment::GetEnv(name));
    }

    void RestoreEnv() {
        for (const auto& pair : m_savedEnv) {
            if (pair.second.empty()) {
                Aws::Environment::UnSetEnv(pair.first);
            } else {
                Aws::Environment::SetEnv(pair.first, pair.second.c_str(), 1);
            }
        }
    }

    Aws::String GetTestDir() {
        return Aws::FileSystem::GetHomeDirectory() + "/.aws_test_" + 
               Aws::Utils::StringUtils::to_string(std::this_thread::get_id());
    }

    Aws::String m_configFile;
    Aws::String m_credsFile;
    Aws::Vector<std::pair<const char*, Aws::String>> m_savedEnv;
};

TEST_F(CRTProfileCredentialsProviderTest, LoadStaticCredentials) {
    std::ofstream creds(m_credsFile.c_str());
    creds << "[default]\n";
    creds << "aws_access_key_id = AKIATEST123\n";
    creds << "aws_secret_access_key = SecretKey456\n";
    creds.close();

    CRTProfileCredentialsProvider provider;
    auto credentials = provider.GetAWSCredentials();

    EXPECT_STREQ("AKIATEST123", credentials.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey456", credentials.GetAWSSecretKey().c_str());
}

TEST_F(CRTProfileCredentialsProviderTest, LoadNamedProfile) {
    std::ofstream creds(m_credsFile.c_str());
    creds << "[default]\n";
    creds << "aws_access_key_id = DefaultKey\n";
    creds << "aws_secret_access_key = DefaultSecret\n";
    creds << "\n";
    creds << "[test-profile]\n";
    creds << "aws_access_key_id = TestKey\n";
    creds << "aws_secret_access_key = TestSecret\n";
    creds.close();

    CRTProfileCredentialsProvider provider("test-profile");
    auto credentials = provider.GetAWSCredentials();

    EXPECT_STREQ("TestKey", credentials.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("TestSecret", credentials.GetAWSSecretKey().c_str());
}

TEST_F(CRTProfileCredentialsProviderTest, LoadWithSessionToken) {
    std::ofstream creds(m_credsFile.c_str());
    creds << "[default]\n";
    creds << "aws_access_key_id = AKIATEST\n";
    creds << "aws_secret_access_key = SecretKey\n";
    creds << "aws_session_token = SessionToken123\n";
    creds.close();

    CRTProfileCredentialsProvider provider;
    auto credentials = provider.GetAWSCredentials();

    EXPECT_STREQ("AKIATEST", credentials.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey", credentials.GetAWSSecretKey().c_str());
    EXPECT_STREQ("SessionToken123", credentials.GetSessionToken().c_str());
}

TEST_F(CRTProfileCredentialsProviderTest, MissingProfileReturnsEmpty) {
    std::ofstream creds(m_credsFile.c_str());
    creds << "[default]\n";
    creds << "aws_access_key_id = DefaultKey\n";
    creds << "aws_secret_access_key = DefaultSecret\n";
    creds.close();

    CRTProfileCredentialsProvider provider("nonexistent");
    auto credentials = provider.GetAWSCredentials();

    EXPECT_TRUE(credentials.IsEmpty());
}

TEST_F(CRTProfileCredentialsProviderTest, DISABLED_ProcessCredentials) {
    std::ofstream config(m_configFile.c_str());
    config << "[default]\n";
    config << "credential_process = echo '{\"Version\": 1, \"AccessKeyId\": \"ProcessKey\", \"SecretAccessKey\": \"ProcessSecret\"}'\n";
    config.close();

    CRTProfileCredentialsProvider provider;
    auto credentials = provider.GetAWSCredentials();

    EXPECT_STREQ("ProcessKey", credentials.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("ProcessSecret", credentials.GetAWSSecretKey().c_str());
}

#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/auth/ProfileCredentialsProvider.h>
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/crt/auth/Credentials.h>

using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FileSystem;
using namespace Aws::Crt::Auth;

namespace {
const char PROFILE_AWS_CREDENTIALS_FILE[] = "AWS_SHARED_CREDENTIALS_FILE";
const char PROFILE_DEFAULT_CREDENTIALS_FILE[] = "credentials";
const char PROFILE_PROFILE_DIRECTORY[] = ".aws";
}

class ProfileCredentialsProvider::ProfileCredentialsProviderImp : public CrtCredentialsProvider {
public:
    ProfileCredentialsProviderImp()
        :CrtCredentialsProvider(
            []() -> std::shared_ptr<ICredentialsProvider> {
                CredentialsProviderProfileConfig config;
                return CredentialsProvider::CreateCredentialsProviderProfile(config);
            },
            std::chrono::milliseconds(5000),
            UserAgentFeature::CREDENTIALS_PROFILE,
            "ProfileCredentialsProvider"){}

    ProfileCredentialsProviderImp(const char* profile)
        :CrtCredentialsProvider(
            [profile]()-> std::shared_ptr<ICredentialsProvider> {
                CredentialsProviderProfileConfig config;
                if (profile && profile[0] !='\0') {
                    config.ProfileNameOverride = Aws::Crt::ByteCursorFromCString(profile);
                }
                return CredentialsProvider::CreateCredentialsProviderProfile(config);
            },
            std::chrono::milliseconds(5000),
            Aws::Client::UserAgentFeature::CREDENTIALS_PROFILE,
            "ProfileCredentialsProvider"){}

    static Aws::String GetCredentialsProfileFilename() {
        auto credentialsFileNameFromVar = Aws::Environment::GetEnv(PROFILE_AWS_CREDENTIALS_FILE);

        if (credentialsFileNameFromVar.empty()) {
            return GetHomeDirectory() + PROFILE_PROFILE_DIRECTORY + PATH_DELIM + PROFILE_DEFAULT_CREDENTIALS_FILE;
        }
        return credentialsFileNameFromVar;
    }

    static Aws::String GetProfileDirectory() {
        Aws::String credentialsFileName = GetCredentialsProfileFilename();
        auto lastSeparator = credentialsFileName.find_last_of(PATH_DELIM);
        if (lastSeparator != std::string::npos) {
            return credentialsFileName.substr(0, lastSeparator);
        } else {
            return {};
        }
    }
};

ProfileCredentialsProvider::ProfileCredentialsProvider()
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>()) {}

ProfileCredentialsProvider::ProfileCredentialsProvider(const char* profile)
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>(profile)) {}

Aws::String ProfileCredentialsProvider::GetCredentialsProfileFilename() {
  return ProfileCredentialsProviderImp::GetCredentialsProfileFilename();
}

Aws::String ProfileCredentialsProvider::GetProfileDirectory() { return ProfileCredentialsProviderImp::GetProfileDirectory(); }

AWSCredentials ProfileCredentialsProvider::GetAWSCredentials() { return m_impl->GetAWSCredentials(); }

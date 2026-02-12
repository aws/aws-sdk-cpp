#include <aws/core/auth/AWSCredentialsProvider.h>

#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/auth/ProfileCredentialsProvider.h>

using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FileSystem;
using namespace Aws::Utils::Threading;

extern const char PROFILE_DIRECTORY[];
extern const char DEFAULT_CREDENTIALS_FILE[];

namespace {
const char* PROFILE_LOG_TAG = "ProfileCredentialsProvider";
const char* AWS_CREDENTIALS_FILE = "AWS_SHARED_CREDENTIALS_FILE";
}

class ProfileCredentialsProvider::ProfileCredentialsProviderImp : public AWSCredentialsProvider {
 public:
  ProfileCredentialsProviderImp(long refreshRateMs)
      : m_profileToUse(Aws::Auth::GetConfigProfileName()),
        m_credentialsFileLoader(GetCredentialsProfileFilename()),
        m_loadFrequencyMs(refreshRateMs) {
    AWS_LOGSTREAM_INFO(PROFILE_LOG_TAG, "Setting provider to read credentials from "
                                            << GetCredentialsProfileFilename() << " for credentials file"
                                            << " and " << GetConfigProfileFilename() << " for the config file "
                                            << ", for use with profile " << m_profileToUse);
  }

  ProfileCredentialsProviderImp(const char* profile, long refreshRateMs)
      : m_profileToUse(profile), m_credentialsFileLoader(GetCredentialsProfileFilename()), m_loadFrequencyMs(refreshRateMs) {
    AWS_LOGSTREAM_INFO(PROFILE_LOG_TAG, "Setting provider to read credentials from "
                                            << GetCredentialsProfileFilename() << " for credentials file"
                                            << " and " << GetConfigProfileFilename() << " for the config file "
                                            << ", for use with profile " << m_profileToUse);
  }

  static Aws::String GetCredentialsProfileFilename() {
    auto credentialsFileNameFromVar = Aws::Environment::GetEnv(AWS_CREDENTIALS_FILE);

    if (credentialsFileNameFromVar.empty()) {
      return GetHomeDirectory() + PROFILE_DIRECTORY + PATH_DELIM + DEFAULT_CREDENTIALS_FILE;
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

  AWSCredentials GetAWSCredentials() override {
    RefreshIfExpired();
    ReaderLockGuard guard(m_reloadLock);
    const Aws::Map<Aws::String, Aws::Config::Profile>& profiles = m_credentialsFileLoader.GetProfiles();
    auto credsFileProfileIter = profiles.find(m_profileToUse);

    if (credsFileProfileIter != profiles.end()) {
      AWSCredentials credentials = credsFileProfileIter->second.GetCredentials();
      if (!credentials.IsEmpty()) {
        credentials.AddUserAgentFeature(UserAgentFeature::CREDENTIALS_PROFILE);
      }
      return credentials;
    }

    return AWSCredentials();
  }

  void Reload() override {
    m_credentialsFileLoader.Load();
    AWSCredentialsProvider::Reload();
  }

 private:
  Aws::String m_profileToUse;
  Aws::Config::AWSConfigFileProfileConfigLoader m_credentialsFileLoader;
  long m_loadFrequencyMs;

  void RefreshIfExpired() {
    ReaderLockGuard guard(m_reloadLock);
    if (!IsTimeToRefresh(m_loadFrequencyMs)) {
      return;
    }

    guard.UpgradeToWriterLock();
    if (!IsTimeToRefresh(m_loadFrequencyMs))  // double-checked lock to avoid refreshing twice
    {
      return;
    }

    Reload();
  }
};

ProfileCredentialsProvider::ProfileCredentialsProvider(long refreshRateMs)
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>(refreshRateMs)) {}

ProfileCredentialsProvider::ProfileCredentialsProvider(const char* profile, long refreshRateMs)
    : m_impl(std::make_shared<ProfileCredentialsProviderImp>(profile, refreshRateMs)) {}

Aws::String ProfileCredentialsProvider::GetCredentialsProfileFilename() {
  return ProfileCredentialsProviderImp::GetCredentialsProfileFilename();
}

Aws::String ProfileCredentialsProvider::GetProfileDirectory() { return ProfileCredentialsProviderImp::GetProfileDirectory(); }

AWSCredentials ProfileCredentialsProvider::GetAWSCredentials() { return m_impl->GetAWSCredentials(); }

void ProfileCredentialsProvider::Reload() { m_impl->Reload(); }
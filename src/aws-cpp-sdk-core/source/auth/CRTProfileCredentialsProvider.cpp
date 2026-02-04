#include <aws/core/auth/CRTProfileCredentialsProvider.h>
#include <aws/core/Globals.h>
#include <aws/core/platform/Environment.h>
#include <condition_variable>
#include <mutex>
#include <aws/crt/auth/Credentials.h>

using namespace Aws::Auth;

class CRTProfileCredentialsProvider::CRTProfileCredentialsProviderImp {
public:
    Aws::String m_profileToUse;
    Aws::Config::AWSConfigFileProfileConfigLoader m_credentialsFileLoader;
    long m_loadFrequencyMs;

    CRTProfileCredentialsProviderImp(long refreshRateMs) :
    m_profileToUse(Aws::Auth::GetConfigProfileName()),
    m_credentialsFileLoader(GetCredentialsProfileFilename()),
    m_loadFrequencyMs(refreshRateMs){}

    CRTProfileCredentialsProviderImp(const char* profile, long refreshRateMs) :
    m_profileToUse(profile),
    m_credentialsFileLoader(GetCredentialsProfileFilename()),
    m_loadFrequencyMs(refreshRateMs){}
};

Aws::String CRTProfileCredentialsProvider::GetCredentialsProfileFilename()
{
    auto credentialsFileNameFromVar = Aws::Environment::GetEnv(AWS_CREDENTIALS_FILE);

    if (credentialsFileNameFromVar.empty())
    {
        return Aws::FileSystem::GetHomeDirectory() + PROFILE_DIRECTORY + PATH_DELIM + DEFAULT_CREDENTIALS_FILE;
    }
    else
    {
        return credentialsFileNameFromVar;
    }
}

Aws::String CRTProfileCredentialsProvider::GetProfileDirectory()
{
    Aws::String credentialsFileName = GetCredentialsProfileFilename();
    auto lastSeparator = credentialsFileName.find_last_of(PATH_DELIM);
    if (lastSeparator != std::string::npos)
    {
        return credentialsFileName.substr(0, lastSeparator);
    }
    else
    {
        return {};
    }
}

CRTProfileCredentialsProvider::CRTProfileCredentialsProvider(long refreshRateMs):
    m_impl(std::make_shared<CRTProfileCredentialsProviderImp>(refreshRateMs))
{
    AWS_LOGSTREAM_INFO(PROFILE_LOG_TAG, "Setting provider to read credentials from " <<  GetCredentialsProfileFilename() << " for credentials file"
                                      << " and " <<  GetConfigProfileFilename() << " for the config file "
                                      << ", for use with profile " << m_impl->m_profileToUse);
}

CRTProfileCredentialsProvider::CRTProfileCredentialsProvider(const char* profile, long refreshRateMs) :
    m_impl(std::make_shared<CRTProfileCredentialsProviderImp>(profile, refreshRateMs))
{
    AWS_LOGSTREAM_INFO(PROFILE_LOG_TAG, "Setting provider to read credentials from " <<  GetCredentialsProfileFilename() << " for credentials file"
                                      << " and " <<  GetConfigProfileFilename() << " for the config file "
                                      << ", for use with profile " << m_impl->m_profileToUse);
}

AWSCredentials CRTProfileCredentialsProvider::GetAWSCredentials()
{
    RefreshIfExpired();
    ReaderLockGuard guard(m_reloadLock);
    const Aws::Map<Aws::String, Aws::Config::Profile>& profiles = m_impl->m_credentialsFileLoader.GetProfiles();
    auto credsFileProfileIter = profiles.find(m_impl->m_profileToUse);

    if(credsFileProfileIter != profiles.end())
    {
        AWSCredentials credentials = credsFileProfileIter->second.GetCredentials();
        if (!credentials.IsEmpty()) {
            credentials.AddUserAgentFeature(UserAgentFeature::CREDENTIALS_PROFILE);
        }
        return credentials;
    }

    return AWSCredentials();
}


void CRTProfileCredentialsProvider::Reload()
{
    m_impl->m_credentialsFileLoader.Load();
    AWSCredentialsProvider::Reload();
}

void CRTProfileCredentialsProvider::RefreshIfExpired()
{
    ReaderLockGuard guard(m_reloadLock);
    if (!IsTimeToRefresh(m_impl->m_loadFrequencyMs))
    {
       return;
    }

    guard.UpgradeToWriterLock();
    if (!IsTimeToRefresh(m_impl->m_loadFrequencyMs)) // double-checked lock to avoid refreshing twice
    {
        return;
    }

    Reload();
}
#include <aws/core/auth/CRTProfileCredentialsProvider.h>
#include <aws/core/Globals.h>
#include <aws/core/platform/Environment.h>
#include <condition_variable>
#include <mutex>
#include <aws/crt/auth/Credentials.h>

using namespace Aws::Auth;

class CRTProfileCredentialsProvider::Impl {
public:
    std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> m_crtProvider;
};

CRTProfileCredentialsProvider::CRTProfileCredentialsProvider()
    : m_impl(Aws::MakeShared<Impl>("CRTProfileCredentialsProvider")){
    Aws::Crt::Auth::CredentialsProviderProfileConfig config{};
    config.Bootstrap = GetDefaultClientBootstrap();
    auto profileName = Aws::Environment::GetEnv("AWS_PROFILE");
    if(!profileName.empty()){
        config.ProfileNameOverride = Aws::Crt::ByteCursorFromCString(profileName.c_str());
    }
    m_impl->m_crtProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderProfile(config);
}

CRTProfileCredentialsProvider::CRTProfileCredentialsProvider(const char *profileName)
    :m_impl(Aws::MakeShared<Impl>("CRTProfileCredentialsProvider")){
    Aws::Crt::Auth::CredentialsProviderProfileConfig config{};
    config.Bootstrap = GetDefaultClientBootstrap();
    if (profileName) {
        config.ProfileNameOverride = Aws::Crt::ByteCursorFromCString(profileName);
    }
    m_impl->m_crtProvider = Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderProfile(config);
}

CRTProfileCredentialsProvider::~CRTProfileCredentialsProvider() = default;

AWSCredentials CRTProfileCredentialsProvider::GetAWSCredentials() {
    if (!m_impl || !m_impl->m_crtProvider) {
        return AWSCredentials{};
    }
    AWSCredentials credentials;
    std::mutex mtx;
    std::condition_variable cv;
    bool done = false;

    m_impl->m_crtProvider->GetCredentials([&](std::shared_ptr<Aws::Crt::Auth::Credentials> crtCreds, int errorCode) {
        {
            std::lock_guard<std::mutex> lock(mtx);
            if (errorCode == 0 && crtCreds) {
                auto accessKey = crtCreds->GetAccessKeyId();
                auto secretKey = crtCreds->GetSecretAccessKey();
                auto sessionToken = crtCreds->GetSessionToken();

                credentials.SetAWSAccessKeyId({reinterpret_cast<char*>(accessKey.ptr), accessKey.len});
                credentials.SetAWSSecretKey({reinterpret_cast<char*>(secretKey.ptr), secretKey.len});
                if (sessionToken.len > 0) {
                    credentials.SetSessionToken({reinterpret_cast<char*>(sessionToken.ptr), sessionToken.len});
                }
                auto expiration = crtCreds->GetExpirationTimepointInSeconds();
                if (expiration > 0) {
                    credentials.SetExpiration(Aws::Utils::DateTime(static_cast<double>(expiration)));
                }
            }
            done = true;
        }
        cv.notify_one();
    });

    std::unique_lock<std::mutex> lock(mtx);
    cv.wait_for(lock,std::chrono::milliseconds(5000), [&done]() -> bool { return done;});
    return credentials;
}

void CRTProfileCredentialsProvider::Reload() {}




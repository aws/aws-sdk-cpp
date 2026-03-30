/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

 #pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/platform/Security.h>
namespace Aws
{
    namespace Auth
    {
        /**
         * Context class for credential resolution that tracks features used during credential retrieval.
         */
        class AWS_CORE_API CredentialsResolutionContext
        {
        public:
          // Default constructor - no features tracked
          CredentialsResolutionContext() = default;

          /**
           * Add a user agent feature to track credential usage.
           */
          void AddUserAgentFeature(Aws::Client::UserAgentFeature feature)
          {
            m_features.insert(feature);
          }

          /**
           * Get all tracked credential features.
           */
          const Aws::Set<Aws::Client::UserAgentFeature> GetUserAgentFeatures() const
          {
            return m_features;
          }

        private:
          Aws::Set<Aws::Client::UserAgentFeature> m_features;
        };

        /**
         * Simple data object around aws credentials
         */
        class AWS_CORE_API AWSCredentials
        {
        public:
            /**
             * Initializes an empty credentials set.
             * Empty credentials are not expired by default.
             * Credentials expire only if an expiration date is explicitly set on them.
             */
            AWSCredentials() : m_expiration((std::chrono::time_point<std::chrono::system_clock>::max)())
            {
            }

            /**
             * Initializes object with accessKeyId, secretKey.
             * SessionToken defaults to empty string.
             * Expiration date is set to "never expire".
             */
            AWSCredentials(const Aws::String& accessKeyId, const Aws::String& secretKey) :
                m_accessKeyId(accessKeyId), m_secretKey(secretKey), m_expiration((std::chrono::time_point<std::chrono::system_clock>::max)())
            {
            }

            /**
             * Initializes object with accessKeyId, secretKey, and sessionToken.
             * Expiration date is set to "never expire".
             */
            AWSCredentials(const Aws::String& accessKeyId, const Aws::String& secretKey, const Aws::String& sessionToken) :
                m_accessKeyId(accessKeyId), m_secretKey(secretKey), m_sessionToken(sessionToken), m_expiration((std::chrono::time_point<std::chrono::system_clock>::max)())
            {
            }

            /**
             * Initializes object with accessKeyId, secretKey, sessionToken and expiration date.
             */
            AWSCredentials(const Aws::String& accessKeyId, const Aws::String& secretKey, const Aws::String& sessionToken, Aws::Utils::DateTime expiration) :
                m_accessKeyId(accessKeyId), m_secretKey(secretKey), m_sessionToken(sessionToken), m_expiration(expiration)
            {
            }

            /**
             * Initializes object with accessKeyId, secretKey, sessionToken, expiration date and account Id.
             */
            AWSCredentials(const Aws::String& accessKeyId,
                           const Aws::String& secretKey,
                           const Aws::String& sessionToken,
                           Aws::Utils::DateTime expiration,
                           const Aws::String& accountId)
                : m_accessKeyId(accessKeyId),
                  m_secretKey(secretKey),
                  m_sessionToken(sessionToken),
                  m_expiration(expiration),
                  m_accountId(accountId) {}

            /**
             * Copy constructor.
             */
            AWSCredentials(const AWSCredentials& other) = default;

            /**
             * Move constructor.
             */
            AWSCredentials(AWSCredentials&& other) noexcept = default;

            /**
             * Destructor that securely clears sensitive credential data from memory.
             */
            ~AWSCredentials()
            {
                // Securely clear sensitive credential data
                if (!m_secretKey.empty())
                {
                    Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_secretKey.data())), m_secretKey.size());
                }
                if (!m_sessionToken.empty())
                {
                    Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_sessionToken.data())), m_sessionToken.size());
                }
            }

            /**
             * Copy assignment operator that securely clears old credential data before assignment.
             */
            AWSCredentials& operator=(const AWSCredentials& other)
            {
                if (this != &other)
                {
                    // Clear old sensitive data before overwriting
                    if (!m_secretKey.empty())
                    {
                        Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_secretKey.data())), m_secretKey.size());
                    }
                    if (!m_sessionToken.empty())
                    {
                        Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_sessionToken.data())), m_sessionToken.size());
                    }
                    
                    // Copy all members
                    m_accessKeyId = other.m_accessKeyId;
                    m_secretKey = other.m_secretKey;
                    m_sessionToken = other.m_sessionToken;
                    m_expiration = other.m_expiration;
                    m_accountId = other.m_accountId;
                    m_context = other.m_context;
                }
                return *this;
            }

            /**
             * Move assignment operator that securely clears old credential data before assignment.
             */
            AWSCredentials& operator=(AWSCredentials&& other) noexcept
            {
                if (this != &other)
                {
                    // Clear old sensitive data before overwriting
                    if (!m_secretKey.empty())
                    {
                        Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_secretKey.data())), m_secretKey.size());
                    }
                    if (!m_sessionToken.empty())
                    {
                        Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_sessionToken.data())), m_sessionToken.size());
                    }
                    
                    // Move all members
                    m_accessKeyId = std::move(other.m_accessKeyId);
                    m_secretKey = std::move(other.m_secretKey);
                    m_sessionToken = std::move(other.m_sessionToken);
                    m_expiration = std::move(other.m_expiration);
                    m_accountId = std::move(other.m_accountId);
                    m_context = std::move(other.m_context);
                }
                return *this;
            }

            bool operator == (const AWSCredentials& other) const
            {
                return m_accessKeyId  == other.m_accessKeyId
                    && m_secretKey    == other.m_secretKey
                    && m_sessionToken == other.m_sessionToken
                    && m_expiration   == other.m_expiration
                    && m_accountId    == other.m_accountId;

            }

            bool operator != (const AWSCredentials& other) const
            {
                return !(other == *this);
            }

            /**
             * If credentials haven't been initialized or been initialized to empty values.
             * Expiration date does not affect the result of this function.
             */
            inline bool IsEmpty() const { return m_accessKeyId.empty() && m_secretKey.empty(); }

            inline bool IsExpired() const { return m_expiration <= Aws::Utils::DateTime::Now(); }

            /**
             * Checks to see if the credentials will expire in a threshold of time
             *
             * @param millisecondThreshold the milliseconds of threshold we will check for expiry.
             * @return true if the credentials will expire before the threshold
             */
            inline bool ExpiresSoon(int64_t millisecondThreshold = 5000) const { return (m_expiration - Aws::Utils::DateTime::Now()).count() < millisecondThreshold; }

            inline bool IsExpiredOrEmpty() const { return IsEmpty() || IsExpired(); }

            /**
             * Gets the underlying access key credential
             */
            inline const Aws::String& GetAWSAccessKeyId() const
            {
                return m_accessKeyId;
            }

            /**
             * Gets the underlying secret key credential
             */
            inline const Aws::String& GetAWSSecretKey() const
            {
                return m_secretKey;
            }

            /**
             * Gets the underlying session token
             */
            inline const Aws::String& GetSessionToken() const
            {
                return m_sessionToken;
            }

            /**
             * Gets the expiration date of the credential
             */
            inline Aws::Utils::DateTime GetExpiration() const
            {
                return m_expiration;
            }

            /**
             * Gets the underlying account id
             */
            inline const Aws::String& GetAccountId() const
            {
              return m_accountId;
            }

            /**
             * Sets the underlying access key credential. Copies from parameter accessKeyId.
             */
            inline void SetAWSAccessKeyId(const Aws::String& accessKeyId)
            {
                m_accessKeyId = accessKeyId;
            }

            /**
             * Sets the underlying secret key credential. Copies from parameter secretKey
             */
            inline void SetAWSSecretKey(const Aws::String& secretKey)
            {
                // Clear old value before setting new one
                if (!m_secretKey.empty())
                {
                    Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_secretKey.data())), m_secretKey.size());
                }
                m_secretKey = secretKey;
            }

            /**
             * Sets the underlying session token. Copies from parameter sessionToken
             */
            inline void SetSessionToken(const Aws::String& sessionToken)
            {
                // Clear old value before setting new one
                if (!m_sessionToken.empty())
                {
                    Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_sessionToken.data())), m_sessionToken.size());
                }
                m_sessionToken = sessionToken;
            }

            /**
             * Sets the underlying account id. Copies from parameter accountId
             */
            inline void SetAccountId(const Aws::String& accountId)
            {
                m_accountId = accountId;
            }


            /**
             * Sets the underlying access key credential. Copies from parameter accessKeyId.
             */
            inline void SetAWSAccessKeyId(const char* accessKeyId)
            {
                m_accessKeyId = accessKeyId;
            }

            /**
             * Sets the underlying secret key credential. Copies from parameter secretKey
             */
            inline void SetAWSSecretKey(const char* secretKey)
            {
                // Clear old value before setting new one
                if (!m_secretKey.empty())
                {
                    Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_secretKey.data())), m_secretKey.size());
                }
                m_secretKey = secretKey;
            }

            /**
             * Sets the underlying secret key credential. Copies from parameter secretKey
             */
            inline void SetSessionToken(const char* sessionToken)
            {
                // Clear old value before setting new one
                if (!m_sessionToken.empty())
                {
                    Aws::Security::SecureMemClear(reinterpret_cast<unsigned char*>(const_cast<char*>(m_sessionToken.data())), m_sessionToken.size());
                }
                m_sessionToken = sessionToken;
            }

            /**
             * Sets the underlying account id. Copies from parameter accountId
             */
            inline void SetAccountId(const char* accountId)
            {
                m_accountId = accountId;
            }

            /**
             * Sets the expiration date of the credential
             */
            inline void SetExpiration(Aws::Utils::DateTime expiration)
            {
                m_expiration = expiration;
            }

            /**
             * Gets credential resolution context. this is information about the call
             * such as what credentials provider was used to to resolve the credentials
             */
            inline CredentialsResolutionContext GetContext() { return m_context; }

            /**
             * Adds a user agent feature used during credentials resolution to the credentials
             * context. This is useful to track which credentials provider was used.
             */
            inline void AddUserAgentFeature(Aws::Client::UserAgentFeature feature) { m_context.AddUserAgentFeature(feature); }
        private:
            Aws::String m_accessKeyId;
            Aws::String m_secretKey;
            Aws::String m_sessionToken;
            Aws::Utils::DateTime m_expiration;
            Aws::String m_accountId;
            CredentialsResolutionContext m_context;
        };
    }
}

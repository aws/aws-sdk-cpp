/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/CredentialsRefreshResult.h>
#include <aws/core/utils/DateTime.h>
#include <memory>

namespace Aws
{
    namespace Internal { class CredentialsRefreshStateImpl; }
    namespace Auth
    {
        /**
         * A single credential fetch against the underlying source, classified fresh/recoverable/
         * non-recoverable. Providers implement this to be wrapped by CredentialsRefreshProvider;
         * the classification drives serve-last-good and backoff.
         */
        class AWS_CORE_API CredentialsSource
        {
        public:
            virtual ~CredentialsSource() = default;
            virtual Aws::Auth::RefreshResult<AWSCredentials> FetchCredentials() = 0;
        };

        /**
         * Wraps a CredentialsSource with the shared credentials-refresh lifecycle (caching,
         * advisory/mandatory windows, jittered backoff, serve-last-good, single in-flight refresh,
         * invalidation). The wrap is applied only when AWS_NEW_CREDENTIAL_REFRESH_2026 is on; when
         * off the source provider is used directly, preserving legacy behavior.
         */
        class AWS_CORE_API CredentialsRefreshProvider : public AWSCredentialsProvider
        {
        public:
            explicit CredentialsRefreshProvider(std::shared_ptr<CredentialsSource> source);
            ~CredentialsRefreshProvider() override;

            AWSCredentials GetAWSCredentials() override;

            // Marks cached credentials for refresh after a service rejects them (ExpiredToken/InvalidToken).
            virtual void Invalidate();

        protected:
            // Clock for the refresh windows/backoff; defaults to the system clock, overridable for tests.
            virtual Aws::Utils::DateTime CurrentTime() const;

        private:
            std::shared_ptr<CredentialsSource> m_source;
            std::unique_ptr<Aws::Internal::CredentialsRefreshStateImpl> m_refreshState;
        };
    } // namespace Auth
} // namespace Aws

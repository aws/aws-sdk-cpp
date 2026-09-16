/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <utility>

namespace Aws
{
    namespace Auth
    {
        // Result of one credential-source fetch: the return type of the FetchCredentialsFromSource() override
        // contract, so it is public (the refresh engine that consumes it stays internal).
        template<typename CredentialsT>
        class RefreshResult
        {
        public:
            enum class Status
            {
                Success,        // fresh credentials obtained
                Recoverable,    // transient failure: back off and keep serving cache
                NonRecoverable  // will not succeed without customer action: raise + briefly cache the error
            };

            RefreshResult() = default;
            RefreshResult(Status status, CredentialsT credentials, Aws::Crt::Optional<Aws::Utils::DateTime> expiration,
                          Aws::String errorMessage)
                : status(status), credentials(std::move(credentials)),
                  expiration(std::move(expiration)), errorMessage(std::move(errorMessage)) {}

            // Named constructors. Only Fresh() carries an expiration.
            static RefreshResult Fresh(CredentialsT credentials, Aws::Utils::DateTime expiration)
            {
                return RefreshResult(Status::Success, std::move(credentials),
                                     Aws::Crt::Optional<Aws::Utils::DateTime>(expiration), {});
            }
            static RefreshResult Recoverable(Aws::String errorMessage = {})
            {
                return RefreshResult(Status::Recoverable, CredentialsT{}, {}, std::move(errorMessage));
            }
            static RefreshResult NonRecoverable(Aws::String errorMessage)
            {
                return RefreshResult(Status::NonRecoverable, CredentialsT{}, {}, std::move(errorMessage));
            }

            Status status{Status::Recoverable};
            CredentialsT credentials{};
            Aws::Crt::Optional<Aws::Utils::DateTime> expiration; // engaged only when status == Success
            Aws::String errorMessage;
        };
    } // namespace Auth
} // namespace Aws

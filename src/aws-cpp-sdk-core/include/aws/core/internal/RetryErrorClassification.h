/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>

namespace Aws
{
    namespace Client
    {
        namespace Internal
        {
            // Error names the core error mapper registers for standard and adaptive retry modes.
            // Legacy retry mode does not retry them.
            static const char* const STANDARD_ONLY_THROTTLING_ERROR_NAMES[] = {
                "TooManyRequestsException", "ProvisionedThroughputExceededException", "TransactionInProgressException",
                "RequestLimitExceeded",     "BandwidthLimitExceeded",                 "LimitExceededException",
                "PriorRequestNotComplete",  "EC2ThrottledException"};

            static const char* const STANDARD_ONLY_TRANSIENT_ERROR_NAMES[] = {"IDPCommunicationError"};

            AWS_CORE_LOCAL bool IsStandardOnlyRetryableError(const AWSError<CoreErrors>& error);

            AWS_CORE_LOCAL void ClassifyUnmodeledTooManyRequests(AWSError<CoreErrors>& error);
        } // namespace Internal
    } // namespace Client
} // namespace Aws

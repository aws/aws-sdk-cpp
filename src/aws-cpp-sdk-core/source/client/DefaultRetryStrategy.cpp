/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/DefaultRetryStrategy.h>

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws;
using namespace Aws::Client;

namespace
{
    // Error names the core error mapper classifies as retryable only since Retry Behavior 2.1.
    // DefaultRetryStrategy is the legacy retry behavior and does not retry them.
    const char* const RETRY_21_ONLY_ERROR_NAMES[] = {"TooManyRequestsException",       "ProvisionedThroughputExceededException",
                                                     "TransactionInProgressException", "RequestLimitExceeded",
                                                     "BandwidthLimitExceeded",         "LimitExceededException",
                                                     "PriorRequestNotComplete",        "EC2ThrottledException",
                                                     "IDPCommunicationError"};

    bool IsRetry21OnlyError(const AWSError<CoreErrors>& error)
    {
        const CoreErrors errorType = error.GetErrorType();
        if (errorType == CoreErrors::THROTTLING || errorType == CoreErrors::NETWORK_CONNECTION)
        {
            const Aws::String& name = error.GetExceptionName();
            for (const char* retry21OnlyName : RETRY_21_ONLY_ERROR_NAMES)
            {
                if (name == retry21OnlyName)
                {
                    return true;
                }
            }
        }
        // A 429 naming an exception the SDK does not know was not retried.
        return error.GetResponseCode() == Aws::Http::HttpResponseCode::TOO_MANY_REQUESTS &&
               errorType == CoreErrors::UNKNOWN && !error.GetExceptionName().empty();
    }
}

bool DefaultRetryStrategy::ShouldRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const
{    
    if (attemptedRetries >= m_maxRetries)
        return false;

    if (IsRetry21OnlyError(error))
        return false;

    return error.ShouldRetry();
}

long DefaultRetryStrategy::CalculateDelayBeforeNextRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const
{
    AWS_UNREFERENCED_PARAM(error);

    if (attemptedRetries == 0)
    {
        return 0;
    }

    return (1UL << attemptedRetries) * m_scaleFactor;
}

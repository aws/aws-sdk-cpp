/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>

namespace Aws {
namespace Client {
namespace Internal {

/**
 * For long-polling operations (e.g. SQS ReceiveMessage), when the retry strategy
 * returns ShouldRetry=false due to quota exhaustion (not max attempts), apply a
 * backoff delay before returning the error to the caller. This prevents all blocked
 * callers from slamming the service simultaneously after quota is restored.
 *
 * Returns the sleep duration in milliseconds, or 0 if no sleep is needed.
 */
inline long ComputeLongPollingSleepMs(
    const AWSError<CoreErrors>& error,
    long retries,
    const std::shared_ptr<RetryStrategy>& retryStrategy,
    bool isLongPollingOperation)
{
    if (!isLongPollingOperation ||
        !error.ShouldRetry() ||
        retries + 1 >= retryStrategy->GetMaxAttempts())
    {
        return 0;
    }
    return retryStrategy->CalculateDelayBeforeNextRetry(error, retries);
}

}  // namespace Internal
}  // namespace Client
}  // namespace Aws

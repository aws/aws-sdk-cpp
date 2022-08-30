/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <gtest/gtest.h>
#include <chrono>
#include <thread>

#if defined(GetMessage)
#undef GetMessage
#endif

#define AWS_ASSERT_SUCCESS(awsCppSdkOutcome) \
  ASSERT_TRUE(awsCppSdkOutcome.IsSuccess()) << awsCppSdkOutcome.GetError().GetMessage()

/**
 * AWS-CPP-SDK test utility helper function to un-conditionally retry not succeeded operation call.
 *   This is just to simplify testing, not to re-create and re-configure clients.
 *   Please use retry strategies in a real production code:
 *   https://docs.aws.amazon.com/sdkref/latest/guide/feature-retry-behavior.html
 * @tparam OutcomeT
 * @param funcToCall
 * @param retries
 * @param sleepBetween
 * @return OutcomeT
 */
template<typename OutcomeT>
OutcomeT CallOperationWithUnconditionalRetry(std::function<OutcomeT(void)> funcToCall,
                                             const size_t retries = 5,
                                             const std::chrono::seconds sleepBetween = std::chrono::seconds (1))
{
    OutcomeT outcome  = funcToCall();
    size_t attempt = 0;
    while(!outcome.IsSuccess() && attempt < retries)
    {
        outcome = funcToCall();
        attempt++;
        std::this_thread::sleep_for(sleepBetween);
    };
    return outcome;
}

template <typename ClientT, typename OutcomeT, typename RequestT>
OutcomeT CallOperationWithUnconditionalRetry(const ClientT* client,
                                             OutcomeT (ClientT::*OperationFunc)(const RequestT&) const,
                                             const RequestT& request,
                                             const size_t retries = 5,
                                             const std::chrono::seconds sleepBetween = std::chrono::seconds (1))
{
    std::function<OutcomeT(void)> func = std::bind(OperationFunc, client, request);
    return CallOperationWithUnconditionalRetry(func, retries, sleepBetween);
}
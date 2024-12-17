/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/UserAgent.h>
#include <smithy/interceptor/Interceptor.h>

#include <utility>

namespace smithy {
namespace client {
class UserAgentInterceptor : public interceptor::Interceptor {
 public:
  explicit UserAgentInterceptor(const Aws::Client::ClientConfiguration& configuration,
    const Aws::String& retryStrategyName,
    const Aws::String& apiName)
      : m_userAgent{configuration, retryStrategyName, apiName} {};
  UserAgentInterceptor(const UserAgentInterceptor& other) = delete;
  UserAgentInterceptor(UserAgentInterceptor&& other) noexcept = default;
  UserAgentInterceptor& operator=(const UserAgentInterceptor& other) = delete;
  UserAgentInterceptor& operator=(UserAgentInterceptor&& other) noexcept = delete;

  ModifyRequestOutcome ModifyBeforeSigning(interceptor::InterceptorContext& context) override {
    auto transmitRequest = context.GetTransmitRequest();
    assert(transmitRequest);
    transmitRequest->SetUserAgent(m_userAgent.SerializeWithFeatures(context.GetModeledRequest().GetUserAgentFeatures()));
    return transmitRequest;
  }

  ModifyResponseOutcome ModifyBeforeDeserialization(interceptor::InterceptorContext& context) override {
    return context.GetTransmitResponse();
  }

  void SetApiName(const Aws::String& apiName) { m_userAgent.SetApiName(apiName); }

  void AddLegacyFeaturesToUserAgent(const Aws::String& valueToAppend) { m_userAgent.AddLegacyFeature(valueToAppend); }

 private:
  Aws::Client::UserAgent m_userAgent;
};
}  // namespace client
}  // namespace smithy

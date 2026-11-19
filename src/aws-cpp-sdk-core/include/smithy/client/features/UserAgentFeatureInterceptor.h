/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <smithy/interceptor/Interceptor.h>

namespace smithy {
namespace client {
namespace features {

/**
 * Adds a fixed set of user agent features to every request. A service's configuration adds this
 * interceptor for features that come from its own options, such as its account ID endpoint mode.
 */
class UserAgentFeatureInterceptor : public smithy::interceptor::Interceptor {
 public:
  explicit UserAgentFeatureInterceptor(Aws::Set<Aws::Client::UserAgentFeature> features)
      : m_features(std::move(features)) {}

  ModifyRequestOutcome ModifyBeforeSigning(smithy::interceptor::InterceptorContext& context) override {
    for (const auto feature : m_features) {
      context.GetModeledRequest().AddUserAgentFeature(feature);
    }
    return context.GetTransmitRequest();
  }

  ModifyResponseOutcome ModifyBeforeDeserialization(smithy::interceptor::InterceptorContext& context) override {
    return context.GetTransmitResponse();
  }

 private:
  Aws::Set<Aws::Client::UserAgentFeature> m_features;
};

}  // namespace features
}  // namespace client
}  // namespace smithy

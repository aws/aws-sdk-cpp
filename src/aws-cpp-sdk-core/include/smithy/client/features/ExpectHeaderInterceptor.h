/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/http/HttpRequest.h>
#include <smithy/interceptor/Interceptor.h>

namespace smithy {
namespace client {
namespace features {

/**
 * Adds "Expect: 100-continue" to streaming requests, so the service can reject a request
 * before the client uploads the body. A service's configuration adds this interceptor
 * unless its disableExpectHeader option is set.
 */
class ExpectHeaderInterceptor : public smithy::interceptor::Interceptor {
 public:
  ModifyRequestOutcome ModifyBeforeSigning(smithy::interceptor::InterceptorContext& context) override {
    const auto& httpRequest = context.GetTransmitRequest();
    if (httpRequest && context.GetModeledRequest().IsStreaming()) {
      httpRequest->SetHeaderValue(Aws::Http::EXPECT_HEADER, Aws::Http::EXPECT_100_CONTINUE_VALUE);
    }
    return httpRequest;
  }

  ModifyResponseOutcome ModifyBeforeDeserialization(smithy::interceptor::InterceptorContext& context) override {
    return context.GetTransmitResponse();
  }
};

}  // namespace features
}  // namespace client
}  // namespace smithy

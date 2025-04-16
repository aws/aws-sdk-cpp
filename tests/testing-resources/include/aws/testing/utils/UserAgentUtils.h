/**
  * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/UserAgent.h>
#include <aws/core/http/HttpRequest.h>

#include <gtest/gtest.h>

inline Aws::Vector<Aws::String> GetFeaturesForRequest(const Aws::Http::HttpRequest &request) {
  const auto& userAgentString = request.GetHeaderValue(Aws::Http::USER_AGENT_HEADER);
  EXPECT_TRUE(!userAgentString.empty());
  const auto userAgentValues = Aws::Utils::StringUtils::Split(userAgentString, ' ');
  const Aws::String businessValuePrefix{"m/"};
  auto businessMetrics = std::find_if(
      userAgentValues.begin(), userAgentValues.end(),
      [&businessValuePrefix](const Aws::String& value) -> bool { return value.find(businessValuePrefix) != Aws::String::npos; });
  EXPECT_TRUE(businessMetrics != userAgentValues.end());
  const auto metrics = [](Aws::String str, const Aws::String& sub) -> Aws::String {
    str.replace(str.find(sub), sub.length(), "");
    return str;
  }(*businessMetrics, businessValuePrefix);
  return Aws::Utils::StringUtils::Split(metrics, ',');
}
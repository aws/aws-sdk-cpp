/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingEndpointRules.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TestNewServiceSDKTestingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TestNewServiceSDKTestingClientConfiguration = Aws::Client::GenericClientConfiguration;
using TestNewServiceSDKTestingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TestNewServiceSDKTesting Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TestNewServiceSDKTestingEndpointProviderBase =
    EndpointProviderBase<TestNewServiceSDKTestingClientConfiguration, TestNewServiceSDKTestingBuiltInParameters,
                         TestNewServiceSDKTestingClientContextParameters>;

using TestNewServiceSDKTestingDefaultEpProviderBase =
    DefaultEndpointProvider<TestNewServiceSDKTestingClientConfiguration, TestNewServiceSDKTestingBuiltInParameters,
                            TestNewServiceSDKTestingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TESTNEWSERVICESDKTESTING_API TestNewServiceSDKTestingEndpointProvider : public TestNewServiceSDKTestingDefaultEpProviderBase {
 public:
  using TestNewServiceSDKTestingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TestNewServiceSDKTestingEndpointProvider()
      : TestNewServiceSDKTestingDefaultEpProviderBase(Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingEndpointRules::GetRulesBlob(),
                                                      Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingEndpointRules::RulesBlobSize) {
  }

  ~TestNewServiceSDKTestingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws

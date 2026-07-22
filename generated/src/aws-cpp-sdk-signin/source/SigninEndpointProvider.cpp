/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signin/SigninEndpointProvider.h>
#include <aws/signin/internal/SigninEndpointRules.h>

namespace Aws {
namespace Signin {
namespace Endpoint {
SigninEndpointProvider::SigninEndpointProvider()
    : SigninDefaultEpProviderBase(Aws::Signin::SigninEndpointRules::GetRulesBlob(), Aws::Signin::SigninEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Signin
}  // namespace Aws

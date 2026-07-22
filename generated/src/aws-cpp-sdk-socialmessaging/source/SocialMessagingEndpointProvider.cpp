/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/SocialMessagingEndpointProvider.h>
#include <aws/socialmessaging/internal/SocialMessagingEndpointRules.h>

namespace Aws {
namespace SocialMessaging {
namespace Endpoint {
SocialMessagingEndpointProvider::SocialMessagingEndpointProvider()
    : SocialMessagingDefaultEpProviderBase(Aws::SocialMessaging::SocialMessagingEndpointRules::GetRulesBlob(),
                                           Aws::SocialMessaging::SocialMessagingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SocialMessaging
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/PersonalizeEventsEndpointProvider.h>
#include <aws/personalize-events/internal/PersonalizeEventsEndpointRules.h>

namespace Aws {
namespace PersonalizeEvents {
namespace Endpoint {
PersonalizeEventsEndpointProvider::PersonalizeEventsEndpointProvider()
    : PersonalizeEventsDefaultEpProviderBase(Aws::PersonalizeEvents::PersonalizeEventsEndpointRules::GetRulesBlob(),
                                             Aws::PersonalizeEvents::PersonalizeEventsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PersonalizeEvents
}  // namespace Aws

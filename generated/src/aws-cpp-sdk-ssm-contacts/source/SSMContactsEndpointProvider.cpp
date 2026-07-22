/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/SSMContactsEndpointProvider.h>
#include <aws/ssm-contacts/internal/SSMContactsEndpointRules.h>

namespace Aws {
namespace SSMContacts {
namespace Endpoint {
SSMContactsEndpointProvider::SSMContactsEndpointProvider()
    : SSMContactsDefaultEpProviderBase(Aws::SSMContacts::SSMContactsEndpointRules::GetRulesBlob(),
                                       Aws::SSMContacts::SSMContactsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSMContacts
}  // namespace Aws

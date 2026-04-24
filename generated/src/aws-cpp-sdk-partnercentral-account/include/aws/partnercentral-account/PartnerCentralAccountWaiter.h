/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/partnercentral-account/PartnerCentralAccountClient.h>

#include <algorithm>

namespace Aws {
namespace PartnerCentralAccount {

template <typename DerivedClient = PartnerCentralAccountClient>
class PartnerCentralAccountWaiter {
 public:
};
}  // namespace PartnerCentralAccount
}  // namespace Aws

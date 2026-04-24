/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/partnercentral-channel/PartnerCentralChannelClient.h>

#include <algorithm>

namespace Aws {
namespace PartnerCentralChannel {

template <typename DerivedClient = PartnerCentralChannelClient>
class PartnerCentralChannelWaiter {
 public:
};
}  // namespace PartnerCentralChannel
}  // namespace Aws

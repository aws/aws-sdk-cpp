/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/taxsettings/TaxSettingsClient.h>

#include <algorithm>

namespace Aws {
namespace TaxSettings {

template <typename DerivedClient = TaxSettingsClient>
class TaxSettingsWaiter {
 public:
};
}  // namespace TaxSettings
}  // namespace Aws

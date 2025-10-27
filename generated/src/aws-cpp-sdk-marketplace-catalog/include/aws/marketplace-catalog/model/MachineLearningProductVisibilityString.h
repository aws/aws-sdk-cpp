/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class MachineLearningProductVisibilityString { NOT_SET, Limited, Public, Restricted, Draft };

namespace MachineLearningProductVisibilityStringMapper {
AWS_MARKETPLACECATALOG_API MachineLearningProductVisibilityString GetMachineLearningProductVisibilityStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForMachineLearningProductVisibilityString(MachineLearningProductVisibilityString value);
}  // namespace MachineLearningProductVisibilityStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>

namespace Aws {
namespace MediaPackage {
namespace Model {
enum class AdsOnDeliveryRestrictions { NOT_SET, NONE, RESTRICTED, UNRESTRICTED, BOTH };

namespace AdsOnDeliveryRestrictionsMapper {
AWS_MEDIAPACKAGE_API AdsOnDeliveryRestrictions GetAdsOnDeliveryRestrictionsForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions value);
}  // namespace AdsOnDeliveryRestrictionsMapper
}  // namespace Model
}  // namespace MediaPackage
}  // namespace Aws

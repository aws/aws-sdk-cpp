/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class OfferingType { NOT_SET, NO_UPFRONT };

namespace OfferingTypeMapper {
AWS_MEDIALIVE_API OfferingType GetOfferingTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForOfferingType(OfferingType value);
}  // namespace OfferingTypeMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws

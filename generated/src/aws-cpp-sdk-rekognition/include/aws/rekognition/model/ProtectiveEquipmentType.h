/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws {
namespace Rekognition {
namespace Model {
enum class ProtectiveEquipmentType { NOT_SET, FACE_COVER, HAND_COVER, HEAD_COVER };

namespace ProtectiveEquipmentTypeMapper {
AWS_REKOGNITION_API ProtectiveEquipmentType GetProtectiveEquipmentTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForProtectiveEquipmentType(ProtectiveEquipmentType value);
}  // namespace ProtectiveEquipmentTypeMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws

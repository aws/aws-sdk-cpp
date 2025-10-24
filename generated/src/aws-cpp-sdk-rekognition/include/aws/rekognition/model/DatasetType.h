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
enum class DatasetType { NOT_SET, TRAIN, TEST };

namespace DatasetTypeMapper {
AWS_REKOGNITION_API DatasetType GetDatasetTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForDatasetType(DatasetType value);
}  // namespace DatasetTypeMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws

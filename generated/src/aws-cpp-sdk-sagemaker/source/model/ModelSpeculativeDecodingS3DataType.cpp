/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ModelSpeculativeDecodingS3DataType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ModelSpeculativeDecodingS3DataTypeMapper {

static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");
static const int ManifestFile_HASH = HashingUtils::HashString("ManifestFile");

ModelSpeculativeDecodingS3DataType GetModelSpeculativeDecodingS3DataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3Prefix_HASH) {
    return ModelSpeculativeDecodingS3DataType::S3Prefix;
  } else if (hashCode == ManifestFile_HASH) {
    return ModelSpeculativeDecodingS3DataType::ManifestFile;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelSpeculativeDecodingS3DataType>(hashCode);
  }

  return ModelSpeculativeDecodingS3DataType::NOT_SET;
}

Aws::String GetNameForModelSpeculativeDecodingS3DataType(ModelSpeculativeDecodingS3DataType enumValue) {
  switch (enumValue) {
    case ModelSpeculativeDecodingS3DataType::NOT_SET:
      return {};
    case ModelSpeculativeDecodingS3DataType::S3Prefix:
      return "S3Prefix";
    case ModelSpeculativeDecodingS3DataType::ManifestFile:
      return "ManifestFile";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelSpeculativeDecodingS3DataTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

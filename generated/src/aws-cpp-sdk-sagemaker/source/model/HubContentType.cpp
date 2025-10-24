﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/HubContentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace HubContentTypeMapper {

static const int Model_HASH = HashingUtils::HashString("Model");
static const int Notebook_HASH = HashingUtils::HashString("Notebook");
static const int ModelReference_HASH = HashingUtils::HashString("ModelReference");

HubContentType GetHubContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Model_HASH) {
    return HubContentType::Model;
  } else if (hashCode == Notebook_HASH) {
    return HubContentType::Notebook;
  } else if (hashCode == ModelReference_HASH) {
    return HubContentType::ModelReference;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HubContentType>(hashCode);
  }

  return HubContentType::NOT_SET;
}

Aws::String GetNameForHubContentType(HubContentType enumValue) {
  switch (enumValue) {
    case HubContentType::NOT_SET:
      return {};
    case HubContentType::Model:
      return "Model";
    case HubContentType::Notebook:
      return "Notebook";
    case HubContentType::ModelReference:
      return "ModelReference";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HubContentTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

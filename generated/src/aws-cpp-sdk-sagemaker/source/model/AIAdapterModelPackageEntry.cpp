/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIAdapterModelPackageEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIAdapterModelPackageEntry::AIAdapterModelPackageEntry(JsonView jsonValue) { *this = jsonValue; }

AIAdapterModelPackageEntry& AIAdapterModelPackageEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdapterId")) {
    m_adapterId = jsonValue.GetString("AdapterId");
    m_adapterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AIAdapterModelPackageEntry::Jsonize() const {
  JsonValue payload;

  if (m_adapterIdHasBeenSet) {
    payload.WithString("AdapterId", m_adapterId);
  }

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("ModelPackageArn", m_modelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

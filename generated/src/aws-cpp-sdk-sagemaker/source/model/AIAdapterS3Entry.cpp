/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIAdapterS3Entry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIAdapterS3Entry::AIAdapterS3Entry(JsonView jsonValue) { *this = jsonValue; }

AIAdapterS3Entry& AIAdapterS3Entry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdapterId")) {
    m_adapterId = jsonValue.GetString("AdapterId");
    m_adapterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3Uri")) {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue AIAdapterS3Entry::Jsonize() const {
  JsonValue payload;

  if (m_adapterIdHasBeenSet) {
    payload.WithString("AdapterId", m_adapterId);
  }

  if (m_s3UriHasBeenSet) {
    payload.WithString("S3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

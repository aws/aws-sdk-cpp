/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DatasetSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

DatasetSource::DatasetSource(JsonView jsonValue) { *this = jsonValue; }

DatasetSource& DatasetSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DatasetArn")) {
    m_datasetArn = jsonValue.GetString("DatasetArn");
    m_datasetArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetSource::Jsonize() const {
  JsonValue payload;

  if (m_datasetArnHasBeenSet) {
    payload.WithString("DatasetArn", m_datasetArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

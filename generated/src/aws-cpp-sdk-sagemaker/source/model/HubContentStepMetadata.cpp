/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/HubContentStepMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

HubContentStepMetadata::HubContentStepMetadata(JsonView jsonValue) { *this = jsonValue; }

HubContentStepMetadata& HubContentStepMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HubArn")) {
    m_hubArn = jsonValue.GetString("HubArn");
    m_hubArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HubContentArn")) {
    m_hubContentArn = jsonValue.GetString("HubContentArn");
    m_hubContentArnHasBeenSet = true;
  }
  return *this;
}

JsonValue HubContentStepMetadata::Jsonize() const {
  JsonValue payload;

  if (m_hubArnHasBeenSet) {
    payload.WithString("HubArn", m_hubArn);
  }

  if (m_hubContentArnHasBeenSet) {
    payload.WithString("HubContentArn", m_hubContentArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

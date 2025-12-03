/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/BaseModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

BaseModel::BaseModel(JsonView jsonValue) { *this = jsonValue; }

BaseModel& BaseModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HubContentName")) {
    m_hubContentName = jsonValue.GetString("HubContentName");
    m_hubContentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HubContentVersion")) {
    m_hubContentVersion = jsonValue.GetString("HubContentVersion");
    m_hubContentVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecipeName")) {
    m_recipeName = jsonValue.GetString("RecipeName");
    m_recipeNameHasBeenSet = true;
  }
  return *this;
}

JsonValue BaseModel::Jsonize() const {
  JsonValue payload;

  if (m_hubContentNameHasBeenSet) {
    payload.WithString("HubContentName", m_hubContentName);
  }

  if (m_hubContentVersionHasBeenSet) {
    payload.WithString("HubContentVersion", m_hubContentVersion);
  }

  if (m_recipeNameHasBeenSet) {
    payload.WithString("RecipeName", m_recipeName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

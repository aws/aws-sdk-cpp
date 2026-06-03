/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowSummary::MetaFlowSummary(JsonView jsonValue) { *this = jsonValue; }

MetaFlowSummary& MetaFlowSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("flowId")) {
    m_flowId = jsonValue.GetString("flowId");
    m_flowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowName")) {
    m_flowName = jsonValue.GetString("flowName");
    m_flowNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowStatus")) {
    m_flowStatus = jsonValue.GetString("flowStatus");
    m_flowStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowCategories")) {
    Aws::Utils::Array<JsonView> flowCategoriesJsonList = jsonValue.GetArray("flowCategories");
    for (unsigned flowCategoriesIndex = 0; flowCategoriesIndex < flowCategoriesJsonList.GetLength(); ++flowCategoriesIndex) {
      m_flowCategories.push_back(
          MetaFlowCategoryMapper::GetMetaFlowCategoryForName(flowCategoriesJsonList[flowCategoriesIndex].AsString()));
    }
    m_flowCategoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validationErrors")) {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for (unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex) {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsString());
    }
    m_validationErrorsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowSummary::Jsonize() const {
  JsonValue payload;

  if (m_flowIdHasBeenSet) {
    payload.WithString("flowId", m_flowId);
  }

  if (m_flowNameHasBeenSet) {
    payload.WithString("flowName", m_flowName);
  }

  if (m_flowStatusHasBeenSet) {
    payload.WithString("flowStatus", m_flowStatus);
  }

  if (m_flowCategoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> flowCategoriesJsonList(m_flowCategories.size());
    for (unsigned flowCategoriesIndex = 0; flowCategoriesIndex < flowCategoriesJsonList.GetLength(); ++flowCategoriesIndex) {
      flowCategoriesJsonList[flowCategoriesIndex].AsString(
          MetaFlowCategoryMapper::GetNameForMetaFlowCategory(m_flowCategories[flowCategoriesIndex]));
    }
    payload.WithArray("flowCategories", std::move(flowCategoriesJsonList));
  }

  if (m_validationErrorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> validationErrorsJsonList(m_validationErrors.size());
    for (unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex) {
      validationErrorsJsonList[validationErrorsIndex].AsString(m_validationErrors[validationErrorsIndex]);
    }
    payload.WithArray("validationErrors", std::move(validationErrorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws

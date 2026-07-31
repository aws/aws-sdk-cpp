/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestTemplate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestTemplate::TestTemplate(JsonView jsonValue) { *this = jsonValue; }

TestTemplate& TestTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("testTemplateArn")) {
    m_testTemplateArn = jsonValue.GetString("testTemplateArn");
    m_testTemplateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for (unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex) {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  return *this;
}

JsonValue TestTemplate::Jsonize() const {
  JsonValue payload;

  if (m_testTemplateArnHasBeenSet) {
    payload.WithString("testTemplateArn", m_testTemplateArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_parametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
    for (unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex) {
      parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
    }
    payload.WithArray("parameters", std::move(parametersJsonList));
  }

  if (m_actionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
    }
    payload.WithArray("actions", std::move(actionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ResourceLogicalExpression.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ResourceLogicalExpression::ResourceLogicalExpression(JsonView jsonValue) { *this = jsonValue; }

ResourceLogicalExpression& ResourceLogicalExpression::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("criteria")) {
    m_criteria = jsonValue.GetObject("criteria");
    m_criteriaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("and")) {
    Aws::Utils::Array<JsonView> andJsonList = jsonValue.GetArray("and");
    for (unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex) {
      m_and.push_back(andJsonList[andIndex].AsObject());
    }
    m_andHasBeenSet = true;
  }
  if (jsonValue.ValueExists("or")) {
    Aws::Utils::Array<JsonView> orJsonList = jsonValue.GetArray("or");
    for (unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex) {
      m_or.push_back(orJsonList[orIndex].AsObject());
    }
    m_orHasBeenSet = true;
  }
  if (jsonValue.ValueExists("not")) {
    m_not = Aws::MakeShared<ResourceLogicalExpression>("ResourceLogicalExpression", jsonValue.GetObject("not"));
    m_notHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceLogicalExpression::Jsonize() const {
  JsonValue payload;

  if (m_criteriaHasBeenSet) {
    payload.WithObject("criteria", m_criteria.Jsonize());
  }

  if (m_andHasBeenSet) {
    Aws::Utils::Array<JsonValue> andJsonList(m_and.size());
    for (unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex) {
      andJsonList[andIndex].AsObject(m_and[andIndex].Jsonize());
    }
    payload.WithArray("and", std::move(andJsonList));
  }

  if (m_orHasBeenSet) {
    Aws::Utils::Array<JsonValue> orJsonList(m_or.size());
    for (unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex) {
      orJsonList[orIndex].AsObject(m_or[orIndex].Jsonize());
    }
    payload.WithArray("or", std::move(orJsonList));
  }

  if (m_notHasBeenSet) {
    payload.WithObject("not", m_not->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/JoinOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

JoinOperation::JoinOperation(JsonView jsonValue) { *this = jsonValue; }

JoinOperation& JoinOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LeftOperand")) {
    m_leftOperand = jsonValue.GetObject("LeftOperand");
    m_leftOperandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RightOperand")) {
    m_rightOperand = jsonValue.GetObject("RightOperand");
    m_rightOperandHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = JoinOperationTypeMapper::GetJoinOperationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OnClause")) {
    m_onClause = jsonValue.GetString("OnClause");
    m_onClauseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LeftOperandProperties")) {
    m_leftOperandProperties = jsonValue.GetObject("LeftOperandProperties");
    m_leftOperandPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RightOperandProperties")) {
    m_rightOperandProperties = jsonValue.GetObject("RightOperandProperties");
    m_rightOperandPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue JoinOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_leftOperandHasBeenSet) {
    payload.WithObject("LeftOperand", m_leftOperand.Jsonize());
  }

  if (m_rightOperandHasBeenSet) {
    payload.WithObject("RightOperand", m_rightOperand.Jsonize());
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", JoinOperationTypeMapper::GetNameForJoinOperationType(m_type));
  }

  if (m_onClauseHasBeenSet) {
    payload.WithString("OnClause", m_onClause);
  }

  if (m_leftOperandPropertiesHasBeenSet) {
    payload.WithObject("LeftOperandProperties", m_leftOperandProperties.Jsonize());
  }

  if (m_rightOperandPropertiesHasBeenSet) {
    payload.WithObject("RightOperandProperties", m_rightOperandProperties.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/TemplateInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

TemplateInput::TemplateInput() : 
    m_inputNameHasBeenSet(false),
    m_dataType(DataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
}

TemplateInput::TemplateInput(JsonView jsonValue) : 
    m_inputNameHasBeenSet(false),
    m_dataType(DataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateInput& TemplateInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputName"))
  {
    m_inputName = jsonValue.GetString("inputName");

    m_inputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = DataTypeMapper::GetDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateInput::Jsonize() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("inputName", m_inputName);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", DataTypeMapper::GetNameForDataType(m_dataType));
  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws

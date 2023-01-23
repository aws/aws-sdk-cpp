/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StepOutput.h>
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

StepOutput::StepOutput() : 
    m_nameHasBeenSet(false),
    m_dataType(DataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
}

StepOutput::StepOutput(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dataType(DataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
  *this = jsonValue;
}

StepOutput& StepOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

JsonValue StepOutput::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

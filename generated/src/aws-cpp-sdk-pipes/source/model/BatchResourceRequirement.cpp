/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/BatchResourceRequirement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

BatchResourceRequirement::BatchResourceRequirement() : 
    m_type(BatchResourceRequirementType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

BatchResourceRequirement::BatchResourceRequirement(JsonView jsonValue) : 
    m_type(BatchResourceRequirementType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

BatchResourceRequirement& BatchResourceRequirement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = BatchResourceRequirementTypeMapper::GetBatchResourceRequirementTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchResourceRequirement::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", BatchResourceRequirementTypeMapper::GetNameForBatchResourceRequirementType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CalculatedField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CalculatedField::CalculatedField() : 
    m_dataSetIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

CalculatedField::CalculatedField(JsonView jsonValue) : 
    m_dataSetIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

CalculatedField& CalculatedField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetIdentifier"))
  {
    m_dataSetIdentifier = jsonValue.GetString("DataSetIdentifier");

    m_dataSetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculatedField::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdentifierHasBeenSet)
  {
   payload.WithString("DataSetIdentifier", m_dataSetIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

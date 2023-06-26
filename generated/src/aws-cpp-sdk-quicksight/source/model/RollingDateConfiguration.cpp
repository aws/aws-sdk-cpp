/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RollingDateConfiguration.h>
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

RollingDateConfiguration::RollingDateConfiguration() : 
    m_dataSetIdentifierHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

RollingDateConfiguration::RollingDateConfiguration(JsonView jsonValue) : 
    m_dataSetIdentifierHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

RollingDateConfiguration& RollingDateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetIdentifier"))
  {
    m_dataSetIdentifier = jsonValue.GetString("DataSetIdentifier");

    m_dataSetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue RollingDateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdentifierHasBeenSet)
  {
   payload.WithString("DataSetIdentifier", m_dataSetIdentifier);

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

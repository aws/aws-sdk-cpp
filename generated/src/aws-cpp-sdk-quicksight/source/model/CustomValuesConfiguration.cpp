/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomValuesConfiguration.h>
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

CustomValuesConfiguration::CustomValuesConfiguration() : 
    m_includeNullValue(false),
    m_includeNullValueHasBeenSet(false),
    m_customValuesHasBeenSet(false)
{
}

CustomValuesConfiguration::CustomValuesConfiguration(JsonView jsonValue) : 
    m_includeNullValue(false),
    m_includeNullValueHasBeenSet(false),
    m_customValuesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomValuesConfiguration& CustomValuesConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludeNullValue"))
  {
    m_includeNullValue = jsonValue.GetBool("IncludeNullValue");

    m_includeNullValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomValues"))
  {
    m_customValues = jsonValue.GetObject("CustomValues");

    m_customValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomValuesConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_includeNullValueHasBeenSet)
  {
   payload.WithBool("IncludeNullValue", m_includeNullValue);

  }

  if(m_customValuesHasBeenSet)
  {
   payload.WithObject("CustomValues", m_customValues.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

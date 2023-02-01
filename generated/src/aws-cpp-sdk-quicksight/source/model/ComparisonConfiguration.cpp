/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComparisonConfiguration.h>
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

ComparisonConfiguration::ComparisonConfiguration() : 
    m_comparisonMethod(ComparisonMethod::NOT_SET),
    m_comparisonMethodHasBeenSet(false),
    m_comparisonFormatHasBeenSet(false)
{
}

ComparisonConfiguration::ComparisonConfiguration(JsonView jsonValue) : 
    m_comparisonMethod(ComparisonMethod::NOT_SET),
    m_comparisonMethodHasBeenSet(false),
    m_comparisonFormatHasBeenSet(false)
{
  *this = jsonValue;
}

ComparisonConfiguration& ComparisonConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComparisonMethod"))
  {
    m_comparisonMethod = ComparisonMethodMapper::GetComparisonMethodForName(jsonValue.GetString("ComparisonMethod"));

    m_comparisonMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonFormat"))
  {
    m_comparisonFormat = jsonValue.GetObject("ComparisonFormat");

    m_comparisonFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue ComparisonConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonMethodHasBeenSet)
  {
   payload.WithString("ComparisonMethod", ComparisonMethodMapper::GetNameForComparisonMethod(m_comparisonMethod));
  }

  if(m_comparisonFormatHasBeenSet)
  {
   payload.WithObject("ComparisonFormat", m_comparisonFormat.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

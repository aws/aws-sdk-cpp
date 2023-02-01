/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DecimalPlacesConfiguration.h>
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

DecimalPlacesConfiguration::DecimalPlacesConfiguration() : 
    m_decimalPlaces(0),
    m_decimalPlacesHasBeenSet(false)
{
}

DecimalPlacesConfiguration::DecimalPlacesConfiguration(JsonView jsonValue) : 
    m_decimalPlaces(0),
    m_decimalPlacesHasBeenSet(false)
{
  *this = jsonValue;
}

DecimalPlacesConfiguration& DecimalPlacesConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DecimalPlaces"))
  {
    m_decimalPlaces = jsonValue.GetInt64("DecimalPlaces");

    m_decimalPlacesHasBeenSet = true;
  }

  return *this;
}

JsonValue DecimalPlacesConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_decimalPlacesHasBeenSet)
  {
   payload.WithInt64("DecimalPlaces", m_decimalPlaces);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

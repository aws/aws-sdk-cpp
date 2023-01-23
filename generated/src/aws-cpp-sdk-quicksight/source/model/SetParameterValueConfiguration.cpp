/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SetParameterValueConfiguration.h>
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

SetParameterValueConfiguration::SetParameterValueConfiguration() : 
    m_destinationParameterNameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

SetParameterValueConfiguration::SetParameterValueConfiguration(JsonView jsonValue) : 
    m_destinationParameterNameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

SetParameterValueConfiguration& SetParameterValueConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationParameterName"))
  {
    m_destinationParameterName = jsonValue.GetString("DestinationParameterName");

    m_destinationParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue SetParameterValueConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationParameterNameHasBeenSet)
  {
   payload.WithString("DestinationParameterName", m_destinationParameterName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

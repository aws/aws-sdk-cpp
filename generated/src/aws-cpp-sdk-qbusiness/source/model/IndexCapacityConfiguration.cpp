/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/IndexCapacityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

IndexCapacityConfiguration::IndexCapacityConfiguration() : 
    m_units(0),
    m_unitsHasBeenSet(false)
{
}

IndexCapacityConfiguration::IndexCapacityConfiguration(JsonView jsonValue) : 
    m_units(0),
    m_unitsHasBeenSet(false)
{
  *this = jsonValue;
}

IndexCapacityConfiguration& IndexCapacityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("units"))
  {
    m_units = jsonValue.GetInteger("units");

    m_unitsHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexCapacityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_unitsHasBeenSet)
  {
   payload.WithInteger("units", m_units);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws

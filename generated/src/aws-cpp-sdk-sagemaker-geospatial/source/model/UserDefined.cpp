/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/UserDefined.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

UserDefined::UserDefined(JsonView jsonValue)
{
  *this = jsonValue;
}

UserDefined& UserDefined::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue UserDefined::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws

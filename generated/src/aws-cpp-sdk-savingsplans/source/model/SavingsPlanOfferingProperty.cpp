/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanOfferingProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

SavingsPlanOfferingProperty::SavingsPlanOfferingProperty() : 
    m_name(SavingsPlanOfferingPropertyKey::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

SavingsPlanOfferingProperty::SavingsPlanOfferingProperty(JsonView jsonValue) : 
    m_name(SavingsPlanOfferingPropertyKey::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlanOfferingProperty& SavingsPlanOfferingProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = SavingsPlanOfferingPropertyKeyMapper::GetSavingsPlanOfferingPropertyKeyForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlanOfferingProperty::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", SavingsPlanOfferingPropertyKeyMapper::GetNameForSavingsPlanOfferingPropertyKey(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws

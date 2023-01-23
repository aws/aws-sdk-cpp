/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

QualificationRequirement::QualificationRequirement() : 
    m_qualificationTypeIdHasBeenSet(false),
    m_comparator(Comparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_integerValuesHasBeenSet(false),
    m_localeValuesHasBeenSet(false),
    m_actionsGuarded(HITAccessActions::NOT_SET),
    m_actionsGuardedHasBeenSet(false)
{
}

QualificationRequirement::QualificationRequirement(JsonView jsonValue) : 
    m_qualificationTypeIdHasBeenSet(false),
    m_comparator(Comparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_integerValuesHasBeenSet(false),
    m_localeValuesHasBeenSet(false),
    m_actionsGuarded(HITAccessActions::NOT_SET),
    m_actionsGuardedHasBeenSet(false)
{
  *this = jsonValue;
}

QualificationRequirement& QualificationRequirement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QualificationTypeId"))
  {
    m_qualificationTypeId = jsonValue.GetString("QualificationTypeId");

    m_qualificationTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparator"))
  {
    m_comparator = ComparatorMapper::GetComparatorForName(jsonValue.GetString("Comparator"));

    m_comparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerValues"))
  {
    Aws::Utils::Array<JsonView> integerValuesJsonList = jsonValue.GetArray("IntegerValues");
    for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
    {
      m_integerValues.push_back(integerValuesJsonList[integerValuesIndex].AsInteger());
    }
    m_integerValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocaleValues"))
  {
    Aws::Utils::Array<JsonView> localeValuesJsonList = jsonValue.GetArray("LocaleValues");
    for(unsigned localeValuesIndex = 0; localeValuesIndex < localeValuesJsonList.GetLength(); ++localeValuesIndex)
    {
      m_localeValues.push_back(localeValuesJsonList[localeValuesIndex].AsObject());
    }
    m_localeValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionsGuarded"))
  {
    m_actionsGuarded = HITAccessActionsMapper::GetHITAccessActionsForName(jsonValue.GetString("ActionsGuarded"));

    m_actionsGuardedHasBeenSet = true;
  }

  return *this;
}

JsonValue QualificationRequirement::Jsonize() const
{
  JsonValue payload;

  if(m_qualificationTypeIdHasBeenSet)
  {
   payload.WithString("QualificationTypeId", m_qualificationTypeId);

  }

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("Comparator", ComparatorMapper::GetNameForComparator(m_comparator));
  }

  if(m_integerValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerValuesJsonList(m_integerValues.size());
   for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
   {
     integerValuesJsonList[integerValuesIndex].AsInteger(m_integerValues[integerValuesIndex]);
   }
   payload.WithArray("IntegerValues", std::move(integerValuesJsonList));

  }

  if(m_localeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localeValuesJsonList(m_localeValues.size());
   for(unsigned localeValuesIndex = 0; localeValuesIndex < localeValuesJsonList.GetLength(); ++localeValuesIndex)
   {
     localeValuesJsonList[localeValuesIndex].AsObject(m_localeValues[localeValuesIndex].Jsonize());
   }
   payload.WithArray("LocaleValues", std::move(localeValuesJsonList));

  }

  if(m_actionsGuardedHasBeenSet)
  {
   payload.WithString("ActionsGuarded", HITAccessActionsMapper::GetNameForHITAccessActions(m_actionsGuarded));
  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws

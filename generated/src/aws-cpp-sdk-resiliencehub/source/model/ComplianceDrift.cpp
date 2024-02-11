/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ComplianceDrift.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ComplianceDrift::ComplianceDrift() : 
    m_actualReferenceIdHasBeenSet(false),
    m_actualValueHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_diffType(DifferenceType::NOT_SET),
    m_diffTypeHasBeenSet(false),
    m_driftType(DriftType::NOT_SET),
    m_driftTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_expectedReferenceIdHasBeenSet(false),
    m_expectedValueHasBeenSet(false)
{
}

ComplianceDrift::ComplianceDrift(JsonView jsonValue) : 
    m_actualReferenceIdHasBeenSet(false),
    m_actualValueHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_diffType(DifferenceType::NOT_SET),
    m_diffTypeHasBeenSet(false),
    m_driftType(DriftType::NOT_SET),
    m_driftTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_expectedReferenceIdHasBeenSet(false),
    m_expectedValueHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceDrift& ComplianceDrift::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actualReferenceId"))
  {
    m_actualReferenceId = jsonValue.GetString("actualReferenceId");

    m_actualReferenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actualValue"))
  {
    Aws::Map<Aws::String, JsonView> actualValueJsonMap = jsonValue.GetObject("actualValue").GetAllObjects();
    for(auto& actualValueItem : actualValueJsonMap)
    {
      m_actualValue[DisruptionTypeMapper::GetDisruptionTypeForName(actualValueItem.first)] = actualValueItem.second.AsObject();
    }
    m_actualValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");

    m_appVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diffType"))
  {
    m_diffType = DifferenceTypeMapper::GetDifferenceTypeForName(jsonValue.GetString("diffType"));

    m_diffTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("driftType"))
  {
    m_driftType = DriftTypeMapper::GetDriftTypeForName(jsonValue.GetString("driftType"));

    m_driftTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = jsonValue.GetString("entityType");

    m_entityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expectedReferenceId"))
  {
    m_expectedReferenceId = jsonValue.GetString("expectedReferenceId");

    m_expectedReferenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expectedValue"))
  {
    Aws::Map<Aws::String, JsonView> expectedValueJsonMap = jsonValue.GetObject("expectedValue").GetAllObjects();
    for(auto& expectedValueItem : expectedValueJsonMap)
    {
      m_expectedValue[DisruptionTypeMapper::GetDisruptionTypeForName(expectedValueItem.first)] = expectedValueItem.second.AsObject();
    }
    m_expectedValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceDrift::Jsonize() const
{
  JsonValue payload;

  if(m_actualReferenceIdHasBeenSet)
  {
   payload.WithString("actualReferenceId", m_actualReferenceId);

  }

  if(m_actualValueHasBeenSet)
  {
   JsonValue actualValueJsonMap;
   for(auto& actualValueItem : m_actualValue)
   {
     actualValueJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(actualValueItem.first), actualValueItem.second.Jsonize());
   }
   payload.WithObject("actualValue", std::move(actualValueJsonMap));

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("appVersion", m_appVersion);

  }

  if(m_diffTypeHasBeenSet)
  {
   payload.WithString("diffType", DifferenceTypeMapper::GetNameForDifferenceType(m_diffType));
  }

  if(m_driftTypeHasBeenSet)
  {
   payload.WithString("driftType", DriftTypeMapper::GetNameForDriftType(m_driftType));
  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("entityType", m_entityType);

  }

  if(m_expectedReferenceIdHasBeenSet)
  {
   payload.WithString("expectedReferenceId", m_expectedReferenceId);

  }

  if(m_expectedValueHasBeenSet)
  {
   JsonValue expectedValueJsonMap;
   for(auto& expectedValueItem : m_expectedValue)
   {
     expectedValueJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(expectedValueItem.first), expectedValueItem.second.Jsonize());
   }
   payload.WithObject("expectedValue", std::move(expectedValueJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

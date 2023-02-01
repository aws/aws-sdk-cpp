/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ParameterHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ParameterHistory::ParameterHistory() : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tier(ParameterTier::NOT_SET),
    m_tierHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

ParameterHistory::ParameterHistory(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tier(ParameterTier::NOT_SET),
    m_tierHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterHistory& ParameterHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedUser"))
  {
    m_lastModifiedUser = jsonValue.GetString("LastModifiedUser");

    m_lastModifiedUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedPattern"))
  {
    m_allowedPattern = jsonValue.GetString("AllowedPattern");

    m_allowedPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = ParameterTierMapper::GetParameterTierForName(jsonValue.GetString("Tier"));

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policies"))
  {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("Policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = jsonValue.GetString("DataType");

    m_dataTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterHistory::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedUserHasBeenSet)
  {
   payload.WithString("LastModifiedUser", m_lastModifiedUser);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_allowedPatternHasBeenSet)
  {
   payload.WithString("AllowedPattern", m_allowedPattern);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", ParameterTierMapper::GetNameForParameterTier(m_tier));
  }

  if(m_policiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
   }
   payload.WithArray("Policies", std::move(policiesJsonList));

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws

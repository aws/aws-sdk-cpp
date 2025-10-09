/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ActionConnector.h>
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

ActionConnector::ActionConnector(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionConnector& ActionConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionConnectorId"))
  {
    m_actionConnectorId = jsonValue.GetString("ActionConnectorId");
    m_actionConnectorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ActionConnectorTypeMapper::GetActionConnectorTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationConfig"))
  {
    m_authenticationConfig = jsonValue.GetObject("AuthenticationConfig");
    m_authenticationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnabledActions"))
  {
    Aws::Utils::Array<JsonView> enabledActionsJsonList = jsonValue.GetArray("EnabledActions");
    for(unsigned enabledActionsIndex = 0; enabledActionsIndex < enabledActionsJsonList.GetLength(); ++enabledActionsIndex)
    {
      m_enabledActions.push_back(enabledActionsJsonList[enabledActionsIndex].AsString());
    }
    m_enabledActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("VpcConnectionArn");
    m_vpcConnectionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionConnector::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_actionConnectorIdHasBeenSet)
  {
   payload.WithString("ActionConnectorId", m_actionConnectorId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ActionConnectorTypeMapper::GetNameForActionConnectorType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_authenticationConfigHasBeenSet)
  {
   payload.WithObject("AuthenticationConfig", m_authenticationConfig.Jsonize());

  }

  if(m_enabledActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledActionsJsonList(m_enabledActions.size());
   for(unsigned enabledActionsIndex = 0; enabledActionsIndex < enabledActionsJsonList.GetLength(); ++enabledActionsIndex)
   {
     enabledActionsJsonList[enabledActionsIndex].AsString(m_enabledActions[enabledActionsIndex]);
   }
   payload.WithArray("EnabledActions", std::move(enabledActionsJsonList));

  }

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("VpcConnectionArn", m_vpcConnectionArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

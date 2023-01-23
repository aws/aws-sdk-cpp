/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/NetworkSettingsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

NetworkSettingsSummary::NetworkSettingsSummary() : 
    m_networkSettingsArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkSettingsSummary::NetworkSettingsSummary(JsonView jsonValue) : 
    m_networkSettingsArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkSettingsSummary& NetworkSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkSettingsArn"))
  {
    m_networkSettingsArn = jsonValue.GetString("networkSettingsArn");

    m_networkSettingsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_networkSettingsArnHasBeenSet)
  {
   payload.WithString("networkSettingsArn", m_networkSettingsArn);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

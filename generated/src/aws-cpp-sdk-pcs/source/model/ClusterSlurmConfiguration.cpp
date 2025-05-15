/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/ClusterSlurmConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

ClusterSlurmConfiguration::ClusterSlurmConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterSlurmConfiguration& ClusterSlurmConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scaleDownIdleTimeInSeconds"))
  {
    m_scaleDownIdleTimeInSeconds = jsonValue.GetInteger("scaleDownIdleTimeInSeconds");
    m_scaleDownIdleTimeInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slurmCustomSettings"))
  {
    Aws::Utils::Array<JsonView> slurmCustomSettingsJsonList = jsonValue.GetArray("slurmCustomSettings");
    for(unsigned slurmCustomSettingsIndex = 0; slurmCustomSettingsIndex < slurmCustomSettingsJsonList.GetLength(); ++slurmCustomSettingsIndex)
    {
      m_slurmCustomSettings.push_back(slurmCustomSettingsJsonList[slurmCustomSettingsIndex].AsObject());
    }
    m_slurmCustomSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authKey"))
  {
    m_authKey = jsonValue.GetObject("authKey");
    m_authKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accounting"))
  {
    m_accounting = jsonValue.GetObject("accounting");
    m_accountingHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterSlurmConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scaleDownIdleTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("scaleDownIdleTimeInSeconds", m_scaleDownIdleTimeInSeconds);

  }

  if(m_slurmCustomSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slurmCustomSettingsJsonList(m_slurmCustomSettings.size());
   for(unsigned slurmCustomSettingsIndex = 0; slurmCustomSettingsIndex < slurmCustomSettingsJsonList.GetLength(); ++slurmCustomSettingsIndex)
   {
     slurmCustomSettingsJsonList[slurmCustomSettingsIndex].AsObject(m_slurmCustomSettings[slurmCustomSettingsIndex].Jsonize());
   }
   payload.WithArray("slurmCustomSettings", std::move(slurmCustomSettingsJsonList));

  }

  if(m_authKeyHasBeenSet)
  {
   payload.WithObject("authKey", m_authKey.Jsonize());

  }

  if(m_accountingHasBeenSet)
  {
   payload.WithObject("accounting", m_accounting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws

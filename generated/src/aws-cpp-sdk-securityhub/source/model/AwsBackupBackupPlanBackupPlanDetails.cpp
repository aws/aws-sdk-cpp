/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupPlanBackupPlanDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupPlanBackupPlanDetails::AwsBackupBackupPlanBackupPlanDetails() : 
    m_backupPlanNameHasBeenSet(false),
    m_advancedBackupSettingsHasBeenSet(false),
    m_backupPlanRuleHasBeenSet(false)
{
}

AwsBackupBackupPlanBackupPlanDetails::AwsBackupBackupPlanBackupPlanDetails(JsonView jsonValue) : 
    m_backupPlanNameHasBeenSet(false),
    m_advancedBackupSettingsHasBeenSet(false),
    m_backupPlanRuleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupPlanBackupPlanDetails& AwsBackupBackupPlanBackupPlanDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlanName"))
  {
    m_backupPlanName = jsonValue.GetString("BackupPlanName");

    m_backupPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedBackupSettings"))
  {
    Aws::Utils::Array<JsonView> advancedBackupSettingsJsonList = jsonValue.GetArray("AdvancedBackupSettings");
    for(unsigned advancedBackupSettingsIndex = 0; advancedBackupSettingsIndex < advancedBackupSettingsJsonList.GetLength(); ++advancedBackupSettingsIndex)
    {
      m_advancedBackupSettings.push_back(advancedBackupSettingsJsonList[advancedBackupSettingsIndex].AsObject());
    }
    m_advancedBackupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanRule"))
  {
    Aws::Utils::Array<JsonView> backupPlanRuleJsonList = jsonValue.GetArray("BackupPlanRule");
    for(unsigned backupPlanRuleIndex = 0; backupPlanRuleIndex < backupPlanRuleJsonList.GetLength(); ++backupPlanRuleIndex)
    {
      m_backupPlanRule.push_back(backupPlanRuleJsonList[backupPlanRuleIndex].AsObject());
    }
    m_backupPlanRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupPlanBackupPlanDetails::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanNameHasBeenSet)
  {
   payload.WithString("BackupPlanName", m_backupPlanName);

  }

  if(m_advancedBackupSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> advancedBackupSettingsJsonList(m_advancedBackupSettings.size());
   for(unsigned advancedBackupSettingsIndex = 0; advancedBackupSettingsIndex < advancedBackupSettingsJsonList.GetLength(); ++advancedBackupSettingsIndex)
   {
     advancedBackupSettingsJsonList[advancedBackupSettingsIndex].AsObject(m_advancedBackupSettings[advancedBackupSettingsIndex].Jsonize());
   }
   payload.WithArray("AdvancedBackupSettings", std::move(advancedBackupSettingsJsonList));

  }

  if(m_backupPlanRuleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backupPlanRuleJsonList(m_backupPlanRule.size());
   for(unsigned backupPlanRuleIndex = 0; backupPlanRuleIndex < backupPlanRuleJsonList.GetLength(); ++backupPlanRuleIndex)
   {
     backupPlanRuleJsonList[backupPlanRuleIndex].AsObject(m_backupPlanRule[backupPlanRuleIndex].Jsonize());
   }
   payload.WithArray("BackupPlanRule", std::move(backupPlanRuleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

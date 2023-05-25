/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/Command.h>
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

Command::Command() : 
    m_commandIdHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_expiresAfterHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_requestedDateTimeHasBeenSet(false),
    m_status(CommandStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_outputS3RegionHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetCount(0),
    m_targetCountHasBeenSet(false),
    m_completedCount(0),
    m_completedCountHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_deliveryTimedOutCount(0),
    m_deliveryTimedOutCountHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_cloudWatchOutputConfigHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
}

Command::Command(JsonView jsonValue) : 
    m_commandIdHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_expiresAfterHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_requestedDateTimeHasBeenSet(false),
    m_status(CommandStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_outputS3RegionHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetCount(0),
    m_targetCountHasBeenSet(false),
    m_completedCount(0),
    m_completedCountHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_deliveryTimedOutCount(0),
    m_deliveryTimedOutCountHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_cloudWatchOutputConfigHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
  *this = jsonValue;
}

Command& Command::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommandId"))
  {
    m_commandId = jsonValue.GetString("CommandId");

    m_commandIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");

    m_documentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpiresAfter"))
  {
    m_expiresAfter = jsonValue.GetDouble("ExpiresAfter");

    m_expiresAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Aws::Utils::Array<JsonView> parameterValueListJsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> parameterValueListList;
      parameterValueListList.reserve((size_t)parameterValueListJsonList.GetLength());
      for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
      {
        parameterValueListList.push_back(parameterValueListJsonList[parameterValueListIndex].AsString());
      }
      m_parameters[parametersItem.first] = std::move(parameterValueListList);
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsString());
    }
    m_instanceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedDateTime"))
  {
    m_requestedDateTime = jsonValue.GetDouble("RequestedDateTime");

    m_requestedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommandStatusMapper::GetCommandStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3Region"))
  {
    m_outputS3Region = jsonValue.GetString("OutputS3Region");

    m_outputS3RegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3BucketName"))
  {
    m_outputS3BucketName = jsonValue.GetString("OutputS3BucketName");

    m_outputS3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3KeyPrefix"))
  {
    m_outputS3KeyPrefix = jsonValue.GetString("OutputS3KeyPrefix");

    m_outputS3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetString("MaxConcurrency");

    m_maxConcurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxErrors"))
  {
    m_maxErrors = jsonValue.GetString("MaxErrors");

    m_maxErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetCount"))
  {
    m_targetCount = jsonValue.GetInteger("TargetCount");

    m_targetCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedCount"))
  {
    m_completedCount = jsonValue.GetInteger("CompletedCount");

    m_completedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCount"))
  {
    m_errorCount = jsonValue.GetInteger("ErrorCount");

    m_errorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryTimedOutCount"))
  {
    m_deliveryTimedOutCount = jsonValue.GetInteger("DeliveryTimedOutCount");

    m_deliveryTimedOutCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationConfig"))
  {
    m_notificationConfig = jsonValue.GetObject("NotificationConfig");

    m_notificationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchOutputConfig"))
  {
    m_cloudWatchOutputConfig = jsonValue.GetObject("CloudWatchOutputConfig");

    m_cloudWatchOutputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("TimeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmConfiguration"))
  {
    m_alarmConfiguration = jsonValue.GetObject("AlarmConfiguration");

    m_alarmConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggeredAlarms"))
  {
    Aws::Utils::Array<JsonView> triggeredAlarmsJsonList = jsonValue.GetArray("TriggeredAlarms");
    for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
    {
      m_triggeredAlarms.push_back(triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject());
    }
    m_triggeredAlarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue Command::Jsonize() const
{
  JsonValue payload;

  if(m_commandIdHasBeenSet)
  {
   payload.WithString("CommandId", m_commandId);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_expiresAfterHasBeenSet)
  {
   payload.WithDouble("ExpiresAfter", m_expiresAfter.SecondsWithMSPrecision());
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> parameterValueListJsonList(parametersItem.second.size());
     for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
     {
       parameterValueListJsonList[parameterValueListIndex].AsString(parametersItem.second[parameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(parameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_requestedDateTimeHasBeenSet)
  {
   payload.WithDouble("RequestedDateTime", m_requestedDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CommandStatusMapper::GetNameForCommandStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_outputS3RegionHasBeenSet)
  {
   payload.WithString("OutputS3Region", m_outputS3Region);

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("OutputS3BucketName", m_outputS3BucketName);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("OutputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_targetCountHasBeenSet)
  {
   payload.WithInteger("TargetCount", m_targetCount);

  }

  if(m_completedCountHasBeenSet)
  {
   payload.WithInteger("CompletedCount", m_completedCount);

  }

  if(m_errorCountHasBeenSet)
  {
   payload.WithInteger("ErrorCount", m_errorCount);

  }

  if(m_deliveryTimedOutCountHasBeenSet)
  {
   payload.WithInteger("DeliveryTimedOutCount", m_deliveryTimedOutCount);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_notificationConfigHasBeenSet)
  {
   payload.WithObject("NotificationConfig", m_notificationConfig.Jsonize());

  }

  if(m_cloudWatchOutputConfigHasBeenSet)
  {
   payload.WithObject("CloudWatchOutputConfig", m_cloudWatchOutputConfig.Jsonize());

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutSeconds", m_timeoutSeconds);

  }

  if(m_alarmConfigurationHasBeenSet)
  {
   payload.WithObject("AlarmConfiguration", m_alarmConfiguration.Jsonize());

  }

  if(m_triggeredAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggeredAlarmsJsonList(m_triggeredAlarms.size());
   for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
   {
     triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject(m_triggeredAlarms[triggeredAlarmsIndex].Jsonize());
   }
   payload.WithArray("TriggeredAlarms", std::move(triggeredAlarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws

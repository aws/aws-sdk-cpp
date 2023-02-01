/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationExecution.h>
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

AutomationExecution::AutomationExecution() : 
    m_automationExecutionIdHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_automationExecutionStatus(AutomationExecutionStatus::NOT_SET),
    m_automationExecutionStatusHasBeenSet(false),
    m_stepExecutionsHasBeenSet(false),
    m_stepExecutionsTruncated(false),
    m_stepExecutionsTruncatedHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_mode(ExecutionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_parentAutomationExecutionIdHasBeenSet(false),
    m_executedByHasBeenSet(false),
    m_currentStepNameHasBeenSet(false),
    m_currentActionHasBeenSet(false),
    m_targetParameterNameHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_targetMapsHasBeenSet(false),
    m_resolvedTargetsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetLocationsHasBeenSet(false),
    m_progressCountersHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false),
    m_automationSubtype(AutomationSubtype::NOT_SET),
    m_automationSubtypeHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_runbooksHasBeenSet(false),
    m_opsItemIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_changeRequestNameHasBeenSet(false)
{
}

AutomationExecution::AutomationExecution(JsonView jsonValue) : 
    m_automationExecutionIdHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_automationExecutionStatus(AutomationExecutionStatus::NOT_SET),
    m_automationExecutionStatusHasBeenSet(false),
    m_stepExecutionsHasBeenSet(false),
    m_stepExecutionsTruncated(false),
    m_stepExecutionsTruncatedHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_mode(ExecutionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_parentAutomationExecutionIdHasBeenSet(false),
    m_executedByHasBeenSet(false),
    m_currentStepNameHasBeenSet(false),
    m_currentActionHasBeenSet(false),
    m_targetParameterNameHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_targetMapsHasBeenSet(false),
    m_resolvedTargetsHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetLocationsHasBeenSet(false),
    m_progressCountersHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false),
    m_automationSubtype(AutomationSubtype::NOT_SET),
    m_automationSubtypeHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_runbooksHasBeenSet(false),
    m_opsItemIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_changeRequestNameHasBeenSet(false)
{
  *this = jsonValue;
}

AutomationExecution& AutomationExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomationExecutionId"))
  {
    m_automationExecutionId = jsonValue.GetString("AutomationExecutionId");

    m_automationExecutionIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("ExecutionStartTime"))
  {
    m_executionStartTime = jsonValue.GetDouble("ExecutionStartTime");

    m_executionStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionEndTime"))
  {
    m_executionEndTime = jsonValue.GetDouble("ExecutionEndTime");

    m_executionEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomationExecutionStatus"))
  {
    m_automationExecutionStatus = AutomationExecutionStatusMapper::GetAutomationExecutionStatusForName(jsonValue.GetString("AutomationExecutionStatus"));

    m_automationExecutionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepExecutions"))
  {
    Aws::Utils::Array<JsonView> stepExecutionsJsonList = jsonValue.GetArray("StepExecutions");
    for(unsigned stepExecutionsIndex = 0; stepExecutionsIndex < stepExecutionsJsonList.GetLength(); ++stepExecutionsIndex)
    {
      m_stepExecutions.push_back(stepExecutionsJsonList[stepExecutionsIndex].AsObject());
    }
    m_stepExecutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepExecutionsTruncated"))
  {
    m_stepExecutionsTruncated = jsonValue.GetBool("StepExecutionsTruncated");

    m_stepExecutionsTruncatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Aws::Utils::Array<JsonView> automationParameterValueListJsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> automationParameterValueListList;
      automationParameterValueListList.reserve((size_t)automationParameterValueListJsonList.GetLength());
      for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
      {
        automationParameterValueListList.push_back(automationParameterValueListJsonList[automationParameterValueListIndex].AsString());
      }
      m_parameters[parametersItem.first] = std::move(automationParameterValueListList);
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Aws::Map<Aws::String, JsonView> outputsJsonMap = jsonValue.GetObject("Outputs").GetAllObjects();
    for(auto& outputsItem : outputsJsonMap)
    {
      Aws::Utils::Array<JsonView> automationParameterValueListJsonList = outputsItem.second.AsArray();
      Aws::Vector<Aws::String> automationParameterValueListList;
      automationParameterValueListList.reserve((size_t)automationParameterValueListJsonList.GetLength());
      for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
      {
        automationParameterValueListList.push_back(automationParameterValueListJsonList[automationParameterValueListIndex].AsString());
      }
      m_outputs[outputsItem.first] = std::move(automationParameterValueListList);
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentAutomationExecutionId"))
  {
    m_parentAutomationExecutionId = jsonValue.GetString("ParentAutomationExecutionId");

    m_parentAutomationExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutedBy"))
  {
    m_executedBy = jsonValue.GetString("ExecutedBy");

    m_executedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentStepName"))
  {
    m_currentStepName = jsonValue.GetString("CurrentStepName");

    m_currentStepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentAction"))
  {
    m_currentAction = jsonValue.GetString("CurrentAction");

    m_currentActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetParameterName"))
  {
    m_targetParameterName = jsonValue.GetString("TargetParameterName");

    m_targetParameterNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("TargetMaps"))
  {
    Aws::Utils::Array<JsonView> targetMapsJsonList = jsonValue.GetArray("TargetMaps");
    for(unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex)
    {
      Aws::Map<Aws::String, JsonView> targetMapJsonMap = targetMapsJsonList[targetMapsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> targetMapMap;
      for(auto& targetMapItem : targetMapJsonMap)
      {
        Aws::Utils::Array<JsonView> targetMapValueListJsonList = targetMapItem.second.AsArray();
        Aws::Vector<Aws::String> targetMapValueListList;
        targetMapValueListList.reserve((size_t)targetMapValueListJsonList.GetLength());
        for(unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength(); ++targetMapValueListIndex)
        {
          targetMapValueListList.push_back(targetMapValueListJsonList[targetMapValueListIndex].AsString());
        }
        targetMapMap[targetMapItem.first] = std::move(targetMapValueListList);
      }
      m_targetMaps.push_back(std::move(targetMapMap));
    }
    m_targetMapsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedTargets"))
  {
    m_resolvedTargets = jsonValue.GetObject("ResolvedTargets");

    m_resolvedTargetsHasBeenSet = true;
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

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLocations"))
  {
    Aws::Utils::Array<JsonView> targetLocationsJsonList = jsonValue.GetArray("TargetLocations");
    for(unsigned targetLocationsIndex = 0; targetLocationsIndex < targetLocationsJsonList.GetLength(); ++targetLocationsIndex)
    {
      m_targetLocations.push_back(targetLocationsJsonList[targetLocationsIndex].AsObject());
    }
    m_targetLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressCounters"))
  {
    m_progressCounters = jsonValue.GetObject("ProgressCounters");

    m_progressCountersHasBeenSet = true;
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

  if(jsonValue.ValueExists("AutomationSubtype"))
  {
    m_automationSubtype = AutomationSubtypeMapper::GetAutomationSubtypeForName(jsonValue.GetString("AutomationSubtype"));

    m_automationSubtypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledTime"))
  {
    m_scheduledTime = jsonValue.GetDouble("ScheduledTime");

    m_scheduledTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Runbooks"))
  {
    Aws::Utils::Array<JsonView> runbooksJsonList = jsonValue.GetArray("Runbooks");
    for(unsigned runbooksIndex = 0; runbooksIndex < runbooksJsonList.GetLength(); ++runbooksIndex)
    {
      m_runbooks.push_back(runbooksJsonList[runbooksIndex].AsObject());
    }
    m_runbooksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeRequestName"))
  {
    m_changeRequestName = jsonValue.GetString("ChangeRequestName");

    m_changeRequestNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomationExecution::Jsonize() const
{
  JsonValue payload;

  if(m_automationExecutionIdHasBeenSet)
  {
   payload.WithString("AutomationExecutionId", m_automationExecutionId);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_executionStartTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionStartTime", m_executionStartTime.SecondsWithMSPrecision());
  }

  if(m_executionEndTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionEndTime", m_executionEndTime.SecondsWithMSPrecision());
  }

  if(m_automationExecutionStatusHasBeenSet)
  {
   payload.WithString("AutomationExecutionStatus", AutomationExecutionStatusMapper::GetNameForAutomationExecutionStatus(m_automationExecutionStatus));
  }

  if(m_stepExecutionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepExecutionsJsonList(m_stepExecutions.size());
   for(unsigned stepExecutionsIndex = 0; stepExecutionsIndex < stepExecutionsJsonList.GetLength(); ++stepExecutionsIndex)
   {
     stepExecutionsJsonList[stepExecutionsIndex].AsObject(m_stepExecutions[stepExecutionsIndex].Jsonize());
   }
   payload.WithArray("StepExecutions", std::move(stepExecutionsJsonList));

  }

  if(m_stepExecutionsTruncatedHasBeenSet)
  {
   payload.WithBool("StepExecutionsTruncated", m_stepExecutionsTruncated);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(parametersItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(parametersItem.second[automationParameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_outputsHasBeenSet)
  {
   JsonValue outputsJsonMap;
   for(auto& outputsItem : m_outputs)
   {
     Aws::Utils::Array<JsonValue> automationParameterValueListJsonList(outputsItem.second.size());
     for(unsigned automationParameterValueListIndex = 0; automationParameterValueListIndex < automationParameterValueListJsonList.GetLength(); ++automationParameterValueListIndex)
     {
       automationParameterValueListJsonList[automationParameterValueListIndex].AsString(outputsItem.second[automationParameterValueListIndex]);
     }
     outputsJsonMap.WithArray(outputsItem.first, std::move(automationParameterValueListJsonList));
   }
   payload.WithObject("Outputs", std::move(outputsJsonMap));

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ExecutionModeMapper::GetNameForExecutionMode(m_mode));
  }

  if(m_parentAutomationExecutionIdHasBeenSet)
  {
   payload.WithString("ParentAutomationExecutionId", m_parentAutomationExecutionId);

  }

  if(m_executedByHasBeenSet)
  {
   payload.WithString("ExecutedBy", m_executedBy);

  }

  if(m_currentStepNameHasBeenSet)
  {
   payload.WithString("CurrentStepName", m_currentStepName);

  }

  if(m_currentActionHasBeenSet)
  {
   payload.WithString("CurrentAction", m_currentAction);

  }

  if(m_targetParameterNameHasBeenSet)
  {
   payload.WithString("TargetParameterName", m_targetParameterName);

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

  if(m_targetMapsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetMapsJsonList(m_targetMaps.size());
   for(unsigned targetMapsIndex = 0; targetMapsIndex < targetMapsJsonList.GetLength(); ++targetMapsIndex)
   {
     JsonValue targetMapJsonMap;
     for(auto& targetMapItem : m_targetMaps[targetMapsIndex])
     {
       Aws::Utils::Array<JsonValue> targetMapValueListJsonList(targetMapItem.second.size());
       for(unsigned targetMapValueListIndex = 0; targetMapValueListIndex < targetMapValueListJsonList.GetLength(); ++targetMapValueListIndex)
       {
         targetMapValueListJsonList[targetMapValueListIndex].AsString(targetMapItem.second[targetMapValueListIndex]);
       }
       targetMapJsonMap.WithArray(targetMapItem.first, std::move(targetMapValueListJsonList));
     }
     targetMapsJsonList[targetMapsIndex].AsObject(std::move(targetMapJsonMap));
   }
   payload.WithArray("TargetMaps", std::move(targetMapsJsonList));

  }

  if(m_resolvedTargetsHasBeenSet)
  {
   payload.WithObject("ResolvedTargets", m_resolvedTargets.Jsonize());

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_targetLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetLocationsJsonList(m_targetLocations.size());
   for(unsigned targetLocationsIndex = 0; targetLocationsIndex < targetLocationsJsonList.GetLength(); ++targetLocationsIndex)
   {
     targetLocationsJsonList[targetLocationsIndex].AsObject(m_targetLocations[targetLocationsIndex].Jsonize());
   }
   payload.WithArray("TargetLocations", std::move(targetLocationsJsonList));

  }

  if(m_progressCountersHasBeenSet)
  {
   payload.WithObject("ProgressCounters", m_progressCounters.Jsonize());

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

  if(m_automationSubtypeHasBeenSet)
  {
   payload.WithString("AutomationSubtype", AutomationSubtypeMapper::GetNameForAutomationSubtype(m_automationSubtype));
  }

  if(m_scheduledTimeHasBeenSet)
  {
   payload.WithDouble("ScheduledTime", m_scheduledTime.SecondsWithMSPrecision());
  }

  if(m_runbooksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runbooksJsonList(m_runbooks.size());
   for(unsigned runbooksIndex = 0; runbooksIndex < runbooksJsonList.GetLength(); ++runbooksIndex)
   {
     runbooksJsonList[runbooksIndex].AsObject(m_runbooks[runbooksIndex].Jsonize());
   }
   payload.WithArray("Runbooks", std::move(runbooksJsonList));

  }

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_changeRequestNameHasBeenSet)
  {
   payload.WithString("ChangeRequestName", m_changeRequestName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws

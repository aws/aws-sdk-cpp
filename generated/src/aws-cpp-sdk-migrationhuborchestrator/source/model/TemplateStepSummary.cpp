/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/TemplateStepSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

TemplateStepSummary::TemplateStepSummary() : 
    m_idHasBeenSet(false),
    m_stepGroupIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stepActionType(StepActionType::NOT_SET),
    m_stepActionTypeHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

TemplateStepSummary::TemplateStepSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_stepGroupIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stepActionType(StepActionType::NOT_SET),
    m_stepActionTypeHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_owner(Owner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_previousHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateStepSummary& TemplateStepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepGroupId"))
  {
    m_stepGroupId = jsonValue.GetString("stepGroupId");

    m_stepGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

    m_templateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepActionType"))
  {
    m_stepActionType = StepActionTypeMapper::GetStepActionTypeForName(jsonValue.GetString("stepActionType"));

    m_stepActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("targetType"));

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = OwnerMapper::GetOwnerForName(jsonValue.GetString("owner"));

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("previous"))
  {
    Aws::Utils::Array<JsonView> previousJsonList = jsonValue.GetArray("previous");
    for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
    {
      m_previous.push_back(previousJsonList[previousIndex].AsString());
    }
    m_previousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsString());
    }
    m_nextHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateStepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_stepGroupIdHasBeenSet)
  {
   payload.WithString("stepGroupId", m_stepGroupId);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stepActionTypeHasBeenSet)
  {
   payload.WithString("stepActionType", StepActionTypeMapper::GetNameForStepActionType(m_stepActionType));
  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("targetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", OwnerMapper::GetNameForOwner(m_owner));
  }

  if(m_previousHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> previousJsonList(m_previous.size());
   for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
   {
     previousJsonList[previousIndex].AsString(m_previous[previousIndex]);
   }
   payload.WithArray("previous", std::move(previousJsonList));

  }

  if(m_nextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextJsonList(m_next.size());
   for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
   {
     nextJsonList[nextIndex].AsString(m_next[nextIndex]);
   }
   payload.WithArray("next", std::move(nextJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws

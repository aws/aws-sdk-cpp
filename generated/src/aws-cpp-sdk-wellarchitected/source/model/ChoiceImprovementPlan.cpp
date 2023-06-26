/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceImprovementPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ChoiceImprovementPlan::ChoiceImprovementPlan() : 
    m_choiceIdHasBeenSet(false),
    m_displayTextHasBeenSet(false),
    m_improvementPlanUrlHasBeenSet(false)
{
}

ChoiceImprovementPlan::ChoiceImprovementPlan(JsonView jsonValue) : 
    m_choiceIdHasBeenSet(false),
    m_displayTextHasBeenSet(false),
    m_improvementPlanUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ChoiceImprovementPlan& ChoiceImprovementPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChoiceId"))
  {
    m_choiceId = jsonValue.GetString("ChoiceId");

    m_choiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayText"))
  {
    m_displayText = jsonValue.GetString("DisplayText");

    m_displayTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImprovementPlanUrl"))
  {
    m_improvementPlanUrl = jsonValue.GetString("ImprovementPlanUrl");

    m_improvementPlanUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ChoiceImprovementPlan::Jsonize() const
{
  JsonValue payload;

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  if(m_displayTextHasBeenSet)
  {
   payload.WithString("DisplayText", m_displayText);

  }

  if(m_improvementPlanUrlHasBeenSet)
  {
   payload.WithString("ImprovementPlanUrl", m_improvementPlanUrl);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

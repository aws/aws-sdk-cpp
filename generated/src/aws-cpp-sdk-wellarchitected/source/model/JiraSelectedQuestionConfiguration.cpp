/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/JiraSelectedQuestionConfiguration.h>
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

JiraSelectedQuestionConfiguration::JiraSelectedQuestionConfiguration() : 
    m_selectedPillarsHasBeenSet(false)
{
}

JiraSelectedQuestionConfiguration::JiraSelectedQuestionConfiguration(JsonView jsonValue) : 
    m_selectedPillarsHasBeenSet(false)
{
  *this = jsonValue;
}

JiraSelectedQuestionConfiguration& JiraSelectedQuestionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedPillars"))
  {
    Aws::Utils::Array<JsonView> selectedPillarsJsonList = jsonValue.GetArray("SelectedPillars");
    for(unsigned selectedPillarsIndex = 0; selectedPillarsIndex < selectedPillarsJsonList.GetLength(); ++selectedPillarsIndex)
    {
      m_selectedPillars.push_back(selectedPillarsJsonList[selectedPillarsIndex].AsObject());
    }
    m_selectedPillarsHasBeenSet = true;
  }

  return *this;
}

JsonValue JiraSelectedQuestionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selectedPillarsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedPillarsJsonList(m_selectedPillars.size());
   for(unsigned selectedPillarsIndex = 0; selectedPillarsIndex < selectedPillarsJsonList.GetLength(); ++selectedPillarsIndex)
   {
     selectedPillarsJsonList[selectedPillarsIndex].AsObject(m_selectedPillars[selectedPillarsIndex].Jsonize());
   }
   payload.WithArray("SelectedPillars", std::move(selectedPillarsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

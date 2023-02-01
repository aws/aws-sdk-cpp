/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/InsightConfiguration.h>
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

InsightConfiguration::InsightConfiguration() : 
    m_computationsHasBeenSet(false),
    m_customNarrativeHasBeenSet(false)
{
}

InsightConfiguration::InsightConfiguration(JsonView jsonValue) : 
    m_computationsHasBeenSet(false),
    m_customNarrativeHasBeenSet(false)
{
  *this = jsonValue;
}

InsightConfiguration& InsightConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Computations"))
  {
    Aws::Utils::Array<JsonView> computationsJsonList = jsonValue.GetArray("Computations");
    for(unsigned computationsIndex = 0; computationsIndex < computationsJsonList.GetLength(); ++computationsIndex)
    {
      m_computations.push_back(computationsJsonList[computationsIndex].AsObject());
    }
    m_computationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomNarrative"))
  {
    m_customNarrative = jsonValue.GetObject("CustomNarrative");

    m_customNarrativeHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_computationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computationsJsonList(m_computations.size());
   for(unsigned computationsIndex = 0; computationsIndex < computationsJsonList.GetLength(); ++computationsIndex)
   {
     computationsJsonList[computationsIndex].AsObject(m_computations[computationsIndex].Jsonize());
   }
   payload.WithArray("Computations", std::move(computationsJsonList));

  }

  if(m_customNarrativeHasBeenSet)
  {
   payload.WithObject("CustomNarrative", m_customNarrative.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

﻿/**
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

InsightConfiguration::InsightConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
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

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

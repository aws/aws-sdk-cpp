/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ReviewTemplatePillarReviewSummary.h>
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

ReviewTemplatePillarReviewSummary::ReviewTemplatePillarReviewSummary() : 
    m_pillarIdHasBeenSet(false),
    m_pillarNameHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_questionCountsHasBeenSet(false)
{
}

ReviewTemplatePillarReviewSummary::ReviewTemplatePillarReviewSummary(JsonView jsonValue) : 
    m_pillarIdHasBeenSet(false),
    m_pillarNameHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_questionCountsHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewTemplatePillarReviewSummary& ReviewTemplatePillarReviewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarName"))
  {
    m_pillarName = jsonValue.GetString("PillarName");

    m_pillarNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

    m_notesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionCounts"))
  {
    Aws::Map<Aws::String, JsonView> questionCountsJsonMap = jsonValue.GetObject("QuestionCounts").GetAllObjects();
    for(auto& questionCountsItem : questionCountsJsonMap)
    {
      m_questionCounts[QuestionMapper::GetQuestionForName(questionCountsItem.first)] = questionCountsItem.second.AsInteger();
    }
    m_questionCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewTemplatePillarReviewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_pillarNameHasBeenSet)
  {
   payload.WithString("PillarName", m_pillarName);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_questionCountsHasBeenSet)
  {
   JsonValue questionCountsJsonMap;
   for(auto& questionCountsItem : m_questionCounts)
   {
     questionCountsJsonMap.WithInteger(QuestionMapper::GetNameForQuestion(questionCountsItem.first), questionCountsItem.second);
   }
   payload.WithObject("QuestionCounts", std::move(questionCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

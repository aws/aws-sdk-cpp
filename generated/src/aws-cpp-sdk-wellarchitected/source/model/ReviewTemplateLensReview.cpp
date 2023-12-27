﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ReviewTemplateLensReview.h>
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

ReviewTemplateLensReview::ReviewTemplateLensReview() : 
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_lensVersionHasBeenSet(false),
    m_lensNameHasBeenSet(false),
    m_lensStatus(LensStatus::NOT_SET),
    m_lensStatusHasBeenSet(false),
    m_pillarReviewSummariesHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_questionCountsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

ReviewTemplateLensReview::ReviewTemplateLensReview(JsonView jsonValue) : 
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_lensVersionHasBeenSet(false),
    m_lensNameHasBeenSet(false),
    m_lensStatus(LensStatus::NOT_SET),
    m_lensStatusHasBeenSet(false),
    m_pillarReviewSummariesHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_questionCountsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewTemplateLensReview& ReviewTemplateLensReview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

    m_lensAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensVersion"))
  {
    m_lensVersion = jsonValue.GetString("LensVersion");

    m_lensVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensName"))
  {
    m_lensName = jsonValue.GetString("LensName");

    m_lensNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensStatus"))
  {
    m_lensStatus = LensStatusMapper::GetLensStatusForName(jsonValue.GetString("LensStatus"));

    m_lensStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarReviewSummaries"))
  {
    Aws::Utils::Array<JsonView> pillarReviewSummariesJsonList = jsonValue.GetArray("PillarReviewSummaries");
    for(unsigned pillarReviewSummariesIndex = 0; pillarReviewSummariesIndex < pillarReviewSummariesJsonList.GetLength(); ++pillarReviewSummariesIndex)
    {
      m_pillarReviewSummaries.push_back(pillarReviewSummariesJsonList[pillarReviewSummariesIndex].AsObject());
    }
    m_pillarReviewSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewTemplateLensReview::Jsonize() const
{
  JsonValue payload;

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_lensVersionHasBeenSet)
  {
   payload.WithString("LensVersion", m_lensVersion);

  }

  if(m_lensNameHasBeenSet)
  {
   payload.WithString("LensName", m_lensName);

  }

  if(m_lensStatusHasBeenSet)
  {
   payload.WithString("LensStatus", LensStatusMapper::GetNameForLensStatus(m_lensStatus));
  }

  if(m_pillarReviewSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pillarReviewSummariesJsonList(m_pillarReviewSummaries.size());
   for(unsigned pillarReviewSummariesIndex = 0; pillarReviewSummariesIndex < pillarReviewSummariesJsonList.GetLength(); ++pillarReviewSummariesIndex)
   {
     pillarReviewSummariesJsonList[pillarReviewSummariesIndex].AsObject(m_pillarReviewSummaries[pillarReviewSummariesIndex].Jsonize());
   }
   payload.WithArray("PillarReviewSummaries", std::move(pillarReviewSummariesJsonList));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
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

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

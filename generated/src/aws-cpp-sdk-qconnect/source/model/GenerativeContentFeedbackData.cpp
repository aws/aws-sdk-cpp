/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GenerativeContentFeedbackData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

GenerativeContentFeedbackData::GenerativeContentFeedbackData() : 
    m_relevance(Relevance::NOT_SET),
    m_relevanceHasBeenSet(false)
{
}

GenerativeContentFeedbackData::GenerativeContentFeedbackData(JsonView jsonValue) : 
    m_relevance(Relevance::NOT_SET),
    m_relevanceHasBeenSet(false)
{
  *this = jsonValue;
}

GenerativeContentFeedbackData& GenerativeContentFeedbackData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relevance"))
  {
    m_relevance = RelevanceMapper::GetRelevanceForName(jsonValue.GetString("relevance"));

    m_relevanceHasBeenSet = true;
  }

  return *this;
}

JsonValue GenerativeContentFeedbackData::Jsonize() const
{
  JsonValue payload;

  if(m_relevanceHasBeenSet)
  {
   payload.WithString("relevance", RelevanceMapper::GetNameForRelevance(m_relevance));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws

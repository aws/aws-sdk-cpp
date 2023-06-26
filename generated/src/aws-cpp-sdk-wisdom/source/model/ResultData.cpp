/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ResultData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

ResultData::ResultData() : 
    m_documentHasBeenSet(false),
    m_relevanceScore(0.0),
    m_relevanceScoreHasBeenSet(false),
    m_resultIdHasBeenSet(false)
{
}

ResultData::ResultData(JsonView jsonValue) : 
    m_documentHasBeenSet(false),
    m_relevanceScore(0.0),
    m_relevanceScoreHasBeenSet(false),
    m_resultIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResultData& ResultData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");

    m_documentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relevanceScore"))
  {
    m_relevanceScore = jsonValue.GetDouble("relevanceScore");

    m_relevanceScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultId"))
  {
    m_resultId = jsonValue.GetString("resultId");

    m_resultIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultData::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  if(m_relevanceScoreHasBeenSet)
  {
   payload.WithDouble("relevanceScore", m_relevanceScore);

  }

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("resultId", m_resultId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws

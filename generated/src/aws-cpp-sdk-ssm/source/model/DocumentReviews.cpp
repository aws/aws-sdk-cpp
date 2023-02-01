/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentReviews.h>
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

DocumentReviews::DocumentReviews() : 
    m_action(DocumentReviewAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

DocumentReviews::DocumentReviews(JsonView jsonValue) : 
    m_action(DocumentReviewAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentReviews& DocumentReviews::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = DocumentReviewActionMapper::GetDocumentReviewActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comment"))
  {
    Aws::Utils::Array<JsonView> commentJsonList = jsonValue.GetArray("Comment");
    for(unsigned commentIndex = 0; commentIndex < commentJsonList.GetLength(); ++commentIndex)
    {
      m_comment.push_back(commentJsonList[commentIndex].AsObject());
    }
    m_commentHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentReviews::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", DocumentReviewActionMapper::GetNameForDocumentReviewAction(m_action));
  }

  if(m_commentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commentJsonList(m_comment.size());
   for(unsigned commentIndex = 0; commentIndex < commentJsonList.GetLength(); ++commentIndex)
   {
     commentJsonList[commentIndex].AsObject(m_comment[commentIndex].Jsonize());
   }
   payload.WithArray("Comment", std::move(commentJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws

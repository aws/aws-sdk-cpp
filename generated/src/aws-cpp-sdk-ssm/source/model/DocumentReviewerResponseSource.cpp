/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentReviewerResponseSource.h>
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

DocumentReviewerResponseSource::DocumentReviewerResponseSource() : 
    m_createTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_reviewStatus(ReviewStatus::NOT_SET),
    m_reviewStatusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_reviewerHasBeenSet(false)
{
}

DocumentReviewerResponseSource::DocumentReviewerResponseSource(JsonView jsonValue) : 
    m_createTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_reviewStatus(ReviewStatus::NOT_SET),
    m_reviewStatusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_reviewerHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentReviewerResponseSource& DocumentReviewerResponseSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetDouble("UpdatedTime");

    m_updatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewStatus"))
  {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));

    m_reviewStatusHasBeenSet = true;
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

  if(jsonValue.ValueExists("Reviewer"))
  {
    m_reviewer = jsonValue.GetString("Reviewer");

    m_reviewerHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentReviewerResponseSource::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithDouble("UpdatedTime", m_updatedTime.SecondsWithMSPrecision());
  }

  if(m_reviewStatusHasBeenSet)
  {
   payload.WithString("ReviewStatus", ReviewStatusMapper::GetNameForReviewStatus(m_reviewStatus));
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

  if(m_reviewerHasBeenSet)
  {
   payload.WithString("Reviewer", m_reviewer);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws

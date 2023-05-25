/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ReviewInformation.h>
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

ReviewInformation::ReviewInformation() : 
    m_reviewedTimeHasBeenSet(false),
    m_status(ReviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reviewerHasBeenSet(false)
{
}

ReviewInformation::ReviewInformation(JsonView jsonValue) : 
    m_reviewedTimeHasBeenSet(false),
    m_status(ReviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reviewerHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewInformation& ReviewInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReviewedTime"))
  {
    m_reviewedTime = jsonValue.GetDouble("ReviewedTime");

    m_reviewedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reviewer"))
  {
    m_reviewer = jsonValue.GetString("Reviewer");

    m_reviewerHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewInformation::Jsonize() const
{
  JsonValue payload;

  if(m_reviewedTimeHasBeenSet)
  {
   payload.WithDouble("ReviewedTime", m_reviewedTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReviewStatusMapper::GetNameForReviewStatus(m_status));
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

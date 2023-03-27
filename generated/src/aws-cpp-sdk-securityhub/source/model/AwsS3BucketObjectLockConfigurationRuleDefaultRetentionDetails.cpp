/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails::AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails() : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_years(0),
    m_yearsHasBeenSet(false)
{
}

AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails::AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails(JsonView jsonValue) : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_years(0),
    m_yearsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails& AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Days"))
  {
    m_days = jsonValue.GetInteger("Days");

    m_daysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = jsonValue.GetString("Mode");

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Years"))
  {
    m_years = jsonValue.GetInteger("Years");

    m_yearsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketObjectLockConfigurationRuleDefaultRetentionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_daysHasBeenSet)
  {
   payload.WithInteger("Days", m_days);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", m_mode);

  }

  if(m_yearsHasBeenSet)
  {
   payload.WithInteger("Years", m_years);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

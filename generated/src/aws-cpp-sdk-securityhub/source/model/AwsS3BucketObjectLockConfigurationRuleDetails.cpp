/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketObjectLockConfigurationRuleDetails.h>
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

AwsS3BucketObjectLockConfigurationRuleDetails::AwsS3BucketObjectLockConfigurationRuleDetails() : 
    m_defaultRetentionHasBeenSet(false)
{
}

AwsS3BucketObjectLockConfigurationRuleDetails::AwsS3BucketObjectLockConfigurationRuleDetails(JsonView jsonValue) : 
    m_defaultRetentionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketObjectLockConfigurationRuleDetails& AwsS3BucketObjectLockConfigurationRuleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultRetention"))
  {
    m_defaultRetention = jsonValue.GetObject("DefaultRetention");

    m_defaultRetentionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketObjectLockConfigurationRuleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_defaultRetentionHasBeenSet)
  {
   payload.WithObject("DefaultRetention", m_defaultRetention.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

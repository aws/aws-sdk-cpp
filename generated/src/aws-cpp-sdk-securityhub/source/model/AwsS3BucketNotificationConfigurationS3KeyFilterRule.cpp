/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationS3KeyFilterRule.h>
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

AwsS3BucketNotificationConfigurationS3KeyFilterRule::AwsS3BucketNotificationConfigurationS3KeyFilterRule() : 
    m_name(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AwsS3BucketNotificationConfigurationS3KeyFilterRule::AwsS3BucketNotificationConfigurationS3KeyFilterRule(JsonView jsonValue) : 
    m_name(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketNotificationConfigurationS3KeyFilterRule& AwsS3BucketNotificationConfigurationS3KeyFilterRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = AwsS3BucketNotificationConfigurationS3KeyFilterRuleNameMapper::GetAwsS3BucketNotificationConfigurationS3KeyFilterRuleNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketNotificationConfigurationS3KeyFilterRule::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", AwsS3BucketNotificationConfigurationS3KeyFilterRuleNameMapper::GetNameForAwsS3BucketNotificationConfigurationS3KeyFilterRuleName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

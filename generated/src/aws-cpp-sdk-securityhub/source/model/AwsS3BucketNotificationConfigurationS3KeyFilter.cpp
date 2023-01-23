/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationS3KeyFilter.h>
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

AwsS3BucketNotificationConfigurationS3KeyFilter::AwsS3BucketNotificationConfigurationS3KeyFilter() : 
    m_filterRulesHasBeenSet(false)
{
}

AwsS3BucketNotificationConfigurationS3KeyFilter::AwsS3BucketNotificationConfigurationS3KeyFilter(JsonView jsonValue) : 
    m_filterRulesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketNotificationConfigurationS3KeyFilter& AwsS3BucketNotificationConfigurationS3KeyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterRules"))
  {
    Aws::Utils::Array<JsonView> filterRulesJsonList = jsonValue.GetArray("FilterRules");
    for(unsigned filterRulesIndex = 0; filterRulesIndex < filterRulesJsonList.GetLength(); ++filterRulesIndex)
    {
      m_filterRules.push_back(filterRulesJsonList[filterRulesIndex].AsObject());
    }
    m_filterRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketNotificationConfigurationS3KeyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterRulesJsonList(m_filterRules.size());
   for(unsigned filterRulesIndex = 0; filterRulesIndex < filterRulesJsonList.GetLength(); ++filterRulesIndex)
   {
     filterRulesJsonList[filterRulesIndex].AsObject(m_filterRules[filterRulesIndex].Jsonize());
   }
   payload.WithArray("FilterRules", std::move(filterRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

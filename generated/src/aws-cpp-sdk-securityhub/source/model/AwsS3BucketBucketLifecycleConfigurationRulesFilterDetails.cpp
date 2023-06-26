/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails.h>
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

AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails::AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails() : 
    m_predicateHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails::AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails(JsonView jsonValue) : 
    m_predicateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Predicate"))
  {
    m_predicate = jsonValue.GetObject("Predicate");

    m_predicateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_predicateHasBeenSet)
  {
   payload.WithObject("Predicate", m_predicate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

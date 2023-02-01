/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails.h>
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

AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails::AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails() : 
    m_dateHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails::AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails(JsonView jsonValue) : 
    m_dateHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetString("Date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Days"))
  {
    m_days = jsonValue.GetInteger("Days");

    m_daysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = jsonValue.GetString("StorageClass");

    m_storageClassHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithString("Date", m_date);

  }

  if(m_daysHasBeenSet)
  {
   payload.WithInteger("Days", m_days);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("StorageClass", m_storageClass);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

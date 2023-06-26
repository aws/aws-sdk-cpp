/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails.h>
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

AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails::AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails() : 
    m_daysAfterInitiation(0),
    m_daysAfterInitiationHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails::AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails(JsonView jsonValue) : 
    m_daysAfterInitiation(0),
    m_daysAfterInitiationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DaysAfterInitiation"))
  {
    m_daysAfterInitiation = jsonValue.GetInteger("DaysAfterInitiation");

    m_daysAfterInitiationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails::Jsonize() const
{
  JsonValue payload;

  if(m_daysAfterInitiationHasBeenSet)
  {
   payload.WithInteger("DaysAfterInitiation", m_daysAfterInitiation);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

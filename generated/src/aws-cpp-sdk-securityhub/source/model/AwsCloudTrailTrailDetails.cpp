/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudTrailTrailDetails.h>
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

AwsCloudTrailTrailDetails::AwsCloudTrailTrailDetails() : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_hasCustomEventSelectors(false),
    m_hasCustomEventSelectorsHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_includeGlobalServiceEvents(false),
    m_includeGlobalServiceEventsHasBeenSet(false),
    m_isMultiRegionTrail(false),
    m_isMultiRegionTrailHasBeenSet(false),
    m_isOrganizationTrail(false),
    m_isOrganizationTrailHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_logFileValidationEnabled(false),
    m_logFileValidationEnabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsTopicNameHasBeenSet(false),
    m_trailArnHasBeenSet(false)
{
}

AwsCloudTrailTrailDetails::AwsCloudTrailTrailDetails(JsonView jsonValue) : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_hasCustomEventSelectors(false),
    m_hasCustomEventSelectorsHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_includeGlobalServiceEvents(false),
    m_includeGlobalServiceEventsHasBeenSet(false),
    m_isMultiRegionTrail(false),
    m_isMultiRegionTrailHasBeenSet(false),
    m_isOrganizationTrail(false),
    m_isOrganizationTrailHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_logFileValidationEnabled(false),
    m_logFileValidationEnabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsTopicNameHasBeenSet(false),
    m_trailArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudTrailTrailDetails& AwsCloudTrailTrailDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsLogGroupArn"))
  {
    m_cloudWatchLogsLogGroupArn = jsonValue.GetString("CloudWatchLogsLogGroupArn");

    m_cloudWatchLogsLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("CloudWatchLogsRoleArn");

    m_cloudWatchLogsRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasCustomEventSelectors"))
  {
    m_hasCustomEventSelectors = jsonValue.GetBool("HasCustomEventSelectors");

    m_hasCustomEventSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeRegion"))
  {
    m_homeRegion = jsonValue.GetString("HomeRegion");

    m_homeRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeGlobalServiceEvents"))
  {
    m_includeGlobalServiceEvents = jsonValue.GetBool("IncludeGlobalServiceEvents");

    m_includeGlobalServiceEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsMultiRegionTrail"))
  {
    m_isMultiRegionTrail = jsonValue.GetBool("IsMultiRegionTrail");

    m_isMultiRegionTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsOrganizationTrail"))
  {
    m_isOrganizationTrail = jsonValue.GetBool("IsOrganizationTrail");

    m_isOrganizationTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFileValidationEnabled"))
  {
    m_logFileValidationEnabled = jsonValue.GetBool("LogFileValidationEnabled");

    m_logFileValidationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicName"))
  {
    m_snsTopicName = jsonValue.GetString("SnsTopicName");

    m_snsTopicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrailArn"))
  {
    m_trailArn = jsonValue.GetString("TrailArn");

    m_trailArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudTrailTrailDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsLogGroupArn", m_cloudWatchLogsLogGroupArn);

  }

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  if(m_hasCustomEventSelectorsHasBeenSet)
  {
   payload.WithBool("HasCustomEventSelectors", m_hasCustomEventSelectors);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_includeGlobalServiceEventsHasBeenSet)
  {
   payload.WithBool("IncludeGlobalServiceEvents", m_includeGlobalServiceEvents);

  }

  if(m_isMultiRegionTrailHasBeenSet)
  {
   payload.WithBool("IsMultiRegionTrail", m_isMultiRegionTrail);

  }

  if(m_isOrganizationTrailHasBeenSet)
  {
   payload.WithBool("IsOrganizationTrail", m_isOrganizationTrail);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_logFileValidationEnabledHasBeenSet)
  {
   payload.WithBool("LogFileValidationEnabled", m_logFileValidationEnabled);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_snsTopicNameHasBeenSet)
  {
   payload.WithString("SnsTopicName", m_snsTopicName);

  }

  if(m_trailArnHasBeenSet)
  {
   payload.WithString("TrailArn", m_trailArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

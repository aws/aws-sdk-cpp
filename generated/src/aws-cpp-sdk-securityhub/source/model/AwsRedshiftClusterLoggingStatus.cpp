/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterLoggingStatus.h>
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

AwsRedshiftClusterLoggingStatus::AwsRedshiftClusterLoggingStatus() : 
    m_bucketNameHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_lastFailureTimeHasBeenSet(false),
    m_lastSuccessfulDeliveryTimeHasBeenSet(false),
    m_loggingEnabled(false),
    m_loggingEnabledHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

AwsRedshiftClusterLoggingStatus::AwsRedshiftClusterLoggingStatus(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_lastFailureTimeHasBeenSet(false),
    m_lastSuccessfulDeliveryTimeHasBeenSet(false),
    m_loggingEnabled(false),
    m_loggingEnabledHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterLoggingStatus& AwsRedshiftClusterLoggingStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailureMessage"))
  {
    m_lastFailureMessage = jsonValue.GetString("LastFailureMessage");

    m_lastFailureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailureTime"))
  {
    m_lastFailureTime = jsonValue.GetString("LastFailureTime");

    m_lastFailureTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulDeliveryTime"))
  {
    m_lastSuccessfulDeliveryTime = jsonValue.GetString("LastSuccessfulDeliveryTime");

    m_lastSuccessfulDeliveryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingEnabled"))
  {
    m_loggingEnabled = jsonValue.GetBool("LoggingEnabled");

    m_loggingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterLoggingStatus::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

  }

  if(m_lastFailureTimeHasBeenSet)
  {
   payload.WithString("LastFailureTime", m_lastFailureTime);

  }

  if(m_lastSuccessfulDeliveryTimeHasBeenSet)
  {
   payload.WithString("LastSuccessfulDeliveryTime", m_lastSuccessfulDeliveryTime);

  }

  if(m_loggingEnabledHasBeenSet)
  {
   payload.WithBool("LoggingEnabled", m_loggingEnabled);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

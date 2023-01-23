/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesDetails.h>
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

AwsS3BucketBucketLifecycleConfigurationRulesDetails::AwsS3BucketBucketLifecycleConfigurationRulesDetails() : 
    m_abortIncompleteMultipartUploadHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_expiredObjectDeleteMarker(false),
    m_expiredObjectDeleteMarkerHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_noncurrentVersionExpirationInDays(0),
    m_noncurrentVersionExpirationInDaysHasBeenSet(false),
    m_noncurrentVersionTransitionsHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_transitionsHasBeenSet(false)
{
}

AwsS3BucketBucketLifecycleConfigurationRulesDetails::AwsS3BucketBucketLifecycleConfigurationRulesDetails(JsonView jsonValue) : 
    m_abortIncompleteMultipartUploadHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_expiredObjectDeleteMarker(false),
    m_expiredObjectDeleteMarkerHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_noncurrentVersionExpirationInDays(0),
    m_noncurrentVersionExpirationInDaysHasBeenSet(false),
    m_noncurrentVersionTransitionsHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_transitionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketLifecycleConfigurationRulesDetails& AwsS3BucketBucketLifecycleConfigurationRulesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AbortIncompleteMultipartUpload"))
  {
    m_abortIncompleteMultipartUpload = jsonValue.GetObject("AbortIncompleteMultipartUpload");

    m_abortIncompleteMultipartUploadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationInDays"))
  {
    m_expirationInDays = jsonValue.GetInteger("ExpirationInDays");

    m_expirationInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpiredObjectDeleteMarker"))
  {
    m_expiredObjectDeleteMarker = jsonValue.GetBool("ExpiredObjectDeleteMarker");

    m_expiredObjectDeleteMarkerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ID"))
  {
    m_iD = jsonValue.GetString("ID");

    m_iDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoncurrentVersionExpirationInDays"))
  {
    m_noncurrentVersionExpirationInDays = jsonValue.GetInteger("NoncurrentVersionExpirationInDays");

    m_noncurrentVersionExpirationInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoncurrentVersionTransitions"))
  {
    Aws::Utils::Array<JsonView> noncurrentVersionTransitionsJsonList = jsonValue.GetArray("NoncurrentVersionTransitions");
    for(unsigned noncurrentVersionTransitionsIndex = 0; noncurrentVersionTransitionsIndex < noncurrentVersionTransitionsJsonList.GetLength(); ++noncurrentVersionTransitionsIndex)
    {
      m_noncurrentVersionTransitions.push_back(noncurrentVersionTransitionsJsonList[noncurrentVersionTransitionsIndex].AsObject());
    }
    m_noncurrentVersionTransitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Transitions"))
  {
    Aws::Utils::Array<JsonView> transitionsJsonList = jsonValue.GetArray("Transitions");
    for(unsigned transitionsIndex = 0; transitionsIndex < transitionsJsonList.GetLength(); ++transitionsIndex)
    {
      m_transitions.push_back(transitionsJsonList[transitionsIndex].AsObject());
    }
    m_transitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketLifecycleConfigurationRulesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_abortIncompleteMultipartUploadHasBeenSet)
  {
   payload.WithObject("AbortIncompleteMultipartUpload", m_abortIncompleteMultipartUpload.Jsonize());

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate);

  }

  if(m_expirationInDaysHasBeenSet)
  {
   payload.WithInteger("ExpirationInDays", m_expirationInDays);

  }

  if(m_expiredObjectDeleteMarkerHasBeenSet)
  {
   payload.WithBool("ExpiredObjectDeleteMarker", m_expiredObjectDeleteMarker);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_iDHasBeenSet)
  {
   payload.WithString("ID", m_iD);

  }

  if(m_noncurrentVersionExpirationInDaysHasBeenSet)
  {
   payload.WithInteger("NoncurrentVersionExpirationInDays", m_noncurrentVersionExpirationInDays);

  }

  if(m_noncurrentVersionTransitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noncurrentVersionTransitionsJsonList(m_noncurrentVersionTransitions.size());
   for(unsigned noncurrentVersionTransitionsIndex = 0; noncurrentVersionTransitionsIndex < noncurrentVersionTransitionsJsonList.GetLength(); ++noncurrentVersionTransitionsIndex)
   {
     noncurrentVersionTransitionsJsonList[noncurrentVersionTransitionsIndex].AsObject(m_noncurrentVersionTransitions[noncurrentVersionTransitionsIndex].Jsonize());
   }
   payload.WithArray("NoncurrentVersionTransitions", std::move(noncurrentVersionTransitionsJsonList));

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_transitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transitionsJsonList(m_transitions.size());
   for(unsigned transitionsIndex = 0; transitionsIndex < transitionsJsonList.GetLength(); ++transitionsIndex)
   {
     transitionsJsonList[transitionsIndex].AsObject(m_transitions[transitionsIndex].Jsonize());
   }
   payload.WithArray("Transitions", std::move(transitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

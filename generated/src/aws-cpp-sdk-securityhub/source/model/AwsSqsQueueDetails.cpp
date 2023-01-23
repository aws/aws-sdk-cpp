/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSqsQueueDetails.h>
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

AwsSqsQueueDetails::AwsSqsQueueDetails() : 
    m_kmsDataKeyReusePeriodSeconds(0),
    m_kmsDataKeyReusePeriodSecondsHasBeenSet(false),
    m_kmsMasterKeyIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_deadLetterTargetArnHasBeenSet(false)
{
}

AwsSqsQueueDetails::AwsSqsQueueDetails(JsonView jsonValue) : 
    m_kmsDataKeyReusePeriodSeconds(0),
    m_kmsDataKeyReusePeriodSecondsHasBeenSet(false),
    m_kmsMasterKeyIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_deadLetterTargetArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSqsQueueDetails& AwsSqsQueueDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsDataKeyReusePeriodSeconds"))
  {
    m_kmsDataKeyReusePeriodSeconds = jsonValue.GetInteger("KmsDataKeyReusePeriodSeconds");

    m_kmsDataKeyReusePeriodSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsMasterKeyId"))
  {
    m_kmsMasterKeyId = jsonValue.GetString("KmsMasterKeyId");

    m_kmsMasterKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueName"))
  {
    m_queueName = jsonValue.GetString("QueueName");

    m_queueNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterTargetArn"))
  {
    m_deadLetterTargetArn = jsonValue.GetString("DeadLetterTargetArn");

    m_deadLetterTargetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSqsQueueDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kmsDataKeyReusePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("KmsDataKeyReusePeriodSeconds", m_kmsDataKeyReusePeriodSeconds);

  }

  if(m_kmsMasterKeyIdHasBeenSet)
  {
   payload.WithString("KmsMasterKeyId", m_kmsMasterKeyId);

  }

  if(m_queueNameHasBeenSet)
  {
   payload.WithString("QueueName", m_queueName);

  }

  if(m_deadLetterTargetArnHasBeenSet)
  {
   payload.WithString("DeadLetterTargetArn", m_deadLetterTargetArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

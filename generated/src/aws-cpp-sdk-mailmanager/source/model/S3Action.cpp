/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/S3Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

S3Action::S3Action(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Action& S3Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionFailurePolicy"))
  {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");
    m_s3PrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3SseKmsKeyId"))
  {
    m_s3SseKmsKeyId = jsonValue.GetString("S3SseKmsKeyId");
    m_s3SseKmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Action::Jsonize() const
{
  JsonValue payload;

  if(m_actionFailurePolicyHasBeenSet)
  {
   payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  if(m_s3SseKmsKeyIdHasBeenSet)
  {
   payload.WithString("S3SseKmsKeyId", m_s3SseKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws

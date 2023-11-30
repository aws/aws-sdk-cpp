/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-crt/S3CrtErrors.h>
#include <aws/s3-crt/model/InvalidObjectState.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;

namespace Aws
{
namespace S3Crt
{
template<> AWS_S3CRT_API InvalidObjectState S3CrtError::GetModeledError()
{
  assert(this->GetErrorType() == S3CrtErrors::INVALID_OBJECT_STATE);
  return InvalidObjectState(this->GetXmlPayload().GetRootElement());
}

namespace S3CrtErrorMapper
{

static const int NO_SUCH_UPLOAD_HASH = HashingUtils::HashString("NoSuchUpload");
static const int BUCKET_ALREADY_OWNED_BY_YOU_HASH = HashingUtils::HashString("BucketAlreadyOwnedByYou");
static const int OBJECT_ALREADY_IN_ACTIVE_TIER_HASH = HashingUtils::HashString("ObjectAlreadyInActiveTierError");
static const int NO_SUCH_BUCKET_HASH = HashingUtils::HashString("NoSuchBucket");
static const int NO_SUCH_KEY_HASH = HashingUtils::HashString("NoSuchKey");
static const int OBJECT_NOT_IN_ACTIVE_TIER_HASH = HashingUtils::HashString("ObjectNotInActiveTierError");
static const int BUCKET_ALREADY_EXISTS_HASH = HashingUtils::HashString("BucketAlreadyExists");
static const int INVALID_OBJECT_STATE_HASH = HashingUtils::HashString("InvalidObjectState");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NO_SUCH_UPLOAD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::NO_SUCH_UPLOAD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BUCKET_ALREADY_OWNED_BY_YOU_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::BUCKET_ALREADY_OWNED_BY_YOU), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_ALREADY_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::OBJECT_ALREADY_IN_ACTIVE_TIER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::NO_SUCH_BUCKET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_SUCH_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::NO_SUCH_KEY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_NOT_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::OBJECT_NOT_IN_ACTIVE_TIER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BUCKET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::BUCKET_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_OBJECT_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::INVALID_OBJECT_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3CrtErrorMapper
} // namespace S3Crt
} // namespace Aws

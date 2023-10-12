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

static constexpr uint32_t NO_SUCH_UPLOAD_HASH = ConstExprHashingUtils::HashString("NoSuchUpload");
static constexpr uint32_t BUCKET_ALREADY_OWNED_BY_YOU_HASH = ConstExprHashingUtils::HashString("BucketAlreadyOwnedByYou");
static constexpr uint32_t OBJECT_ALREADY_IN_ACTIVE_TIER_HASH = ConstExprHashingUtils::HashString("ObjectAlreadyInActiveTierError");
static constexpr uint32_t NO_SUCH_BUCKET_HASH = ConstExprHashingUtils::HashString("NoSuchBucket");
static constexpr uint32_t NO_SUCH_KEY_HASH = ConstExprHashingUtils::HashString("NoSuchKey");
static constexpr uint32_t OBJECT_NOT_IN_ACTIVE_TIER_HASH = ConstExprHashingUtils::HashString("ObjectNotInActiveTierError");
static constexpr uint32_t BUCKET_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("BucketAlreadyExists");
static constexpr uint32_t INVALID_OBJECT_STATE_HASH = ConstExprHashingUtils::HashString("InvalidObjectState");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NO_SUCH_UPLOAD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::NO_SUCH_UPLOAD), false);
  }
  else if (hashCode == BUCKET_ALREADY_OWNED_BY_YOU_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::BUCKET_ALREADY_OWNED_BY_YOU), false);
  }
  else if (hashCode == OBJECT_ALREADY_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::OBJECT_ALREADY_IN_ACTIVE_TIER), false);
  }
  else if (hashCode == NO_SUCH_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::NO_SUCH_BUCKET), false);
  }
  else if (hashCode == NO_SUCH_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::NO_SUCH_KEY), false);
  }
  else if (hashCode == OBJECT_NOT_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::OBJECT_NOT_IN_ACTIVE_TIER), false);
  }
  else if (hashCode == BUCKET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::BUCKET_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_OBJECT_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3CrtErrors::INVALID_OBJECT_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3CrtErrorMapper
} // namespace S3Crt
} // namespace Aws

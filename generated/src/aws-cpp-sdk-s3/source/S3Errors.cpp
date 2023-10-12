/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/InvalidObjectState.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace Aws
{
namespace S3
{
template<> AWS_S3_API InvalidObjectState S3Error::GetModeledError()
{
  assert(this->GetErrorType() == S3Errors::INVALID_OBJECT_STATE);
  return InvalidObjectState(this->GetXmlPayload().GetRootElement());
}

namespace S3ErrorMapper
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::NO_SUCH_UPLOAD), false);
  }
  else if (hashCode == BUCKET_ALREADY_OWNED_BY_YOU_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::BUCKET_ALREADY_OWNED_BY_YOU), false);
  }
  else if (hashCode == OBJECT_ALREADY_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::OBJECT_ALREADY_IN_ACTIVE_TIER), false);
  }
  else if (hashCode == NO_SUCH_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::NO_SUCH_BUCKET), false);
  }
  else if (hashCode == NO_SUCH_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::NO_SUCH_KEY), false);
  }
  else if (hashCode == OBJECT_NOT_IN_ACTIVE_TIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::OBJECT_NOT_IN_ACTIVE_TIER), false);
  }
  else if (hashCode == BUCKET_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::BUCKET_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_OBJECT_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3Errors::INVALID_OBJECT_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3ErrorMapper
} // namespace S3
} // namespace Aws

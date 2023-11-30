/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/voice-id/VoiceIDErrors.h>
#include <aws/voice-id/model/ConflictException.h>
#include <aws/voice-id/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::VoiceID;
using namespace Aws::VoiceID::Model;

namespace Aws
{
namespace VoiceID
{
template<> AWS_VOICEID_API ConflictException VoiceIDError::GetModeledError()
{
  assert(this->GetErrorType() == VoiceIDErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_VOICEID_API ResourceNotFoundException VoiceIDError::GetModeledError()
{
  assert(this->GetErrorType() == VoiceIDErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace VoiceIDErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VoiceIDErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VoiceIDErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VoiceIDErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace VoiceIDErrorMapper
} // namespace VoiceID
} // namespace Aws

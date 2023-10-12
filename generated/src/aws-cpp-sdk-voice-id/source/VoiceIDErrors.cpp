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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VoiceIDErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VoiceIDErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VoiceIDErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace VoiceIDErrorMapper
} // namespace VoiceID
} // namespace Aws

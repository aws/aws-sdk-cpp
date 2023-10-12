/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/secretsmanager/SecretsManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecretsManager;

namespace Aws
{
namespace SecretsManager
{
namespace SecretsManagerErrorMapper
{

static constexpr uint32_t RESOURCE_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceExistsException");
static constexpr uint32_t MALFORMED_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("MalformedPolicyDocumentException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t DECRYPTION_FAILURE_HASH = ConstExprHashingUtils::HashString("DecryptionFailure");
static constexpr uint32_t PUBLIC_POLICY_HASH = ConstExprHashingUtils::HashString("PublicPolicyException");
static constexpr uint32_t PRECONDITION_NOT_MET_HASH = ConstExprHashingUtils::HashString("PreconditionNotMetException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
static constexpr uint32_t ENCRYPTION_FAILURE_HASH = ConstExprHashingUtils::HashString("EncryptionFailure");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == DECRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::DECRYPTION_FAILURE), false);
  }
  else if (hashCode == PUBLIC_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::PUBLIC_POLICY), false);
  }
  else if (hashCode == PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == ENCRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::ENCRYPTION_FAILURE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecretsManagerErrorMapper
} // namespace SecretsManager
} // namespace Aws

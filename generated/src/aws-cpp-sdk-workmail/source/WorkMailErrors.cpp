/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workmail/WorkMailErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkMail;

namespace Aws
{
namespace WorkMail
{
namespace WorkMailErrorMapper
{

static const int ENTITY_STATE_HASH = HashingUtils::HashString("EntityStateException");
static const int DIRECTORY_SERVICE_AUTHENTICATION_FAILED_HASH = HashingUtils::HashString("DirectoryServiceAuthenticationFailedException");
static const int NAME_AVAILABILITY_HASH = HashingUtils::HashString("NameAvailabilityException");
static const int ORGANIZATION_NOT_FOUND_HASH = HashingUtils::HashString("OrganizationNotFoundException");
static const int DIRECTORY_UNAVAILABLE_HASH = HashingUtils::HashString("DirectoryUnavailableException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int MAIL_DOMAIN_NOT_FOUND_HASH = HashingUtils::HashString("MailDomainNotFoundException");
static const int INVALID_CUSTOM_SES_CONFIGURATION_HASH = HashingUtils::HashString("InvalidCustomSesConfigurationException");
static const int EMAIL_ADDRESS_IN_USE_HASH = HashingUtils::HashString("EmailAddressInUseException");
static const int RESERVED_NAME_HASH = HashingUtils::HashString("ReservedNameException");
static const int ORGANIZATION_STATE_HASH = HashingUtils::HashString("OrganizationStateException");
static const int ENTITY_NOT_FOUND_HASH = HashingUtils::HashString("EntityNotFoundException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int INVALID_CONFIGURATION_HASH = HashingUtils::HashString("InvalidConfigurationException");
static const int MAIL_DOMAIN_IN_USE_HASH = HashingUtils::HashString("MailDomainInUseException");
static const int ENTITY_ALREADY_REGISTERED_HASH = HashingUtils::HashString("EntityAlreadyRegisteredException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_PASSWORD_HASH = HashingUtils::HashString("InvalidPasswordException");
static const int DIRECTORY_IN_USE_HASH = HashingUtils::HashString("DirectoryInUseException");
static const int MAIL_DOMAIN_STATE_HASH = HashingUtils::HashString("MailDomainStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ENTITY_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ENTITY_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_SERVICE_AUTHENTICATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::DIRECTORY_SERVICE_AUTHENTICATION_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NAME_AVAILABILITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::NAME_AVAILABILITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ORGANIZATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ORGANIZATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::DIRECTORY_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == MAIL_DOMAIN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::MAIL_DOMAIN_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CUSTOM_SES_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_CUSTOM_SES_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == EMAIL_ADDRESS_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::EMAIL_ADDRESS_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESERVED_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::RESERVED_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ORGANIZATION_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ORGANIZATION_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENTITY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ENTITY_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MAIL_DOMAIN_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::MAIL_DOMAIN_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENTITY_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ENTITY_ALREADY_REGISTERED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_PASSWORD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DIRECTORY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::DIRECTORY_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MAIL_DOMAIN_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::MAIL_DOMAIN_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkMailErrorMapper
} // namespace WorkMail
} // namespace Aws

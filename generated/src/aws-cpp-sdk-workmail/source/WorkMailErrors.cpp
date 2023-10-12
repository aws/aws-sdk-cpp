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

static constexpr uint32_t ENTITY_STATE_HASH = ConstExprHashingUtils::HashString("EntityStateException");
static constexpr uint32_t DIRECTORY_SERVICE_AUTHENTICATION_FAILED_HASH = ConstExprHashingUtils::HashString("DirectoryServiceAuthenticationFailedException");
static constexpr uint32_t NAME_AVAILABILITY_HASH = ConstExprHashingUtils::HashString("NameAvailabilityException");
static constexpr uint32_t ORGANIZATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("OrganizationNotFoundException");
static constexpr uint32_t DIRECTORY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("DirectoryUnavailableException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t MAIL_DOMAIN_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("MailDomainNotFoundException");
static constexpr uint32_t INVALID_CUSTOM_SES_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidCustomSesConfigurationException");
static constexpr uint32_t EMAIL_ADDRESS_IN_USE_HASH = ConstExprHashingUtils::HashString("EmailAddressInUseException");
static constexpr uint32_t RESERVED_NAME_HASH = ConstExprHashingUtils::HashString("ReservedNameException");
static constexpr uint32_t ORGANIZATION_STATE_HASH = ConstExprHashingUtils::HashString("OrganizationStateException");
static constexpr uint32_t ENTITY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EntityNotFoundException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidConfigurationException");
static constexpr uint32_t MAIL_DOMAIN_IN_USE_HASH = ConstExprHashingUtils::HashString("MailDomainInUseException");
static constexpr uint32_t ENTITY_ALREADY_REGISTERED_HASH = ConstExprHashingUtils::HashString("EntityAlreadyRegisteredException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");
static constexpr uint32_t INVALID_PASSWORD_HASH = ConstExprHashingUtils::HashString("InvalidPasswordException");
static constexpr uint32_t DIRECTORY_IN_USE_HASH = ConstExprHashingUtils::HashString("DirectoryInUseException");
static constexpr uint32_t MAIL_DOMAIN_STATE_HASH = ConstExprHashingUtils::HashString("MailDomainStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ENTITY_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ENTITY_STATE), false);
  }
  else if (hashCode == DIRECTORY_SERVICE_AUTHENTICATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::DIRECTORY_SERVICE_AUTHENTICATION_FAILED), false);
  }
  else if (hashCode == NAME_AVAILABILITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::NAME_AVAILABILITY), false);
  }
  else if (hashCode == ORGANIZATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ORGANIZATION_NOT_FOUND), false);
  }
  else if (hashCode == DIRECTORY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::DIRECTORY_UNAVAILABLE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == MAIL_DOMAIN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::MAIL_DOMAIN_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CUSTOM_SES_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_CUSTOM_SES_CONFIGURATION), false);
  }
  else if (hashCode == EMAIL_ADDRESS_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::EMAIL_ADDRESS_IN_USE), false);
  }
  else if (hashCode == RESERVED_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::RESERVED_NAME), false);
  }
  else if (hashCode == ORGANIZATION_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ORGANIZATION_STATE), false);
  }
  else if (hashCode == ENTITY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ENTITY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_CONFIGURATION), false);
  }
  else if (hashCode == MAIL_DOMAIN_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::MAIL_DOMAIN_IN_USE), false);
  }
  else if (hashCode == ENTITY_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::ENTITY_ALREADY_REGISTERED), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_PASSWORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::INVALID_PASSWORD), false);
  }
  else if (hashCode == DIRECTORY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::DIRECTORY_IN_USE), false);
  }
  else if (hashCode == MAIL_DOMAIN_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailErrors::MAIL_DOMAIN_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkMailErrorMapper
} // namespace WorkMail
} // namespace Aws

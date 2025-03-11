/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/taxsettings/TaxSettingsErrors.h>
#include <aws/taxsettings/model/ConflictException.h>
#include <aws/taxsettings/model/InternalServerException.h>
#include <aws/taxsettings/model/ResourceNotFoundException.h>
#include <aws/taxsettings/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TaxSettings;
using namespace Aws::TaxSettings::Model;

namespace Aws
{
namespace TaxSettings
{
template<> AWS_TAXSETTINGS_API ConflictException TaxSettingsError::GetModeledError()
{
  assert(this->GetErrorType() == TaxSettingsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_TAXSETTINGS_API InternalServerException TaxSettingsError::GetModeledError()
{
  assert(this->GetErrorType() == TaxSettingsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_TAXSETTINGS_API ResourceNotFoundException TaxSettingsError::GetModeledError()
{
  assert(this->GetErrorType() == TaxSettingsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_TAXSETTINGS_API ValidationException TaxSettingsError::GetModeledError()
{
  assert(this->GetErrorType() == TaxSettingsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace TaxSettingsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int ATTACHMENT_UPLOAD_HASH = HashingUtils::HashString("AttachmentUploadException");
static const int CASE_CREATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CaseCreationLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TaxSettingsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TaxSettingsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == ATTACHMENT_UPLOAD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TaxSettingsErrors::ATTACHMENT_UPLOAD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CASE_CREATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TaxSettingsErrors::CASE_CREATION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TaxSettingsErrorMapper
} // namespace TaxSettings
} // namespace Aws

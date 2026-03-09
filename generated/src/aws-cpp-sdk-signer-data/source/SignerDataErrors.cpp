/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/signer-data/SignerDataErrors.h>
#include <aws/signer-data/model/AccessDeniedException.h>
#include <aws/signer-data/model/InternalServiceErrorException.h>
#include <aws/signer-data/model/TooManyRequestsException.h>
#include <aws/signer-data/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SignerData;
using namespace Aws::SignerData::Model;

namespace Aws {
namespace SignerData {
template <>
AWS_SIGNERDATA_API ValidationException SignerDataError::GetModeledError() {
  assert(this->GetErrorType() == SignerDataErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNERDATA_API AccessDeniedException SignerDataError::GetModeledError() {
  assert(this->GetErrorType() == SignerDataErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNERDATA_API TooManyRequestsException SignerDataError::GetModeledError() {
  assert(this->GetErrorType() == SignerDataErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template <>
AWS_SIGNERDATA_API InternalServiceErrorException SignerDataError::GetModeledError() {
  assert(this->GetErrorType() == SignerDataErrors::INTERNAL_SERVICE_ERROR);
  return InternalServiceErrorException(this->GetJsonPayload().View());
}

namespace SignerDataErrorMapper {

static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TOO_MANY_REQUESTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerDataErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  } else if (hashCode == INTERNAL_SERVICE_ERROR_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SignerDataErrors::INTERNAL_SERVICE_ERROR), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SignerDataErrorMapper
}  // namespace SignerData
}  // namespace Aws

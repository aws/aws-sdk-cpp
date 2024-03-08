/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrors.h>
#include <aws/payment-cryptography-data/model/ResourceNotFoundException.h>
#include <aws/payment-cryptography-data/model/ValidationException.h>
#include <aws/payment-cryptography-data/model/VerificationFailedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PaymentCryptographyData;
using namespace Aws::PaymentCryptographyData::Model;

namespace Aws
{
namespace PaymentCryptographyData
{
template<> AWS_PAYMENTCRYPTOGRAPHYDATA_API ResourceNotFoundException PaymentCryptographyDataError::GetModeledError()
{
  assert(this->GetErrorType() == PaymentCryptographyDataErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PAYMENTCRYPTOGRAPHYDATA_API ValidationException PaymentCryptographyDataError::GetModeledError()
{
  assert(this->GetErrorType() == PaymentCryptographyDataErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_PAYMENTCRYPTOGRAPHYDATA_API VerificationFailedException PaymentCryptographyDataError::GetModeledError()
{
  assert(this->GetErrorType() == PaymentCryptographyDataErrors::VERIFICATION_FAILED);
  return VerificationFailedException(this->GetJsonPayload().View());
}

namespace PaymentCryptographyDataErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int VERIFICATION_FAILED_HASH = HashingUtils::HashString("VerificationFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PaymentCryptographyDataErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == VERIFICATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PaymentCryptographyDataErrors::VERIFICATION_FAILED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PaymentCryptographyDataErrorMapper
} // namespace PaymentCryptographyData
} // namespace Aws

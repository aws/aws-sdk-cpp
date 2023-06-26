﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography/PaymentCryptographyErrors.h>
#include <aws/payment-cryptography/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PaymentCryptography;
using namespace Aws::PaymentCryptography::Model;

namespace Aws
{
namespace PaymentCryptography
{
template<> AWS_PAYMENTCRYPTOGRAPHY_API ResourceNotFoundException PaymentCryptographyError::GetModeledError()
{
  assert(this->GetErrorType() == PaymentCryptographyErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace PaymentCryptographyErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PaymentCryptographyErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PaymentCryptographyErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PaymentCryptographyErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PaymentCryptographyErrorMapper
} // namespace PaymentCryptography
} // namespace Aws

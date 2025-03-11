/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa/MWAAErrors.h>
#include <aws/mwaa/model/RestApiServerException.h>
#include <aws/mwaa/model/RestApiClientException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MWAA;
using namespace Aws::MWAA::Model;

namespace Aws
{
namespace MWAA
{
template<> AWS_MWAA_API RestApiServerException MWAAError::GetModeledError()
{
  assert(this->GetErrorType() == MWAAErrors::REST_API_SERVER);
  return RestApiServerException(this->GetJsonPayload().View());
}

template<> AWS_MWAA_API RestApiClientException MWAAError::GetModeledError()
{
  assert(this->GetErrorType() == MWAAErrors::REST_API_CLIENT);
  return RestApiClientException(this->GetJsonPayload().View());
}

namespace MWAAErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int REST_API_SERVER_HASH = HashingUtils::HashString("RestApiServerException");
static const int REST_API_CLIENT_HASH = HashingUtils::HashString("RestApiClientException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == REST_API_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAErrors::REST_API_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REST_API_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MWAAErrors::REST_API_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MWAAErrorMapper
} // namespace MWAA
} // namespace Aws

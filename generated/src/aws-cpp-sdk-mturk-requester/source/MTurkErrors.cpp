/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mturk-requester/MTurkErrors.h>
#include <aws/mturk-requester/model/ServiceFault.h>
#include <aws/mturk-requester/model/RequestError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MTurk;
using namespace Aws::MTurk::Model;

namespace Aws
{
namespace MTurk
{
template<> AWS_MTURK_API ServiceFault MTurkError::GetModeledError()
{
  assert(this->GetErrorType() == MTurkErrors::SERVICE_FAULT);
  return ServiceFault(this->GetJsonPayload().View());
}

template<> AWS_MTURK_API RequestError MTurkError::GetModeledError()
{
  assert(this->GetErrorType() == MTurkErrors::REQUEST);
  return RequestError(this->GetJsonPayload().View());
}

namespace MTurkErrorMapper
{

static const int SERVICE_FAULT_HASH = HashingUtils::HashString("ServiceFault");
static const int REQUEST_HASH = HashingUtils::HashString("RequestError");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MTurkErrors::SERVICE_FAULT), false);
  }
  else if (hashCode == REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MTurkErrors::REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MTurkErrorMapper
} // namespace MTurk
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/snowball/SnowballErrors.h>
#include <aws/snowball/model/ConflictException.h>
#include <aws/snowball/model/InvalidResourceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Snowball;
using namespace Aws::Snowball::Model;

namespace Aws
{
namespace Snowball
{
template<> AWS_SNOWBALL_API ConflictException SnowballError::GetModeledError()
{
  assert(this->GetErrorType() == SnowballErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SNOWBALL_API InvalidResourceException SnowballError::GetModeledError()
{
  assert(this->GetErrorType() == SnowballErrors::INVALID_RESOURCE);
  return InvalidResourceException(this->GetJsonPayload().View());
}

namespace SnowballErrorMapper
{

static constexpr uint32_t CLUSTER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ClusterLimitExceededException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INVALID_ADDRESS_HASH = ConstExprHashingUtils::HashString("InvalidAddressException");
static constexpr uint32_t INVALID_JOB_STATE_HASH = ConstExprHashingUtils::HashString("InvalidJobStateException");
static constexpr uint32_t K_M_S_REQUEST_FAILED_HASH = ConstExprHashingUtils::HashString("KMSRequestFailedException");
static constexpr uint32_t EC2_REQUEST_FAILED_HASH = ConstExprHashingUtils::HashString("Ec2RequestFailedException");
static constexpr uint32_t INVALID_INPUT_COMBINATION_HASH = ConstExprHashingUtils::HashString("InvalidInputCombinationException");
static constexpr uint32_t UNSUPPORTED_ADDRESS_HASH = ConstExprHashingUtils::HashString("UnsupportedAddressException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_RESOURCE_HASH = ConstExprHashingUtils::HashString("InvalidResourceException");
static constexpr uint32_t RETURN_SHIPPING_LABEL_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ReturnShippingLabelAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLUSTER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::CLUSTER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::CONFLICT), false);
  }
  else if (hashCode == INVALID_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_ADDRESS), false);
  }
  else if (hashCode == INVALID_JOB_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_JOB_STATE), false);
  }
  else if (hashCode == K_M_S_REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::K_M_S_REQUEST_FAILED), false);
  }
  else if (hashCode == EC2_REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::EC2_REQUEST_FAILED), false);
  }
  else if (hashCode == INVALID_INPUT_COMBINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_INPUT_COMBINATION), false);
  }
  else if (hashCode == UNSUPPORTED_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::UNSUPPORTED_ADDRESS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_RESOURCE), false);
  }
  else if (hashCode == RETURN_SHIPPING_LABEL_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::RETURN_SHIPPING_LABEL_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SnowballErrorMapper
} // namespace Snowball
} // namespace Aws

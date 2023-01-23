/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sms/SMSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SMS;

namespace Aws
{
namespace SMS
{
namespace SMSErrorMapper
{

static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int REPLICATION_RUN_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ReplicationRunLimitExceededException");
static const int NO_CONNECTORS_AVAILABLE_HASH = HashingUtils::HashString("NoConnectorsAvailableException");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingRequiredParameterException");
static const int SERVER_CANNOT_BE_REPLICATED_HASH = HashingUtils::HashString("ServerCannotBeReplicatedException");
static const int TEMPORARILY_UNAVAILABLE_HASH = HashingUtils::HashString("TemporarilyUnavailableException");
static const int UNAUTHORIZED_OPERATION_HASH = HashingUtils::HashString("UnauthorizedOperationException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int REPLICATION_JOB_ALREADY_EXISTS_HASH = HashingUtils::HashString("ReplicationJobAlreadyExistsException");
static const int DRY_RUN_OPERATION_HASH = HashingUtils::HashString("DryRunOperationException");
static const int REPLICATION_JOB_NOT_FOUND_HASH = HashingUtils::HashString("ReplicationJobNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == REPLICATION_RUN_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::REPLICATION_RUN_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == NO_CONNECTORS_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::NO_CONNECTORS_AVAILABLE), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == SERVER_CANNOT_BE_REPLICATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::SERVER_CANNOT_BE_REPLICATED), false);
  }
  else if (hashCode == TEMPORARILY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::TEMPORARILY_UNAVAILABLE), false);
  }
  else if (hashCode == UNAUTHORIZED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::UNAUTHORIZED_OPERATION), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == REPLICATION_JOB_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::REPLICATION_JOB_ALREADY_EXISTS), false);
  }
  else if (hashCode == DRY_RUN_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::DRY_RUN_OPERATION), false);
  }
  else if (hashCode == REPLICATION_JOB_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SMSErrors::REPLICATION_JOB_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SMSErrorMapper
} // namespace SMS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("INVALID_RESOURCE_STATE");
        static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RESOURCE_LIMIT_EXCEEDED");
        static const int RESOURCE_CREATION_FAILURE_HASH = HashingUtils::HashString("RESOURCE_CREATION_FAILURE");
        static const int RESOURCE_UPDATE_FAILURE_HASH = HashingUtils::HashString("RESOURCE_UPDATE_FAILURE");
        static const int SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE_HASH = HashingUtils::HashString("SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE");
        static const int RESOURCE_DELETION_FAILURE_HASH = HashingUtils::HashString("RESOURCE_DELETION_FAILURE");
        static const int RESOURCE_RETRIEVAL_FAILURE_HASH = HashingUtils::HashString("RESOURCE_RETRIEVAL_FAILURE");
        static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("RESOURCE_IN_USE");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int STATE_TRANSITION_FAILURE_HASH = HashingUtils::HashString("STATE_TRANSITION_FAILURE");
        static const int REQUEST_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("REQUEST_LIMIT_EXCEEDED");
        static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NOT_AUTHORIZED");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_RESOURCE_STATE_HASH)
          {
            return ErrorCode::INVALID_RESOURCE_STATE;
          }
          else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
          {
            return ErrorCode::RESOURCE_LIMIT_EXCEEDED;
          }
          else if (hashCode == RESOURCE_CREATION_FAILURE_HASH)
          {
            return ErrorCode::RESOURCE_CREATION_FAILURE;
          }
          else if (hashCode == RESOURCE_UPDATE_FAILURE_HASH)
          {
            return ErrorCode::RESOURCE_UPDATE_FAILURE;
          }
          else if (hashCode == SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE_HASH)
          {
            return ErrorCode::SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE;
          }
          else if (hashCode == RESOURCE_DELETION_FAILURE_HASH)
          {
            return ErrorCode::RESOURCE_DELETION_FAILURE;
          }
          else if (hashCode == RESOURCE_RETRIEVAL_FAILURE_HASH)
          {
            return ErrorCode::RESOURCE_RETRIEVAL_FAILURE;
          }
          else if (hashCode == RESOURCE_IN_USE_HASH)
          {
            return ErrorCode::RESOURCE_IN_USE;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return ErrorCode::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == STATE_TRANSITION_FAILURE_HASH)
          {
            return ErrorCode::STATE_TRANSITION_FAILURE;
          }
          else if (hashCode == REQUEST_LIMIT_EXCEEDED_HASH)
          {
            return ErrorCode::REQUEST_LIMIT_EXCEEDED;
          }
          else if (hashCode == NOT_AUTHORIZED_HASH)
          {
            return ErrorCode::NOT_AUTHORIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::INVALID_RESOURCE_STATE:
            return "INVALID_RESOURCE_STATE";
          case ErrorCode::RESOURCE_LIMIT_EXCEEDED:
            return "RESOURCE_LIMIT_EXCEEDED";
          case ErrorCode::RESOURCE_CREATION_FAILURE:
            return "RESOURCE_CREATION_FAILURE";
          case ErrorCode::RESOURCE_UPDATE_FAILURE:
            return "RESOURCE_UPDATE_FAILURE";
          case ErrorCode::SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE:
            return "SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE";
          case ErrorCode::RESOURCE_DELETION_FAILURE:
            return "RESOURCE_DELETION_FAILURE";
          case ErrorCode::RESOURCE_RETRIEVAL_FAILURE:
            return "RESOURCE_RETRIEVAL_FAILURE";
          case ErrorCode::RESOURCE_IN_USE:
            return "RESOURCE_IN_USE";
          case ErrorCode::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case ErrorCode::STATE_TRANSITION_FAILURE:
            return "STATE_TRANSITION_FAILURE";
          case ErrorCode::REQUEST_LIMIT_EXCEEDED:
            return "REQUEST_LIMIT_EXCEEDED";
          case ErrorCode::NOT_AUTHORIZED:
            return "NOT_AUTHORIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws

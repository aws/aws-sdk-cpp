/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileValidationStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace LaunchProfileValidationStatusCodeMapper
      {

        static const int VALIDATION_NOT_STARTED_HASH = HashingUtils::HashString("VALIDATION_NOT_STARTED");
        static const int VALIDATION_IN_PROGRESS_HASH = HashingUtils::HashString("VALIDATION_IN_PROGRESS");
        static const int VALIDATION_SUCCESS_HASH = HashingUtils::HashString("VALIDATION_SUCCESS");
        static const int VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION_HASH = HashingUtils::HashString("VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION");
        static const int VALIDATION_FAILED_SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("VALIDATION_FAILED_SUBNET_NOT_FOUND");
        static const int VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION_HASH = HashingUtils::HashString("VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION");
        static const int VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY_HASH = HashingUtils::HashString("VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY");
        static const int VALIDATION_FAILED_UNAUTHORIZED_HASH = HashingUtils::HashString("VALIDATION_FAILED_UNAUTHORIZED");
        static const int VALIDATION_FAILED_INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("VALIDATION_FAILED_INTERNAL_SERVER_ERROR");


        LaunchProfileValidationStatusCode GetLaunchProfileValidationStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_NOT_STARTED_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_NOT_STARTED;
          }
          else if (hashCode == VALIDATION_IN_PROGRESS_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_IN_PROGRESS;
          }
          else if (hashCode == VALIDATION_SUCCESS_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_SUCCESS;
          }
          else if (hashCode == VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION;
          }
          else if (hashCode == VALIDATION_FAILED_SUBNET_NOT_FOUND_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_FAILED_SUBNET_NOT_FOUND;
          }
          else if (hashCode == VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION;
          }
          else if (hashCode == VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY;
          }
          else if (hashCode == VALIDATION_FAILED_UNAUTHORIZED_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_FAILED_UNAUTHORIZED;
          }
          else if (hashCode == VALIDATION_FAILED_INTERNAL_SERVER_ERROR_HASH)
          {
            return LaunchProfileValidationStatusCode::VALIDATION_FAILED_INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfileValidationStatusCode>(hashCode);
          }

          return LaunchProfileValidationStatusCode::NOT_SET;
        }

        Aws::String GetNameForLaunchProfileValidationStatusCode(LaunchProfileValidationStatusCode enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfileValidationStatusCode::NOT_SET:
            return {};
          case LaunchProfileValidationStatusCode::VALIDATION_NOT_STARTED:
            return "VALIDATION_NOT_STARTED";
          case LaunchProfileValidationStatusCode::VALIDATION_IN_PROGRESS:
            return "VALIDATION_IN_PROGRESS";
          case LaunchProfileValidationStatusCode::VALIDATION_SUCCESS:
            return "VALIDATION_SUCCESS";
          case LaunchProfileValidationStatusCode::VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION:
            return "VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION";
          case LaunchProfileValidationStatusCode::VALIDATION_FAILED_SUBNET_NOT_FOUND:
            return "VALIDATION_FAILED_SUBNET_NOT_FOUND";
          case LaunchProfileValidationStatusCode::VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION:
            return "VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION";
          case LaunchProfileValidationStatusCode::VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY:
            return "VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY";
          case LaunchProfileValidationStatusCode::VALIDATION_FAILED_UNAUTHORIZED:
            return "VALIDATION_FAILED_UNAUTHORIZED";
          case LaunchProfileValidationStatusCode::VALIDATION_FAILED_INTERNAL_SERVER_ERROR:
            return "VALIDATION_FAILED_INTERNAL_SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchProfileValidationStatusCodeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws

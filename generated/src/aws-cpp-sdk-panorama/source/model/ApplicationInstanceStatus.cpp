/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ApplicationInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace ApplicationInstanceStatusMapper
      {

        static const int DEPLOYMENT_PENDING_HASH = HashingUtils::HashString("DEPLOYMENT_PENDING");
        static const int DEPLOYMENT_REQUESTED_HASH = HashingUtils::HashString("DEPLOYMENT_REQUESTED");
        static const int DEPLOYMENT_IN_PROGRESS_HASH = HashingUtils::HashString("DEPLOYMENT_IN_PROGRESS");
        static const int DEPLOYMENT_ERROR_HASH = HashingUtils::HashString("DEPLOYMENT_ERROR");
        static const int DEPLOYMENT_SUCCEEDED_HASH = HashingUtils::HashString("DEPLOYMENT_SUCCEEDED");
        static const int REMOVAL_PENDING_HASH = HashingUtils::HashString("REMOVAL_PENDING");
        static const int REMOVAL_REQUESTED_HASH = HashingUtils::HashString("REMOVAL_REQUESTED");
        static const int REMOVAL_IN_PROGRESS_HASH = HashingUtils::HashString("REMOVAL_IN_PROGRESS");
        static const int REMOVAL_FAILED_HASH = HashingUtils::HashString("REMOVAL_FAILED");
        static const int REMOVAL_SUCCEEDED_HASH = HashingUtils::HashString("REMOVAL_SUCCEEDED");
        static const int DEPLOYMENT_FAILED_HASH = HashingUtils::HashString("DEPLOYMENT_FAILED");


        ApplicationInstanceStatus GetApplicationInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOYMENT_PENDING_HASH)
          {
            return ApplicationInstanceStatus::DEPLOYMENT_PENDING;
          }
          else if (hashCode == DEPLOYMENT_REQUESTED_HASH)
          {
            return ApplicationInstanceStatus::DEPLOYMENT_REQUESTED;
          }
          else if (hashCode == DEPLOYMENT_IN_PROGRESS_HASH)
          {
            return ApplicationInstanceStatus::DEPLOYMENT_IN_PROGRESS;
          }
          else if (hashCode == DEPLOYMENT_ERROR_HASH)
          {
            return ApplicationInstanceStatus::DEPLOYMENT_ERROR;
          }
          else if (hashCode == DEPLOYMENT_SUCCEEDED_HASH)
          {
            return ApplicationInstanceStatus::DEPLOYMENT_SUCCEEDED;
          }
          else if (hashCode == REMOVAL_PENDING_HASH)
          {
            return ApplicationInstanceStatus::REMOVAL_PENDING;
          }
          else if (hashCode == REMOVAL_REQUESTED_HASH)
          {
            return ApplicationInstanceStatus::REMOVAL_REQUESTED;
          }
          else if (hashCode == REMOVAL_IN_PROGRESS_HASH)
          {
            return ApplicationInstanceStatus::REMOVAL_IN_PROGRESS;
          }
          else if (hashCode == REMOVAL_FAILED_HASH)
          {
            return ApplicationInstanceStatus::REMOVAL_FAILED;
          }
          else if (hashCode == REMOVAL_SUCCEEDED_HASH)
          {
            return ApplicationInstanceStatus::REMOVAL_SUCCEEDED;
          }
          else if (hashCode == DEPLOYMENT_FAILED_HASH)
          {
            return ApplicationInstanceStatus::DEPLOYMENT_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationInstanceStatus>(hashCode);
          }

          return ApplicationInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationInstanceStatus(ApplicationInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationInstanceStatus::NOT_SET:
            return {};
          case ApplicationInstanceStatus::DEPLOYMENT_PENDING:
            return "DEPLOYMENT_PENDING";
          case ApplicationInstanceStatus::DEPLOYMENT_REQUESTED:
            return "DEPLOYMENT_REQUESTED";
          case ApplicationInstanceStatus::DEPLOYMENT_IN_PROGRESS:
            return "DEPLOYMENT_IN_PROGRESS";
          case ApplicationInstanceStatus::DEPLOYMENT_ERROR:
            return "DEPLOYMENT_ERROR";
          case ApplicationInstanceStatus::DEPLOYMENT_SUCCEEDED:
            return "DEPLOYMENT_SUCCEEDED";
          case ApplicationInstanceStatus::REMOVAL_PENDING:
            return "REMOVAL_PENDING";
          case ApplicationInstanceStatus::REMOVAL_REQUESTED:
            return "REMOVAL_REQUESTED";
          case ApplicationInstanceStatus::REMOVAL_IN_PROGRESS:
            return "REMOVAL_IN_PROGRESS";
          case ApplicationInstanceStatus::REMOVAL_FAILED:
            return "REMOVAL_FAILED";
          case ApplicationInstanceStatus::REMOVAL_SUCCEEDED:
            return "REMOVAL_SUCCEEDED";
          case ApplicationInstanceStatus::DEPLOYMENT_FAILED:
            return "DEPLOYMENT_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationInstanceStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws

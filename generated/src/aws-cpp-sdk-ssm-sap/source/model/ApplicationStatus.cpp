/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static constexpr uint32_t ACTIVATED_HASH = ConstExprHashingUtils::HashString("ACTIVATED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t REGISTERING_HASH = ConstExprHashingUtils::HashString("REGISTERING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return ApplicationStatus::ACTIVATED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ApplicationStatus::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ApplicationStatus::STOPPED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ApplicationStatus::STOPPING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApplicationStatus::FAILED;
          }
          else if (hashCode == REGISTERING_HASH)
          {
            return ApplicationStatus::REGISTERING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ApplicationStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationStatus>(hashCode);
          }

          return ApplicationStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationStatus(ApplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationStatus::NOT_SET:
            return {};
          case ApplicationStatus::ACTIVATED:
            return "ACTIVATED";
          case ApplicationStatus::STARTING:
            return "STARTING";
          case ApplicationStatus::STOPPED:
            return "STOPPED";
          case ApplicationStatus::STOPPING:
            return "STOPPING";
          case ApplicationStatus::FAILED:
            return "FAILED";
          case ApplicationStatus::REGISTERING:
            return "REGISTERING";
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

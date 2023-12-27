/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ApplicationInstanceHealthStatus.h>
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
      namespace ApplicationInstanceHealthStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");


        ApplicationInstanceHealthStatus GetApplicationInstanceHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ApplicationInstanceHealthStatus::RUNNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ApplicationInstanceHealthStatus::ERROR_;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return ApplicationInstanceHealthStatus::NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationInstanceHealthStatus>(hashCode);
          }

          return ApplicationInstanceHealthStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationInstanceHealthStatus(ApplicationInstanceHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationInstanceHealthStatus::NOT_SET:
            return {};
          case ApplicationInstanceHealthStatus::RUNNING:
            return "RUNNING";
          case ApplicationInstanceHealthStatus::ERROR_:
            return "ERROR";
          case ApplicationInstanceHealthStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationInstanceHealthStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws

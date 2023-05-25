/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ApplicationHealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace ApplicationHealthStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int LAGGING_HASH = HashingUtils::HashString("LAGGING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ApplicationHealthStatus GetApplicationHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return ApplicationHealthStatus::HEALTHY;
          }
          else if (hashCode == LAGGING_HASH)
          {
            return ApplicationHealthStatus::LAGGING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ApplicationHealthStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationHealthStatus>(hashCode);
          }

          return ApplicationHealthStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationHealthStatus(ApplicationHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationHealthStatus::HEALTHY:
            return "HEALTHY";
          case ApplicationHealthStatus::LAGGING:
            return "LAGGING";
          case ApplicationHealthStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationHealthStatusMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws

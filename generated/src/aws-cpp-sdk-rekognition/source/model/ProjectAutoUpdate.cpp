/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProjectAutoUpdate.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace ProjectAutoUpdateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ProjectAutoUpdate GetProjectAutoUpdateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ProjectAutoUpdate::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ProjectAutoUpdate::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectAutoUpdate>(hashCode);
          }

          return ProjectAutoUpdate::NOT_SET;
        }

        Aws::String GetNameForProjectAutoUpdate(ProjectAutoUpdate enumValue)
        {
          switch(enumValue)
          {
          case ProjectAutoUpdate::NOT_SET:
            return {};
          case ProjectAutoUpdate::ENABLED:
            return "ENABLED";
          case ProjectAutoUpdate::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectAutoUpdateMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws

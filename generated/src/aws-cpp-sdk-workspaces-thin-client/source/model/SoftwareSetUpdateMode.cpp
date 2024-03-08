/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/SoftwareSetUpdateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace SoftwareSetUpdateModeMapper
      {

        static const int USE_LATEST_HASH = HashingUtils::HashString("USE_LATEST");
        static const int USE_DESIRED_HASH = HashingUtils::HashString("USE_DESIRED");


        SoftwareSetUpdateMode GetSoftwareSetUpdateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_LATEST_HASH)
          {
            return SoftwareSetUpdateMode::USE_LATEST;
          }
          else if (hashCode == USE_DESIRED_HASH)
          {
            return SoftwareSetUpdateMode::USE_DESIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SoftwareSetUpdateMode>(hashCode);
          }

          return SoftwareSetUpdateMode::NOT_SET;
        }

        Aws::String GetNameForSoftwareSetUpdateMode(SoftwareSetUpdateMode enumValue)
        {
          switch(enumValue)
          {
          case SoftwareSetUpdateMode::NOT_SET:
            return {};
          case SoftwareSetUpdateMode::USE_LATEST:
            return "USE_LATEST";
          case SoftwareSetUpdateMode::USE_DESIRED:
            return "USE_DESIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SoftwareSetUpdateModeMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws

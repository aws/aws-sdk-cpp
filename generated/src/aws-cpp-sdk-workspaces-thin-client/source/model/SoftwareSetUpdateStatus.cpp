/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/SoftwareSetUpdateStatus.h>
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
      namespace SoftwareSetUpdateStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int UP_TO_DATE_HASH = HashingUtils::HashString("UP_TO_DATE");


        SoftwareSetUpdateStatus GetSoftwareSetUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return SoftwareSetUpdateStatus::AVAILABLE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return SoftwareSetUpdateStatus::IN_PROGRESS;
          }
          else if (hashCode == UP_TO_DATE_HASH)
          {
            return SoftwareSetUpdateStatus::UP_TO_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SoftwareSetUpdateStatus>(hashCode);
          }

          return SoftwareSetUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForSoftwareSetUpdateStatus(SoftwareSetUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case SoftwareSetUpdateStatus::NOT_SET:
            return {};
          case SoftwareSetUpdateStatus::AVAILABLE:
            return "AVAILABLE";
          case SoftwareSetUpdateStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case SoftwareSetUpdateStatus::UP_TO_DATE:
            return "UP_TO_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SoftwareSetUpdateStatusMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws

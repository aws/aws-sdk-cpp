/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/PortalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace PortalStatusMapper
      {

        static const int Incomplete_HASH = HashingUtils::HashString("Incomplete");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Active_HASH = HashingUtils::HashString("Active");


        PortalStatus GetPortalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Incomplete_HASH)
          {
            return PortalStatus::Incomplete;
          }
          else if (hashCode == Pending_HASH)
          {
            return PortalStatus::Pending;
          }
          else if (hashCode == Active_HASH)
          {
            return PortalStatus::Active;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortalStatus>(hashCode);
          }

          return PortalStatus::NOT_SET;
        }

        Aws::String GetNameForPortalStatus(PortalStatus enumValue)
        {
          switch(enumValue)
          {
          case PortalStatus::NOT_SET:
            return {};
          case PortalStatus::Incomplete:
            return "Incomplete";
          case PortalStatus::Pending:
            return "Pending";
          case PortalStatus::Active:
            return "Active";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PortalStatusMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws

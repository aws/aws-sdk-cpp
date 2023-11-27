/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/ApplyTimeOf.h>
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
      namespace ApplyTimeOfMapper
      {

        static const int UTC_HASH = HashingUtils::HashString("UTC");
        static const int DEVICE_HASH = HashingUtils::HashString("DEVICE");


        ApplyTimeOf GetApplyTimeOfForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTC_HASH)
          {
            return ApplyTimeOf::UTC;
          }
          else if (hashCode == DEVICE_HASH)
          {
            return ApplyTimeOf::DEVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplyTimeOf>(hashCode);
          }

          return ApplyTimeOf::NOT_SET;
        }

        Aws::String GetNameForApplyTimeOf(ApplyTimeOf enumValue)
        {
          switch(enumValue)
          {
          case ApplyTimeOf::NOT_SET:
            return {};
          case ApplyTimeOf::UTC:
            return "UTC";
          case ApplyTimeOf::DEVICE:
            return "DEVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplyTimeOfMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws

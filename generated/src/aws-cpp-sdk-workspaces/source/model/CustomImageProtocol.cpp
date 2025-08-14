/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CustomImageProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace CustomImageProtocolMapper
      {

        static const int PCOIP_HASH = HashingUtils::HashString("PCOIP");
        static const int DCV_HASH = HashingUtils::HashString("DCV");
        static const int BYOP_HASH = HashingUtils::HashString("BYOP");


        CustomImageProtocol GetCustomImageProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PCOIP_HASH)
          {
            return CustomImageProtocol::PCOIP;
          }
          else if (hashCode == DCV_HASH)
          {
            return CustomImageProtocol::DCV;
          }
          else if (hashCode == BYOP_HASH)
          {
            return CustomImageProtocol::BYOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomImageProtocol>(hashCode);
          }

          return CustomImageProtocol::NOT_SET;
        }

        Aws::String GetNameForCustomImageProtocol(CustomImageProtocol enumValue)
        {
          switch(enumValue)
          {
          case CustomImageProtocol::NOT_SET:
            return {};
          case CustomImageProtocol::PCOIP:
            return "PCOIP";
          case CustomImageProtocol::DCV:
            return "DCV";
          case CustomImageProtocol::BYOP:
            return "BYOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomImageProtocolMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/UplinkGbps.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace UplinkGbpsMapper
      {

        static const int UPLINK_1G_HASH = HashingUtils::HashString("UPLINK_1G");
        static const int UPLINK_10G_HASH = HashingUtils::HashString("UPLINK_10G");
        static const int UPLINK_40G_HASH = HashingUtils::HashString("UPLINK_40G");
        static const int UPLINK_100G_HASH = HashingUtils::HashString("UPLINK_100G");


        UplinkGbps GetUplinkGbpsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPLINK_1G_HASH)
          {
            return UplinkGbps::UPLINK_1G;
          }
          else if (hashCode == UPLINK_10G_HASH)
          {
            return UplinkGbps::UPLINK_10G;
          }
          else if (hashCode == UPLINK_40G_HASH)
          {
            return UplinkGbps::UPLINK_40G;
          }
          else if (hashCode == UPLINK_100G_HASH)
          {
            return UplinkGbps::UPLINK_100G;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UplinkGbps>(hashCode);
          }

          return UplinkGbps::NOT_SET;
        }

        Aws::String GetNameForUplinkGbps(UplinkGbps enumValue)
        {
          switch(enumValue)
          {
          case UplinkGbps::NOT_SET:
            return {};
          case UplinkGbps::UPLINK_1G:
            return "UPLINK_1G";
          case UplinkGbps::UPLINK_10G:
            return "UPLINK_10G";
          case UplinkGbps::UPLINK_40G:
            return "UPLINK_40G";
          case UplinkGbps::UPLINK_100G:
            return "UPLINK_100G";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UplinkGbpsMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws

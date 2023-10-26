/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PowerFeedDrop.h>
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
      namespace PowerFeedDropMapper
      {

        static const int ABOVE_RACK_HASH = HashingUtils::HashString("ABOVE_RACK");
        static const int BELOW_RACK_HASH = HashingUtils::HashString("BELOW_RACK");


        PowerFeedDrop GetPowerFeedDropForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABOVE_RACK_HASH)
          {
            return PowerFeedDrop::ABOVE_RACK;
          }
          else if (hashCode == BELOW_RACK_HASH)
          {
            return PowerFeedDrop::BELOW_RACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PowerFeedDrop>(hashCode);
          }

          return PowerFeedDrop::NOT_SET;
        }

        Aws::String GetNameForPowerFeedDrop(PowerFeedDrop enumValue)
        {
          switch(enumValue)
          {
          case PowerFeedDrop::NOT_SET:
            return {};
          case PowerFeedDrop::ABOVE_RACK:
            return "ABOVE_RACK";
          case PowerFeedDrop::BELOW_RACK:
            return "BELOW_RACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PowerFeedDropMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws

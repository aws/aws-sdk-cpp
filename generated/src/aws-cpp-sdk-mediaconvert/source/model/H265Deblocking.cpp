/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265Deblocking.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace H265DeblockingMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        H265Deblocking GetH265DeblockingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return H265Deblocking::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return H265Deblocking::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265Deblocking>(hashCode);
          }

          return H265Deblocking::NOT_SET;
        }

        Aws::String GetNameForH265Deblocking(H265Deblocking enumValue)
        {
          switch(enumValue)
          {
          case H265Deblocking::NOT_SET:
            return {};
          case H265Deblocking::ENABLED:
            return "ENABLED";
          case H265Deblocking::DISABLED:
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

      } // namespace H265DeblockingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

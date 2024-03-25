/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265TreeblockSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H265TreeblockSizeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int TREE_SIZE_32X32_HASH = HashingUtils::HashString("TREE_SIZE_32X32");


        H265TreeblockSize GetH265TreeblockSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return H265TreeblockSize::AUTO;
          }
          else if (hashCode == TREE_SIZE_32X32_HASH)
          {
            return H265TreeblockSize::TREE_SIZE_32X32;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265TreeblockSize>(hashCode);
          }

          return H265TreeblockSize::NOT_SET;
        }

        Aws::String GetNameForH265TreeblockSize(H265TreeblockSize enumValue)
        {
          switch(enumValue)
          {
          case H265TreeblockSize::NOT_SET:
            return {};
          case H265TreeblockSize::AUTO:
            return "AUTO";
          case H265TreeblockSize::TREE_SIZE_32X32:
            return "TREE_SIZE_32X32";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265TreeblockSizeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

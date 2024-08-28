/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/Size.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PCS
  {
    namespace Model
    {
      namespace SizeMapper
      {

        static const int SMALL_HASH = HashingUtils::HashString("SMALL");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");


        Size GetSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALL_HASH)
          {
            return Size::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Size::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return Size::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Size>(hashCode);
          }

          return Size::NOT_SET;
        }

        Aws::String GetNameForSize(Size enumValue)
        {
          switch(enumValue)
          {
          case Size::NOT_SET:
            return {};
          case Size::SMALL:
            return "SMALL";
          case Size::MEDIUM:
            return "MEDIUM";
          case Size::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SizeMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws

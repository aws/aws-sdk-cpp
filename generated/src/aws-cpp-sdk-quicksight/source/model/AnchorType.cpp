/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnchorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AnchorTypeMapper
      {

        static const int TODAY_HASH = HashingUtils::HashString("TODAY");


        AnchorType GetAnchorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TODAY_HASH)
          {
            return AnchorType::TODAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnchorType>(hashCode);
          }

          return AnchorType::NOT_SET;
        }

        Aws::String GetNameForAnchorType(AnchorType enumValue)
        {
          switch(enumValue)
          {
          case AnchorType::NOT_SET:
            return {};
          case AnchorType::TODAY:
            return "TODAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnchorTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

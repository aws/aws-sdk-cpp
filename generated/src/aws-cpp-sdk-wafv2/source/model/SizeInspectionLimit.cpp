/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/SizeInspectionLimit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace SizeInspectionLimitMapper
      {

        static const int KB_16_HASH = HashingUtils::HashString("KB_16");
        static const int KB_32_HASH = HashingUtils::HashString("KB_32");
        static const int KB_48_HASH = HashingUtils::HashString("KB_48");
        static const int KB_64_HASH = HashingUtils::HashString("KB_64");


        SizeInspectionLimit GetSizeInspectionLimitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KB_16_HASH)
          {
            return SizeInspectionLimit::KB_16;
          }
          else if (hashCode == KB_32_HASH)
          {
            return SizeInspectionLimit::KB_32;
          }
          else if (hashCode == KB_48_HASH)
          {
            return SizeInspectionLimit::KB_48;
          }
          else if (hashCode == KB_64_HASH)
          {
            return SizeInspectionLimit::KB_64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SizeInspectionLimit>(hashCode);
          }

          return SizeInspectionLimit::NOT_SET;
        }

        Aws::String GetNameForSizeInspectionLimit(SizeInspectionLimit enumValue)
        {
          switch(enumValue)
          {
          case SizeInspectionLimit::NOT_SET:
            return {};
          case SizeInspectionLimit::KB_16:
            return "KB_16";
          case SizeInspectionLimit::KB_32:
            return "KB_32";
          case SizeInspectionLimit::KB_48:
            return "KB_48";
          case SizeInspectionLimit::KB_64:
            return "KB_64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SizeInspectionLimitMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws

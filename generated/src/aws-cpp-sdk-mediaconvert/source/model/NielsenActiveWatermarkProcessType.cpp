/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NielsenActiveWatermarkProcessType.h>
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
      namespace NielsenActiveWatermarkProcessTypeMapper
      {

        static constexpr uint32_t NAES2_AND_NW_HASH = ConstExprHashingUtils::HashString("NAES2_AND_NW");
        static constexpr uint32_t CBET_HASH = ConstExprHashingUtils::HashString("CBET");
        static constexpr uint32_t NAES2_AND_NW_AND_CBET_HASH = ConstExprHashingUtils::HashString("NAES2_AND_NW_AND_CBET");


        NielsenActiveWatermarkProcessType GetNielsenActiveWatermarkProcessTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAES2_AND_NW_HASH)
          {
            return NielsenActiveWatermarkProcessType::NAES2_AND_NW;
          }
          else if (hashCode == CBET_HASH)
          {
            return NielsenActiveWatermarkProcessType::CBET;
          }
          else if (hashCode == NAES2_AND_NW_AND_CBET_HASH)
          {
            return NielsenActiveWatermarkProcessType::NAES2_AND_NW_AND_CBET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenActiveWatermarkProcessType>(hashCode);
          }

          return NielsenActiveWatermarkProcessType::NOT_SET;
        }

        Aws::String GetNameForNielsenActiveWatermarkProcessType(NielsenActiveWatermarkProcessType enumValue)
        {
          switch(enumValue)
          {
          case NielsenActiveWatermarkProcessType::NOT_SET:
            return {};
          case NielsenActiveWatermarkProcessType::NAES2_AND_NW:
            return "NAES2_AND_NW";
          case NielsenActiveWatermarkProcessType::CBET:
            return "CBET";
          case NielsenActiveWatermarkProcessType::NAES2_AND_NW_AND_CBET:
            return "NAES2_AND_NW_AND_CBET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenActiveWatermarkProcessTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/SupportedStorageEnum.h>
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
      namespace SupportedStorageEnumMapper
      {

        static constexpr uint32_t EBS_HASH = ConstExprHashingUtils::HashString("EBS");
        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");


        SupportedStorageEnum GetSupportedStorageEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EBS_HASH)
          {
            return SupportedStorageEnum::EBS;
          }
          else if (hashCode == S3_HASH)
          {
            return SupportedStorageEnum::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedStorageEnum>(hashCode);
          }

          return SupportedStorageEnum::NOT_SET;
        }

        Aws::String GetNameForSupportedStorageEnum(SupportedStorageEnum enumValue)
        {
          switch(enumValue)
          {
          case SupportedStorageEnum::NOT_SET:
            return {};
          case SupportedStorageEnum::EBS:
            return "EBS";
          case SupportedStorageEnum::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedStorageEnumMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws

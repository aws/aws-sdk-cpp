/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/RenewalType.h>
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
      namespace RenewalTypeMapper
      {

        static constexpr uint32_t AUTO_RENEW_HASH = ConstExprHashingUtils::HashString("AUTO_RENEW");
        static constexpr uint32_t EXPIRE_HASH = ConstExprHashingUtils::HashString("EXPIRE");


        RenewalType GetRenewalTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_RENEW_HASH)
          {
            return RenewalType::AUTO_RENEW;
          }
          else if (hashCode == EXPIRE_HASH)
          {
            return RenewalType::EXPIRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenewalType>(hashCode);
          }

          return RenewalType::NOT_SET;
        }

        Aws::String GetNameForRenewalType(RenewalType enumValue)
        {
          switch(enumValue)
          {
          case RenewalType::NOT_SET:
            return {};
          case RenewalType::AUTO_RENEW:
            return "AUTO_RENEW";
          case RenewalType::EXPIRE:
            return "EXPIRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenewalTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

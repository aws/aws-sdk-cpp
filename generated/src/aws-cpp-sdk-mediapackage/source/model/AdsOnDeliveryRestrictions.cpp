/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace AdsOnDeliveryRestrictionsMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t RESTRICTED_HASH = ConstExprHashingUtils::HashString("RESTRICTED");
        static constexpr uint32_t UNRESTRICTED_HASH = ConstExprHashingUtils::HashString("UNRESTRICTED");
        static constexpr uint32_t BOTH_HASH = ConstExprHashingUtils::HashString("BOTH");


        AdsOnDeliveryRestrictions GetAdsOnDeliveryRestrictionsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AdsOnDeliveryRestrictions::NONE;
          }
          else if (hashCode == RESTRICTED_HASH)
          {
            return AdsOnDeliveryRestrictions::RESTRICTED;
          }
          else if (hashCode == UNRESTRICTED_HASH)
          {
            return AdsOnDeliveryRestrictions::UNRESTRICTED;
          }
          else if (hashCode == BOTH_HASH)
          {
            return AdsOnDeliveryRestrictions::BOTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdsOnDeliveryRestrictions>(hashCode);
          }

          return AdsOnDeliveryRestrictions::NOT_SET;
        }

        Aws::String GetNameForAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions enumValue)
        {
          switch(enumValue)
          {
          case AdsOnDeliveryRestrictions::NOT_SET:
            return {};
          case AdsOnDeliveryRestrictions::NONE:
            return "NONE";
          case AdsOnDeliveryRestrictions::RESTRICTED:
            return "RESTRICTED";
          case AdsOnDeliveryRestrictions::UNRESTRICTED:
            return "UNRESTRICTED";
          case AdsOnDeliveryRestrictions::BOTH:
            return "BOTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdsOnDeliveryRestrictionsMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws

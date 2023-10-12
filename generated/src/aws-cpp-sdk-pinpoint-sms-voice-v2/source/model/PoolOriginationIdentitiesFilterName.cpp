/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PoolOriginationIdentitiesFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace PoolOriginationIdentitiesFilterNameMapper
      {

        static constexpr uint32_t iso_country_code_HASH = ConstExprHashingUtils::HashString("iso-country-code");
        static constexpr uint32_t number_capability_HASH = ConstExprHashingUtils::HashString("number-capability");


        PoolOriginationIdentitiesFilterName GetPoolOriginationIdentitiesFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == iso_country_code_HASH)
          {
            return PoolOriginationIdentitiesFilterName::iso_country_code;
          }
          else if (hashCode == number_capability_HASH)
          {
            return PoolOriginationIdentitiesFilterName::number_capability;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PoolOriginationIdentitiesFilterName>(hashCode);
          }

          return PoolOriginationIdentitiesFilterName::NOT_SET;
        }

        Aws::String GetNameForPoolOriginationIdentitiesFilterName(PoolOriginationIdentitiesFilterName enumValue)
        {
          switch(enumValue)
          {
          case PoolOriginationIdentitiesFilterName::NOT_SET:
            return {};
          case PoolOriginationIdentitiesFilterName::iso_country_code:
            return "iso-country-code";
          case PoolOriginationIdentitiesFilterName::number_capability:
            return "number-capability";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PoolOriginationIdentitiesFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

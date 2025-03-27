/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdsInteractionPublishOptInEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace AdsInteractionPublishOptInEventTypeMapper
      {

        static const int RAW_ADS_RESPONSE_HASH = HashingUtils::HashString("RAW_ADS_RESPONSE");


        AdsInteractionPublishOptInEventType GetAdsInteractionPublishOptInEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RAW_ADS_RESPONSE_HASH)
          {
            return AdsInteractionPublishOptInEventType::RAW_ADS_RESPONSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdsInteractionPublishOptInEventType>(hashCode);
          }

          return AdsInteractionPublishOptInEventType::NOT_SET;
        }

        Aws::String GetNameForAdsInteractionPublishOptInEventType(AdsInteractionPublishOptInEventType enumValue)
        {
          switch(enumValue)
          {
          case AdsInteractionPublishOptInEventType::NOT_SET:
            return {};
          case AdsInteractionPublishOptInEventType::RAW_ADS_RESPONSE:
            return "RAW_ADS_RESPONSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdsInteractionPublishOptInEventTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws

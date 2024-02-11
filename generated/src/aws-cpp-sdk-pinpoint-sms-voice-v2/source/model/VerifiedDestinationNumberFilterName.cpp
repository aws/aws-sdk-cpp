/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/VerifiedDestinationNumberFilterName.h>
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
      namespace VerifiedDestinationNumberFilterNameMapper
      {

        static const int status_HASH = HashingUtils::HashString("status");


        VerifiedDestinationNumberFilterName GetVerifiedDestinationNumberFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == status_HASH)
          {
            return VerifiedDestinationNumberFilterName::status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedDestinationNumberFilterName>(hashCode);
          }

          return VerifiedDestinationNumberFilterName::NOT_SET;
        }

        Aws::String GetNameForVerifiedDestinationNumberFilterName(VerifiedDestinationNumberFilterName enumValue)
        {
          switch(enumValue)
          {
          case VerifiedDestinationNumberFilterName::NOT_SET:
            return {};
          case VerifiedDestinationNumberFilterName::status:
            return "status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedDestinationNumberFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

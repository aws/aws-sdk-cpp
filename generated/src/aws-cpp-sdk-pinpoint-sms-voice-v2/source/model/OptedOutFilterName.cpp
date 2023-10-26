/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/OptedOutFilterName.h>
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
      namespace OptedOutFilterNameMapper
      {

        static const int end_user_opted_out_HASH = HashingUtils::HashString("end-user-opted-out");


        OptedOutFilterName GetOptedOutFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == end_user_opted_out_HASH)
          {
            return OptedOutFilterName::end_user_opted_out;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptedOutFilterName>(hashCode);
          }

          return OptedOutFilterName::NOT_SET;
        }

        Aws::String GetNameForOptedOutFilterName(OptedOutFilterName enumValue)
        {
          switch(enumValue)
          {
          case OptedOutFilterName::NOT_SET:
            return {};
          case OptedOutFilterName::end_user_opted_out:
            return "end-user-opted-out";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptedOutFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

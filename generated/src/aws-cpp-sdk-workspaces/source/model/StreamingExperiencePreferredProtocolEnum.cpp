/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StreamingExperiencePreferredProtocolEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace StreamingExperiencePreferredProtocolEnumMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int UDP_HASH = HashingUtils::HashString("UDP");


        StreamingExperiencePreferredProtocolEnum GetStreamingExperiencePreferredProtocolEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return StreamingExperiencePreferredProtocolEnum::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return StreamingExperiencePreferredProtocolEnum::UDP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingExperiencePreferredProtocolEnum>(hashCode);
          }

          return StreamingExperiencePreferredProtocolEnum::NOT_SET;
        }

        Aws::String GetNameForStreamingExperiencePreferredProtocolEnum(StreamingExperiencePreferredProtocolEnum enumValue)
        {
          switch(enumValue)
          {
          case StreamingExperiencePreferredProtocolEnum::NOT_SET:
            return {};
          case StreamingExperiencePreferredProtocolEnum::TCP:
            return "TCP";
          case StreamingExperiencePreferredProtocolEnum::UDP:
            return "UDP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamingExperiencePreferredProtocolEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

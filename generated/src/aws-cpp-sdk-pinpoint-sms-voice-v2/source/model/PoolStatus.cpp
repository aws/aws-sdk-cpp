/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PoolStatus.h>
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
      namespace PoolStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        PoolStatus GetPoolStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PoolStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return PoolStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PoolStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PoolStatus>(hashCode);
          }

          return PoolStatus::NOT_SET;
        }

        Aws::String GetNameForPoolStatus(PoolStatus enumValue)
        {
          switch(enumValue)
          {
          case PoolStatus::NOT_SET:
            return {};
          case PoolStatus::CREATING:
            return "CREATING";
          case PoolStatus::ACTIVE:
            return "ACTIVE";
          case PoolStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PoolStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

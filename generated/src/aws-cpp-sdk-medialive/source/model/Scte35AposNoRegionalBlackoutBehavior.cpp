/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35AposNoRegionalBlackoutBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Scte35AposNoRegionalBlackoutBehaviorMapper
      {

        static const int FOLLOW_HASH = HashingUtils::HashString("FOLLOW");
        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");


        Scte35AposNoRegionalBlackoutBehavior GetScte35AposNoRegionalBlackoutBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_HASH)
          {
            return Scte35AposNoRegionalBlackoutBehavior::FOLLOW;
          }
          else if (hashCode == IGNORE_HASH)
          {
            return Scte35AposNoRegionalBlackoutBehavior::IGNORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35AposNoRegionalBlackoutBehavior>(hashCode);
          }

          return Scte35AposNoRegionalBlackoutBehavior::NOT_SET;
        }

        Aws::String GetNameForScte35AposNoRegionalBlackoutBehavior(Scte35AposNoRegionalBlackoutBehavior enumValue)
        {
          switch(enumValue)
          {
          case Scte35AposNoRegionalBlackoutBehavior::FOLLOW:
            return "FOLLOW";
          case Scte35AposNoRegionalBlackoutBehavior::IGNORE:
            return "IGNORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35AposNoRegionalBlackoutBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

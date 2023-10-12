/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FollowPoint.h>
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
      namespace FollowPointMapper
      {

        static constexpr uint32_t END_HASH = ConstExprHashingUtils::HashString("END");
        static constexpr uint32_t START_HASH = ConstExprHashingUtils::HashString("START");


        FollowPoint GetFollowPointForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_HASH)
          {
            return FollowPoint::END;
          }
          else if (hashCode == START_HASH)
          {
            return FollowPoint::START;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FollowPoint>(hashCode);
          }

          return FollowPoint::NOT_SET;
        }

        Aws::String GetNameForFollowPoint(FollowPoint enumValue)
        {
          switch(enumValue)
          {
          case FollowPoint::NOT_SET:
            return {};
          case FollowPoint::END:
            return "END";
          case FollowPoint::START:
            return "START";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FollowPointMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

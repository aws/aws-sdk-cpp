/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupStreamManifestBehavior.h>
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
      namespace SmoothGroupStreamManifestBehaviorMapper
      {

        static constexpr uint32_t DO_NOT_SEND_HASH = ConstExprHashingUtils::HashString("DO_NOT_SEND");
        static constexpr uint32_t SEND_HASH = ConstExprHashingUtils::HashString("SEND");


        SmoothGroupStreamManifestBehavior GetSmoothGroupStreamManifestBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOT_SEND_HASH)
          {
            return SmoothGroupStreamManifestBehavior::DO_NOT_SEND;
          }
          else if (hashCode == SEND_HASH)
          {
            return SmoothGroupStreamManifestBehavior::SEND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupStreamManifestBehavior>(hashCode);
          }

          return SmoothGroupStreamManifestBehavior::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupStreamManifestBehavior(SmoothGroupStreamManifestBehavior enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupStreamManifestBehavior::NOT_SET:
            return {};
          case SmoothGroupStreamManifestBehavior::DO_NOT_SEND:
            return "DO_NOT_SEND";
          case SmoothGroupStreamManifestBehavior::SEND:
            return "SEND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupStreamManifestBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsTimedMetadataBehavior.h>
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
      namespace M2tsTimedMetadataBehaviorMapper
      {

        static constexpr uint32_t NO_PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("NO_PASSTHROUGH");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");


        M2tsTimedMetadataBehavior GetM2tsTimedMetadataBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return M2tsTimedMetadataBehavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return M2tsTimedMetadataBehavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsTimedMetadataBehavior>(hashCode);
          }

          return M2tsTimedMetadataBehavior::NOT_SET;
        }

        Aws::String GetNameForM2tsTimedMetadataBehavior(M2tsTimedMetadataBehavior enumValue)
        {
          switch(enumValue)
          {
          case M2tsTimedMetadataBehavior::NOT_SET:
            return {};
          case M2tsTimedMetadataBehavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case M2tsTimedMetadataBehavior::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsTimedMetadataBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

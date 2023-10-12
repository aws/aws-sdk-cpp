/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Fmp4TimedMetadataBehavior.h>
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
      namespace Fmp4TimedMetadataBehaviorMapper
      {

        static constexpr uint32_t NO_PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("NO_PASSTHROUGH");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");


        Fmp4TimedMetadataBehavior GetFmp4TimedMetadataBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return Fmp4TimedMetadataBehavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return Fmp4TimedMetadataBehavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Fmp4TimedMetadataBehavior>(hashCode);
          }

          return Fmp4TimedMetadataBehavior::NOT_SET;
        }

        Aws::String GetNameForFmp4TimedMetadataBehavior(Fmp4TimedMetadataBehavior enumValue)
        {
          switch(enumValue)
          {
          case Fmp4TimedMetadataBehavior::NOT_SET:
            return {};
          case Fmp4TimedMetadataBehavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case Fmp4TimedMetadataBehavior::PASSTHROUGH:
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

      } // namespace Fmp4TimedMetadataBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

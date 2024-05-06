/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35SegmentationScope.h>
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
      namespace Scte35SegmentationScopeMapper
      {

        static const int ALL_OUTPUT_GROUPS_HASH = HashingUtils::HashString("ALL_OUTPUT_GROUPS");
        static const int SCTE35_ENABLED_OUTPUT_GROUPS_HASH = HashingUtils::HashString("SCTE35_ENABLED_OUTPUT_GROUPS");


        Scte35SegmentationScope GetScte35SegmentationScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_OUTPUT_GROUPS_HASH)
          {
            return Scte35SegmentationScope::ALL_OUTPUT_GROUPS;
          }
          else if (hashCode == SCTE35_ENABLED_OUTPUT_GROUPS_HASH)
          {
            return Scte35SegmentationScope::SCTE35_ENABLED_OUTPUT_GROUPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35SegmentationScope>(hashCode);
          }

          return Scte35SegmentationScope::NOT_SET;
        }

        Aws::String GetNameForScte35SegmentationScope(Scte35SegmentationScope enumValue)
        {
          switch(enumValue)
          {
          case Scte35SegmentationScope::NOT_SET:
            return {};
          case Scte35SegmentationScope::ALL_OUTPUT_GROUPS:
            return "ALL_OUTPUT_GROUPS";
          case Scte35SegmentationScope::SCTE35_ENABLED_OUTPUT_GROUPS:
            return "SCTE35_ENABLED_OUTPUT_GROUPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35SegmentationScopeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

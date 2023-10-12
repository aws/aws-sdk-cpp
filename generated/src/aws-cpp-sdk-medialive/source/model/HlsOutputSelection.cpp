/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsOutputSelection.h>
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
      namespace HlsOutputSelectionMapper
      {

        static constexpr uint32_t MANIFESTS_AND_SEGMENTS_HASH = ConstExprHashingUtils::HashString("MANIFESTS_AND_SEGMENTS");
        static constexpr uint32_t SEGMENTS_ONLY_HASH = ConstExprHashingUtils::HashString("SEGMENTS_ONLY");
        static constexpr uint32_t VARIANT_MANIFESTS_AND_SEGMENTS_HASH = ConstExprHashingUtils::HashString("VARIANT_MANIFESTS_AND_SEGMENTS");


        HlsOutputSelection GetHlsOutputSelectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANIFESTS_AND_SEGMENTS_HASH)
          {
            return HlsOutputSelection::MANIFESTS_AND_SEGMENTS;
          }
          else if (hashCode == SEGMENTS_ONLY_HASH)
          {
            return HlsOutputSelection::SEGMENTS_ONLY;
          }
          else if (hashCode == VARIANT_MANIFESTS_AND_SEGMENTS_HASH)
          {
            return HlsOutputSelection::VARIANT_MANIFESTS_AND_SEGMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsOutputSelection>(hashCode);
          }

          return HlsOutputSelection::NOT_SET;
        }

        Aws::String GetNameForHlsOutputSelection(HlsOutputSelection enumValue)
        {
          switch(enumValue)
          {
          case HlsOutputSelection::NOT_SET:
            return {};
          case HlsOutputSelection::MANIFESTS_AND_SEGMENTS:
            return "MANIFESTS_AND_SEGMENTS";
          case HlsOutputSelection::SEGMENTS_ONLY:
            return "SEGMENTS_ONLY";
          case HlsOutputSelection::VARIANT_MANIFESTS_AND_SEGMENTS:
            return "VARIANT_MANIFESTS_AND_SEGMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsOutputSelectionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

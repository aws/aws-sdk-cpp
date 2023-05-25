/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsOutputSelection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace HlsOutputSelectionMapper
      {

        static const int MANIFESTS_AND_SEGMENTS_HASH = HashingUtils::HashString("MANIFESTS_AND_SEGMENTS");
        static const int SEGMENTS_ONLY_HASH = HashingUtils::HashString("SEGMENTS_ONLY");


        HlsOutputSelection GetHlsOutputSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANIFESTS_AND_SEGMENTS_HASH)
          {
            return HlsOutputSelection::MANIFESTS_AND_SEGMENTS;
          }
          else if (hashCode == SEGMENTS_ONLY_HASH)
          {
            return HlsOutputSelection::SEGMENTS_ONLY;
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
          case HlsOutputSelection::MANIFESTS_AND_SEGMENTS:
            return "MANIFESTS_AND_SEGMENTS";
          case HlsOutputSelection::SEGMENTS_ONLY:
            return "SEGMENTS_ONLY";
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
  } // namespace MediaConvert
} // namespace Aws

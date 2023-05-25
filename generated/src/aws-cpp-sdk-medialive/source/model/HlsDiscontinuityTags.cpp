/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsDiscontinuityTags.h>
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
      namespace HlsDiscontinuityTagsMapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int NEVER_INSERT_HASH = HashingUtils::HashString("NEVER_INSERT");


        HlsDiscontinuityTags GetHlsDiscontinuityTagsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return HlsDiscontinuityTags::INSERT;
          }
          else if (hashCode == NEVER_INSERT_HASH)
          {
            return HlsDiscontinuityTags::NEVER_INSERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsDiscontinuityTags>(hashCode);
          }

          return HlsDiscontinuityTags::NOT_SET;
        }

        Aws::String GetNameForHlsDiscontinuityTags(HlsDiscontinuityTags enumValue)
        {
          switch(enumValue)
          {
          case HlsDiscontinuityTags::INSERT:
            return "INSERT";
          case HlsDiscontinuityTags::NEVER_INSERT:
            return "NEVER_INSERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsDiscontinuityTagsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

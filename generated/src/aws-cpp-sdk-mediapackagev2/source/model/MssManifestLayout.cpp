/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/MssManifestLayout.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace MssManifestLayoutMapper
      {

        static const int FULL_HASH = HashingUtils::HashString("FULL");
        static const int COMPACT_HASH = HashingUtils::HashString("COMPACT");


        MssManifestLayout GetMssManifestLayoutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HASH)
          {
            return MssManifestLayout::FULL;
          }
          else if (hashCode == COMPACT_HASH)
          {
            return MssManifestLayout::COMPACT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MssManifestLayout>(hashCode);
          }

          return MssManifestLayout::NOT_SET;
        }

        Aws::String GetNameForMssManifestLayout(MssManifestLayout enumValue)
        {
          switch(enumValue)
          {
          case MssManifestLayout::NOT_SET:
            return {};
          case MssManifestLayout::FULL:
            return "FULL";
          case MssManifestLayout::COMPACT:
            return "COMPACT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MssManifestLayoutMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

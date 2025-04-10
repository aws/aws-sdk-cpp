/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafTimedMetadataPassthrough.h>
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
      namespace CmafTimedMetadataPassthroughMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        CmafTimedMetadataPassthrough GetCmafTimedMetadataPassthroughForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CmafTimedMetadataPassthrough::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return CmafTimedMetadataPassthrough::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafTimedMetadataPassthrough>(hashCode);
          }

          return CmafTimedMetadataPassthrough::NOT_SET;
        }

        Aws::String GetNameForCmafTimedMetadataPassthrough(CmafTimedMetadataPassthrough enumValue)
        {
          switch(enumValue)
          {
          case CmafTimedMetadataPassthrough::NOT_SET:
            return {};
          case CmafTimedMetadataPassthrough::DISABLED:
            return "DISABLED";
          case CmafTimedMetadataPassthrough::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafTimedMetadataPassthroughMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

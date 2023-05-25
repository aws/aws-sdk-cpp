/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2ColorMetadata.h>
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
      namespace Mpeg2ColorMetadataMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int INSERT_HASH = HashingUtils::HashString("INSERT");


        Mpeg2ColorMetadata GetMpeg2ColorMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return Mpeg2ColorMetadata::IGNORE;
          }
          else if (hashCode == INSERT_HASH)
          {
            return Mpeg2ColorMetadata::INSERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2ColorMetadata>(hashCode);
          }

          return Mpeg2ColorMetadata::NOT_SET;
        }

        Aws::String GetNameForMpeg2ColorMetadata(Mpeg2ColorMetadata enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2ColorMetadata::IGNORE:
            return "IGNORE";
          case Mpeg2ColorMetadata::INSERT:
            return "INSERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2ColorMetadataMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

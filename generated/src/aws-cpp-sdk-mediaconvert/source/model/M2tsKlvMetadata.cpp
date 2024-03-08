/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsKlvMetadata.h>
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
      namespace M2tsKlvMetadataMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        M2tsKlvMetadata GetM2tsKlvMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return M2tsKlvMetadata::PASSTHROUGH;
          }
          else if (hashCode == NONE_HASH)
          {
            return M2tsKlvMetadata::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsKlvMetadata>(hashCode);
          }

          return M2tsKlvMetadata::NOT_SET;
        }

        Aws::String GetNameForM2tsKlvMetadata(M2tsKlvMetadata enumValue)
        {
          switch(enumValue)
          {
          case M2tsKlvMetadata::NOT_SET:
            return {};
          case M2tsKlvMetadata::PASSTHROUGH:
            return "PASSTHROUGH";
          case M2tsKlvMetadata::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsKlvMetadataMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

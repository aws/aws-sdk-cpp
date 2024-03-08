/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EmbeddedTimecodeOverride.h>
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
      namespace EmbeddedTimecodeOverrideMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int USE_MDPM_HASH = HashingUtils::HashString("USE_MDPM");


        EmbeddedTimecodeOverride GetEmbeddedTimecodeOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return EmbeddedTimecodeOverride::NONE;
          }
          else if (hashCode == USE_MDPM_HASH)
          {
            return EmbeddedTimecodeOverride::USE_MDPM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmbeddedTimecodeOverride>(hashCode);
          }

          return EmbeddedTimecodeOverride::NOT_SET;
        }

        Aws::String GetNameForEmbeddedTimecodeOverride(EmbeddedTimecodeOverride enumValue)
        {
          switch(enumValue)
          {
          case EmbeddedTimecodeOverride::NOT_SET:
            return {};
          case EmbeddedTimecodeOverride::NONE:
            return "NONE";
          case EmbeddedTimecodeOverride::USE_MDPM:
            return "USE_MDPM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmbeddedTimecodeOverrideMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

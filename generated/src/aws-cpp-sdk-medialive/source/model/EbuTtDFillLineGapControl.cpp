/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EbuTtDFillLineGapControl.h>
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
      namespace EbuTtDFillLineGapControlMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        EbuTtDFillLineGapControl GetEbuTtDFillLineGapControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return EbuTtDFillLineGapControl::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return EbuTtDFillLineGapControl::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbuTtDFillLineGapControl>(hashCode);
          }

          return EbuTtDFillLineGapControl::NOT_SET;
        }

        Aws::String GetNameForEbuTtDFillLineGapControl(EbuTtDFillLineGapControl enumValue)
        {
          switch(enumValue)
          {
          case EbuTtDFillLineGapControl::DISABLED:
            return "DISABLED";
          case EbuTtDFillLineGapControl::ENABLED:
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

      } // namespace EbuTtDFillLineGapControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

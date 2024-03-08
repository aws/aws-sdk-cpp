/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdMarkupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace AdMarkupTypeMapper
      {

        static const int DATERANGE_HASH = HashingUtils::HashString("DATERANGE");
        static const int SCTE35_ENHANCED_HASH = HashingUtils::HashString("SCTE35_ENHANCED");


        AdMarkupType GetAdMarkupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATERANGE_HASH)
          {
            return AdMarkupType::DATERANGE;
          }
          else if (hashCode == SCTE35_ENHANCED_HASH)
          {
            return AdMarkupType::SCTE35_ENHANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdMarkupType>(hashCode);
          }

          return AdMarkupType::NOT_SET;
        }

        Aws::String GetNameForAdMarkupType(AdMarkupType enumValue)
        {
          switch(enumValue)
          {
          case AdMarkupType::NOT_SET:
            return {};
          case AdMarkupType::DATERANGE:
            return "DATERANGE";
          case AdMarkupType::SCTE35_ENHANCED:
            return "SCTE35_ENHANCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdMarkupTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws

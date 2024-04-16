/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/AdMarkerDash.h>
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
      namespace AdMarkerDashMapper
      {

        static const int BINARY_HASH = HashingUtils::HashString("BINARY");
        static const int XML_HASH = HashingUtils::HashString("XML");


        AdMarkerDash GetAdMarkerDashForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BINARY_HASH)
          {
            return AdMarkerDash::BINARY;
          }
          else if (hashCode == XML_HASH)
          {
            return AdMarkerDash::XML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdMarkerDash>(hashCode);
          }

          return AdMarkerDash::NOT_SET;
        }

        Aws::String GetNameForAdMarkerDash(AdMarkerDash enumValue)
        {
          switch(enumValue)
          {
          case AdMarkerDash::NOT_SET:
            return {};
          case AdMarkerDash::BINARY:
            return "BINARY";
          case AdMarkerDash::XML:
            return "XML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdMarkerDashMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

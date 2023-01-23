/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DimensionValueSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace DimensionValueSourceMapper
      {

        static const int MESSAGE_TAG_HASH = HashingUtils::HashString("MESSAGE_TAG");
        static const int EMAIL_HEADER_HASH = HashingUtils::HashString("EMAIL_HEADER");
        static const int LINK_TAG_HASH = HashingUtils::HashString("LINK_TAG");


        DimensionValueSource GetDimensionValueSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MESSAGE_TAG_HASH)
          {
            return DimensionValueSource::MESSAGE_TAG;
          }
          else if (hashCode == EMAIL_HEADER_HASH)
          {
            return DimensionValueSource::EMAIL_HEADER;
          }
          else if (hashCode == LINK_TAG_HASH)
          {
            return DimensionValueSource::LINK_TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionValueSource>(hashCode);
          }

          return DimensionValueSource::NOT_SET;
        }

        Aws::String GetNameForDimensionValueSource(DimensionValueSource enumValue)
        {
          switch(enumValue)
          {
          case DimensionValueSource::MESSAGE_TAG:
            return "MESSAGE_TAG";
          case DimensionValueSource::EMAIL_HEADER:
            return "EMAIL_HEADER";
          case DimensionValueSource::LINK_TAG:
            return "LINK_TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionValueSourceMapper
    } // namespace Model
  } // namespace PinpointEmail
} // namespace Aws

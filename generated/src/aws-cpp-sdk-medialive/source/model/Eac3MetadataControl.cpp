/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3MetadataControl.h>
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
      namespace Eac3MetadataControlMapper
      {

        static const int FOLLOW_INPUT_HASH = HashingUtils::HashString("FOLLOW_INPUT");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        Eac3MetadataControl GetEac3MetadataControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_INPUT_HASH)
          {
            return Eac3MetadataControl::FOLLOW_INPUT;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return Eac3MetadataControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3MetadataControl>(hashCode);
          }

          return Eac3MetadataControl::NOT_SET;
        }

        Aws::String GetNameForEac3MetadataControl(Eac3MetadataControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3MetadataControl::FOLLOW_INPUT:
            return "FOLLOW_INPUT";
          case Eac3MetadataControl::USE_CONFIGURED:
            return "USE_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3MetadataControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Ac3MetadataControl.h>
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
      namespace Ac3MetadataControlMapper
      {

        static constexpr uint32_t FOLLOW_INPUT_HASH = ConstExprHashingUtils::HashString("FOLLOW_INPUT");
        static constexpr uint32_t USE_CONFIGURED_HASH = ConstExprHashingUtils::HashString("USE_CONFIGURED");


        Ac3MetadataControl GetAc3MetadataControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_INPUT_HASH)
          {
            return Ac3MetadataControl::FOLLOW_INPUT;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return Ac3MetadataControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3MetadataControl>(hashCode);
          }

          return Ac3MetadataControl::NOT_SET;
        }

        Aws::String GetNameForAc3MetadataControl(Ac3MetadataControl enumValue)
        {
          switch(enumValue)
          {
          case Ac3MetadataControl::NOT_SET:
            return {};
          case Ac3MetadataControl::FOLLOW_INPUT:
            return "FOLLOW_INPUT";
          case Ac3MetadataControl::USE_CONFIGURED:
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

      } // namespace Ac3MetadataControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafIntervalCadence.h>
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
      namespace CmafIntervalCadenceMapper
      {

        static constexpr uint32_t FOLLOW_IFRAME_HASH = ConstExprHashingUtils::HashString("FOLLOW_IFRAME");
        static constexpr uint32_t FOLLOW_CUSTOM_HASH = ConstExprHashingUtils::HashString("FOLLOW_CUSTOM");


        CmafIntervalCadence GetCmafIntervalCadenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_IFRAME_HASH)
          {
            return CmafIntervalCadence::FOLLOW_IFRAME;
          }
          else if (hashCode == FOLLOW_CUSTOM_HASH)
          {
            return CmafIntervalCadence::FOLLOW_CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafIntervalCadence>(hashCode);
          }

          return CmafIntervalCadence::NOT_SET;
        }

        Aws::String GetNameForCmafIntervalCadence(CmafIntervalCadence enumValue)
        {
          switch(enumValue)
          {
          case CmafIntervalCadence::NOT_SET:
            return {};
          case CmafIntervalCadence::FOLLOW_IFRAME:
            return "FOLLOW_IFRAME";
          case CmafIntervalCadence::FOLLOW_CUSTOM:
            return "FOLLOW_CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafIntervalCadenceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

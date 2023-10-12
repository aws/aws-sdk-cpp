/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsAribCaptionsPidControl.h>
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
      namespace M2tsAribCaptionsPidControlMapper
      {

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t USE_CONFIGURED_HASH = ConstExprHashingUtils::HashString("USE_CONFIGURED");


        M2tsAribCaptionsPidControl GetM2tsAribCaptionsPidControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return M2tsAribCaptionsPidControl::AUTO;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return M2tsAribCaptionsPidControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAribCaptionsPidControl>(hashCode);
          }

          return M2tsAribCaptionsPidControl::NOT_SET;
        }

        Aws::String GetNameForM2tsAribCaptionsPidControl(M2tsAribCaptionsPidControl enumValue)
        {
          switch(enumValue)
          {
          case M2tsAribCaptionsPidControl::NOT_SET:
            return {};
          case M2tsAribCaptionsPidControl::AUTO:
            return "AUTO";
          case M2tsAribCaptionsPidControl::USE_CONFIGURED:
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

      } // namespace M2tsAribCaptionsPidControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

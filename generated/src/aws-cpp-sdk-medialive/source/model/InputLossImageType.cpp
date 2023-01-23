/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputLossImageType.h>
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
      namespace InputLossImageTypeMapper
      {

        static const int COLOR_HASH = HashingUtils::HashString("COLOR");
        static const int SLATE_HASH = HashingUtils::HashString("SLATE");


        InputLossImageType GetInputLossImageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLOR_HASH)
          {
            return InputLossImageType::COLOR;
          }
          else if (hashCode == SLATE_HASH)
          {
            return InputLossImageType::SLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputLossImageType>(hashCode);
          }

          return InputLossImageType::NOT_SET;
        }

        Aws::String GetNameForInputLossImageType(InputLossImageType enumValue)
        {
          switch(enumValue)
          {
          case InputLossImageType::COLOR:
            return "COLOR";
          case InputLossImageType::SLATE:
            return "SLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputLossImageTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

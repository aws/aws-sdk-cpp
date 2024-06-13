/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/InputType.h>
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
      namespace InputTypeMapper
      {

        static const int HLS_HASH = HashingUtils::HashString("HLS");
        static const int CMAF_HASH = HashingUtils::HashString("CMAF");


        InputType GetInputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HLS_HASH)
          {
            return InputType::HLS;
          }
          else if (hashCode == CMAF_HASH)
          {
            return InputType::CMAF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputType>(hashCode);
          }

          return InputType::NOT_SET;
        }

        Aws::String GetNameForInputType(InputType enumValue)
        {
          switch(enumValue)
          {
          case InputType::NOT_SET:
            return {};
          case InputType::HLS:
            return "HLS";
          case InputType::CMAF:
            return "CMAF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputTypeMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

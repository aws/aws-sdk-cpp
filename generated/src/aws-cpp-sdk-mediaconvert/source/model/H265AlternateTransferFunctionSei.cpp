/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265AlternateTransferFunctionSei.h>
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
      namespace H265AlternateTransferFunctionSeiMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H265AlternateTransferFunctionSei GetH265AlternateTransferFunctionSeiForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H265AlternateTransferFunctionSei::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H265AlternateTransferFunctionSei::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265AlternateTransferFunctionSei>(hashCode);
          }

          return H265AlternateTransferFunctionSei::NOT_SET;
        }

        Aws::String GetNameForH265AlternateTransferFunctionSei(H265AlternateTransferFunctionSei enumValue)
        {
          switch(enumValue)
          {
          case H265AlternateTransferFunctionSei::DISABLED:
            return "DISABLED";
          case H265AlternateTransferFunctionSei::ENABLED:
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

      } // namespace H265AlternateTransferFunctionSeiMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

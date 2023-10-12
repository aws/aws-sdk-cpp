/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3LfeControl.h>
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
      namespace Eac3LfeControlMapper
      {

        static constexpr uint32_t LFE_HASH = ConstExprHashingUtils::HashString("LFE");
        static constexpr uint32_t NO_LFE_HASH = ConstExprHashingUtils::HashString("NO_LFE");


        Eac3LfeControl GetEac3LfeControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LFE_HASH)
          {
            return Eac3LfeControl::LFE;
          }
          else if (hashCode == NO_LFE_HASH)
          {
            return Eac3LfeControl::NO_LFE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3LfeControl>(hashCode);
          }

          return Eac3LfeControl::NOT_SET;
        }

        Aws::String GetNameForEac3LfeControl(Eac3LfeControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3LfeControl::NOT_SET:
            return {};
          case Eac3LfeControl::LFE:
            return "LFE";
          case Eac3LfeControl::NO_LFE:
            return "NO_LFE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3LfeControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

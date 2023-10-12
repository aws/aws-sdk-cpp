/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CopyProtectionAction.h>
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
      namespace CopyProtectionActionMapper
      {

        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");
        static constexpr uint32_t STRIP_HASH = ConstExprHashingUtils::HashString("STRIP");


        CopyProtectionAction GetCopyProtectionActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return CopyProtectionAction::PASSTHROUGH;
          }
          else if (hashCode == STRIP_HASH)
          {
            return CopyProtectionAction::STRIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CopyProtectionAction>(hashCode);
          }

          return CopyProtectionAction::NOT_SET;
        }

        Aws::String GetNameForCopyProtectionAction(CopyProtectionAction enumValue)
        {
          switch(enumValue)
          {
          case CopyProtectionAction::NOT_SET:
            return {};
          case CopyProtectionAction::PASSTHROUGH:
            return "PASSTHROUGH";
          case CopyProtectionAction::STRIP:
            return "STRIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CopyProtectionActionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

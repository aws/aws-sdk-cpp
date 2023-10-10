/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VchipAction.h>
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
      namespace VchipActionMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int STRIP_HASH = HashingUtils::HashString("STRIP");


        VchipAction GetVchipActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return VchipAction::PASSTHROUGH;
          }
          else if (hashCode == STRIP_HASH)
          {
            return VchipAction::STRIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VchipAction>(hashCode);
          }

          return VchipAction::NOT_SET;
        }

        Aws::String GetNameForVchipAction(VchipAction enumValue)
        {
          switch(enumValue)
          {
          case VchipAction::NOT_SET:
            return {};
          case VchipAction::PASSTHROUGH:
            return "PASSTHROUGH";
          case VchipAction::STRIP:
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

      } // namespace VchipActionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafNielsenId3Behavior.h>
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
      namespace CmafNielsenId3BehaviorMapper
      {

        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        CmafNielsenId3Behavior GetCmafNielsenId3BehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return CmafNielsenId3Behavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return CmafNielsenId3Behavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafNielsenId3Behavior>(hashCode);
          }

          return CmafNielsenId3Behavior::NOT_SET;
        }

        Aws::String GetNameForCmafNielsenId3Behavior(CmafNielsenId3Behavior enumValue)
        {
          switch(enumValue)
          {
          case CmafNielsenId3Behavior::NOT_SET:
            return {};
          case CmafNielsenId3Behavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case CmafNielsenId3Behavior::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafNielsenId3BehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

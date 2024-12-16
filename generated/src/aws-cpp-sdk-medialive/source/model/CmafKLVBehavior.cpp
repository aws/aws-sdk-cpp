/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafKLVBehavior.h>
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
      namespace CmafKLVBehaviorMapper
      {

        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        CmafKLVBehavior GetCmafKLVBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return CmafKLVBehavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return CmafKLVBehavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafKLVBehavior>(hashCode);
          }

          return CmafKLVBehavior::NOT_SET;
        }

        Aws::String GetNameForCmafKLVBehavior(CmafKLVBehavior enumValue)
        {
          switch(enumValue)
          {
          case CmafKLVBehavior::NOT_SET:
            return {};
          case CmafKLVBehavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case CmafKLVBehavior::PASSTHROUGH:
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

      } // namespace CmafKLVBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

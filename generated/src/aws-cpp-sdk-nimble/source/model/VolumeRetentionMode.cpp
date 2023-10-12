/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/VolumeRetentionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace VolumeRetentionModeMapper
      {

        static constexpr uint32_t RETAIN_HASH = ConstExprHashingUtils::HashString("RETAIN");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        VolumeRetentionMode GetVolumeRetentionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETAIN_HASH)
          {
            return VolumeRetentionMode::RETAIN;
          }
          else if (hashCode == DELETE__HASH)
          {
            return VolumeRetentionMode::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeRetentionMode>(hashCode);
          }

          return VolumeRetentionMode::NOT_SET;
        }

        Aws::String GetNameForVolumeRetentionMode(VolumeRetentionMode enumValue)
        {
          switch(enumValue)
          {
          case VolumeRetentionMode::NOT_SET:
            return {};
          case VolumeRetentionMode::RETAIN:
            return "RETAIN";
          case VolumeRetentionMode::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeRetentionModeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws

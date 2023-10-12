/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DrmSystem.h>
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
      namespace DrmSystemMapper
      {

        static constexpr uint32_t CLEAR_KEY_AES_128_HASH = ConstExprHashingUtils::HashString("CLEAR_KEY_AES_128");
        static constexpr uint32_t FAIRPLAY_HASH = ConstExprHashingUtils::HashString("FAIRPLAY");
        static constexpr uint32_t PLAYREADY_HASH = ConstExprHashingUtils::HashString("PLAYREADY");
        static constexpr uint32_t WIDEVINE_HASH = ConstExprHashingUtils::HashString("WIDEVINE");


        DrmSystem GetDrmSystemForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLEAR_KEY_AES_128_HASH)
          {
            return DrmSystem::CLEAR_KEY_AES_128;
          }
          else if (hashCode == FAIRPLAY_HASH)
          {
            return DrmSystem::FAIRPLAY;
          }
          else if (hashCode == PLAYREADY_HASH)
          {
            return DrmSystem::PLAYREADY;
          }
          else if (hashCode == WIDEVINE_HASH)
          {
            return DrmSystem::WIDEVINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DrmSystem>(hashCode);
          }

          return DrmSystem::NOT_SET;
        }

        Aws::String GetNameForDrmSystem(DrmSystem enumValue)
        {
          switch(enumValue)
          {
          case DrmSystem::NOT_SET:
            return {};
          case DrmSystem::CLEAR_KEY_AES_128:
            return "CLEAR_KEY_AES_128";
          case DrmSystem::FAIRPLAY:
            return "FAIRPLAY";
          case DrmSystem::PLAYREADY:
            return "PLAYREADY";
          case DrmSystem::WIDEVINE:
            return "WIDEVINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DrmSystemMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

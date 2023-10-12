/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ShareResourceTypeMapper
      {

        static constexpr uint32_t WORKLOAD_HASH = ConstExprHashingUtils::HashString("WORKLOAD");
        static constexpr uint32_t LENS_HASH = ConstExprHashingUtils::HashString("LENS");
        static constexpr uint32_t PROFILE_HASH = ConstExprHashingUtils::HashString("PROFILE");
        static constexpr uint32_t TEMPLATE_HASH = ConstExprHashingUtils::HashString("TEMPLATE");


        ShareResourceType GetShareResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORKLOAD_HASH)
          {
            return ShareResourceType::WORKLOAD;
          }
          else if (hashCode == LENS_HASH)
          {
            return ShareResourceType::LENS;
          }
          else if (hashCode == PROFILE_HASH)
          {
            return ShareResourceType::PROFILE;
          }
          else if (hashCode == TEMPLATE_HASH)
          {
            return ShareResourceType::TEMPLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareResourceType>(hashCode);
          }

          return ShareResourceType::NOT_SET;
        }

        Aws::String GetNameForShareResourceType(ShareResourceType enumValue)
        {
          switch(enumValue)
          {
          case ShareResourceType::NOT_SET:
            return {};
          case ShareResourceType::WORKLOAD:
            return "WORKLOAD";
          case ShareResourceType::LENS:
            return "LENS";
          case ShareResourceType::PROFILE:
            return "PROFILE";
          case ShareResourceType::TEMPLATE:
            return "TEMPLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareResourceTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws

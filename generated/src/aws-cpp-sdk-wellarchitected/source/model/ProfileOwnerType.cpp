/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileOwnerType.h>
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
      namespace ProfileOwnerTypeMapper
      {

        static constexpr uint32_t SELF_HASH = ConstExprHashingUtils::HashString("SELF");
        static constexpr uint32_t SHARED_HASH = ConstExprHashingUtils::HashString("SHARED");


        ProfileOwnerType GetProfileOwnerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_HASH)
          {
            return ProfileOwnerType::SELF;
          }
          else if (hashCode == SHARED_HASH)
          {
            return ProfileOwnerType::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProfileOwnerType>(hashCode);
          }

          return ProfileOwnerType::NOT_SET;
        }

        Aws::String GetNameForProfileOwnerType(ProfileOwnerType enumValue)
        {
          switch(enumValue)
          {
          case ProfileOwnerType::NOT_SET:
            return {};
          case ProfileOwnerType::SELF:
            return "SELF";
          case ProfileOwnerType::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileOwnerTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws

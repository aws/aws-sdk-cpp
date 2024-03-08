/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RStudioServerProUserGroup.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace RStudioServerProUserGroupMapper
      {

        static const int R_STUDIO_ADMIN_HASH = HashingUtils::HashString("R_STUDIO_ADMIN");
        static const int R_STUDIO_USER_HASH = HashingUtils::HashString("R_STUDIO_USER");


        RStudioServerProUserGroup GetRStudioServerProUserGroupForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == R_STUDIO_ADMIN_HASH)
          {
            return RStudioServerProUserGroup::R_STUDIO_ADMIN;
          }
          else if (hashCode == R_STUDIO_USER_HASH)
          {
            return RStudioServerProUserGroup::R_STUDIO_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RStudioServerProUserGroup>(hashCode);
          }

          return RStudioServerProUserGroup::NOT_SET;
        }

        Aws::String GetNameForRStudioServerProUserGroup(RStudioServerProUserGroup enumValue)
        {
          switch(enumValue)
          {
          case RStudioServerProUserGroup::NOT_SET:
            return {};
          case RStudioServerProUserGroup::R_STUDIO_ADMIN:
            return "R_STUDIO_ADMIN";
          case RStudioServerProUserGroup::R_STUDIO_USER:
            return "R_STUDIO_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RStudioServerProUserGroupMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

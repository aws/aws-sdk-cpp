/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/PostLaunchActionsDeploymentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace PostLaunchActionsDeploymentTypeMapper
      {

        static const int TEST_AND_CUTOVER_HASH = HashingUtils::HashString("TEST_AND_CUTOVER");
        static const int CUTOVER_ONLY_HASH = HashingUtils::HashString("CUTOVER_ONLY");
        static const int TEST_ONLY_HASH = HashingUtils::HashString("TEST_ONLY");


        PostLaunchActionsDeploymentType GetPostLaunchActionsDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEST_AND_CUTOVER_HASH)
          {
            return PostLaunchActionsDeploymentType::TEST_AND_CUTOVER;
          }
          else if (hashCode == CUTOVER_ONLY_HASH)
          {
            return PostLaunchActionsDeploymentType::CUTOVER_ONLY;
          }
          else if (hashCode == TEST_ONLY_HASH)
          {
            return PostLaunchActionsDeploymentType::TEST_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostLaunchActionsDeploymentType>(hashCode);
          }

          return PostLaunchActionsDeploymentType::NOT_SET;
        }

        Aws::String GetNameForPostLaunchActionsDeploymentType(PostLaunchActionsDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case PostLaunchActionsDeploymentType::TEST_AND_CUTOVER:
            return "TEST_AND_CUTOVER";
          case PostLaunchActionsDeploymentType::CUTOVER_ONLY:
            return "CUTOVER_ONLY";
          case PostLaunchActionsDeploymentType::TEST_ONLY:
            return "TEST_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PostLaunchActionsDeploymentTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws

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

        static constexpr uint32_t TEST_AND_CUTOVER_HASH = ConstExprHashingUtils::HashString("TEST_AND_CUTOVER");
        static constexpr uint32_t CUTOVER_ONLY_HASH = ConstExprHashingUtils::HashString("CUTOVER_ONLY");
        static constexpr uint32_t TEST_ONLY_HASH = ConstExprHashingUtils::HashString("TEST_ONLY");


        PostLaunchActionsDeploymentType GetPostLaunchActionsDeploymentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PostLaunchActionsDeploymentType::NOT_SET:
            return {};
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

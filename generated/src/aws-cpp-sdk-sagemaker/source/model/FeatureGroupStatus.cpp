/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureGroupStatus.h>
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
      namespace FeatureGroupStatusMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t CreateFailed_HASH = ConstExprHashingUtils::HashString("CreateFailed");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t DeleteFailed_HASH = ConstExprHashingUtils::HashString("DeleteFailed");


        FeatureGroupStatus GetFeatureGroupStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return FeatureGroupStatus::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return FeatureGroupStatus::Created;
          }
          else if (hashCode == CreateFailed_HASH)
          {
            return FeatureGroupStatus::CreateFailed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return FeatureGroupStatus::Deleting;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return FeatureGroupStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureGroupStatus>(hashCode);
          }

          return FeatureGroupStatus::NOT_SET;
        }

        Aws::String GetNameForFeatureGroupStatus(FeatureGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case FeatureGroupStatus::NOT_SET:
            return {};
          case FeatureGroupStatus::Creating:
            return "Creating";
          case FeatureGroupStatus::Created:
            return "Created";
          case FeatureGroupStatus::CreateFailed:
            return "CreateFailed";
          case FeatureGroupStatus::Deleting:
            return "Deleting";
          case FeatureGroupStatus::DeleteFailed:
            return "DeleteFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureGroupStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

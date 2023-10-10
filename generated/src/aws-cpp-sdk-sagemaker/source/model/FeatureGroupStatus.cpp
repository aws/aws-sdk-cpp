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

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");


        FeatureGroupStatus GetFeatureGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

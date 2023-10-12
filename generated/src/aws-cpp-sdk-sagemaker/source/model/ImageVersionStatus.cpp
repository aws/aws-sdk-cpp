/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageVersionStatus.h>
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
      namespace ImageVersionStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        ImageVersionStatus GetImageVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ImageVersionStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ImageVersionStatus::CREATED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ImageVersionStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ImageVersionStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ImageVersionStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageVersionStatus>(hashCode);
          }

          return ImageVersionStatus::NOT_SET;
        }

        Aws::String GetNameForImageVersionStatus(ImageVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case ImageVersionStatus::NOT_SET:
            return {};
          case ImageVersionStatus::CREATING:
            return "CREATING";
          case ImageVersionStatus::CREATED:
            return "CREATED";
          case ImageVersionStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ImageVersionStatus::DELETING:
            return "DELETING";
          case ImageVersionStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageVersionStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

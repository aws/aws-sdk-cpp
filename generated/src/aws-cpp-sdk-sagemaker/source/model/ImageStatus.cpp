/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageStatus.h>
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
      namespace ImageStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        ImageStatus GetImageStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ImageStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ImageStatus::CREATED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ImageStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ImageStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ImageStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ImageStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ImageStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageStatus>(hashCode);
          }

          return ImageStatus::NOT_SET;
        }

        Aws::String GetNameForImageStatus(ImageStatus enumValue)
        {
          switch(enumValue)
          {
          case ImageStatus::NOT_SET:
            return {};
          case ImageStatus::CREATING:
            return "CREATING";
          case ImageStatus::CREATED:
            return "CREATED";
          case ImageStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ImageStatus::UPDATING:
            return "UPDATING";
          case ImageStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ImageStatus::DELETING:
            return "DELETING";
          case ImageStatus::DELETE_FAILED:
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

      } // namespace ImageStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

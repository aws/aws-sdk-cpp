/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppStatus.h>
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
      namespace AppStatusMapper
      {

        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");


        AppStatus GetAppStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deleted_HASH)
          {
            return AppStatus::Deleted;
          }
          else if (hashCode == Deleting_HASH)
          {
            return AppStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return AppStatus::Failed;
          }
          else if (hashCode == InService_HASH)
          {
            return AppStatus::InService;
          }
          else if (hashCode == Pending_HASH)
          {
            return AppStatus::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppStatus>(hashCode);
          }

          return AppStatus::NOT_SET;
        }

        Aws::String GetNameForAppStatus(AppStatus enumValue)
        {
          switch(enumValue)
          {
          case AppStatus::NOT_SET:
            return {};
          case AppStatus::Deleted:
            return "Deleted";
          case AppStatus::Deleting:
            return "Deleting";
          case AppStatus::Failed:
            return "Failed";
          case AppStatus::InService:
            return "InService";
          case AppStatus::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

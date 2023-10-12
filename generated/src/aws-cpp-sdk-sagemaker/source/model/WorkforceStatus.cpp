/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WorkforceStatus.h>
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
      namespace WorkforceStatusMapper
      {

        static constexpr uint32_t Initializing_HASH = ConstExprHashingUtils::HashString("Initializing");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");


        WorkforceStatus GetWorkforceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return WorkforceStatus::Initializing;
          }
          else if (hashCode == Updating_HASH)
          {
            return WorkforceStatus::Updating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return WorkforceStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return WorkforceStatus::Failed;
          }
          else if (hashCode == Active_HASH)
          {
            return WorkforceStatus::Active;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkforceStatus>(hashCode);
          }

          return WorkforceStatus::NOT_SET;
        }

        Aws::String GetNameForWorkforceStatus(WorkforceStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkforceStatus::NOT_SET:
            return {};
          case WorkforceStatus::Initializing:
            return "Initializing";
          case WorkforceStatus::Updating:
            return "Updating";
          case WorkforceStatus::Deleting:
            return "Deleting";
          case WorkforceStatus::Failed:
            return "Failed";
          case WorkforceStatus::Active:
            return "Active";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkforceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

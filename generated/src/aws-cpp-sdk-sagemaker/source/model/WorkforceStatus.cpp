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

        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Active_HASH = HashingUtils::HashString("Active");


        WorkforceStatus GetWorkforceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

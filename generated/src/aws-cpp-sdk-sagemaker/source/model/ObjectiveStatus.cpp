/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ObjectiveStatus.h>
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
      namespace ObjectiveStatusMapper
      {

        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ObjectiveStatus GetObjectiveStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Succeeded_HASH)
          {
            return ObjectiveStatus::Succeeded;
          }
          else if (hashCode == Pending_HASH)
          {
            return ObjectiveStatus::Pending;
          }
          else if (hashCode == Failed_HASH)
          {
            return ObjectiveStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectiveStatus>(hashCode);
          }

          return ObjectiveStatus::NOT_SET;
        }

        Aws::String GetNameForObjectiveStatus(ObjectiveStatus enumValue)
        {
          switch(enumValue)
          {
          case ObjectiveStatus::Succeeded:
            return "Succeeded";
          case ObjectiveStatus::Pending:
            return "Pending";
          case ObjectiveStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectiveStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

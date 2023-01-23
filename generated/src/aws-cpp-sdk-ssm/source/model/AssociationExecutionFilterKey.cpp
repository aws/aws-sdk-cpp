/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationExecutionFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AssociationExecutionFilterKeyMapper
      {

        static const int ExecutionId_HASH = HashingUtils::HashString("ExecutionId");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int CreatedTime_HASH = HashingUtils::HashString("CreatedTime");


        AssociationExecutionFilterKey GetAssociationExecutionFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExecutionId_HASH)
          {
            return AssociationExecutionFilterKey::ExecutionId;
          }
          else if (hashCode == Status_HASH)
          {
            return AssociationExecutionFilterKey::Status;
          }
          else if (hashCode == CreatedTime_HASH)
          {
            return AssociationExecutionFilterKey::CreatedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationExecutionFilterKey>(hashCode);
          }

          return AssociationExecutionFilterKey::NOT_SET;
        }

        Aws::String GetNameForAssociationExecutionFilterKey(AssociationExecutionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AssociationExecutionFilterKey::ExecutionId:
            return "ExecutionId";
          case AssociationExecutionFilterKey::Status:
            return "Status";
          case AssociationExecutionFilterKey::CreatedTime:
            return "CreatedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationExecutionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

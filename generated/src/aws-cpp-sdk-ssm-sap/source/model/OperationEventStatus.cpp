/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/OperationEventStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace OperationEventStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        OperationEventStatus GetOperationEventStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return OperationEventStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return OperationEventStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OperationEventStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationEventStatus>(hashCode);
          }

          return OperationEventStatus::NOT_SET;
        }

        Aws::String GetNameForOperationEventStatus(OperationEventStatus enumValue)
        {
          switch(enumValue)
          {
          case OperationEventStatus::NOT_SET:
            return {};
          case OperationEventStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OperationEventStatus::COMPLETED:
            return "COMPLETED";
          case OperationEventStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationEventStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

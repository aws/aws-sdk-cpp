/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/UpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace UpdateStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        UpdateStatus GetUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return UpdateStatus::SUCCESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return UpdateStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return UpdateStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateStatus>(hashCode);
          }

          return UpdateStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateStatus(UpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateStatus::SUCCESS:
            return "SUCCESS";
          case UpdateStatus::PENDING:
            return "PENDING";
          case UpdateStatus::FAILED:
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

      } // namespace UpdateStatusMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws

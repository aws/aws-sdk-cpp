/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace UpdateStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        UpdateStatus GetUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return UpdateStatus::READY;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return UpdateStatus::UPDATING;
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
          case UpdateStatus::NOT_SET:
            return {};
          case UpdateStatus::READY:
            return "READY";
          case UpdateStatus::UPDATING:
            return "UPDATING";
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
  } // namespace SecurityHub
} // namespace Aws

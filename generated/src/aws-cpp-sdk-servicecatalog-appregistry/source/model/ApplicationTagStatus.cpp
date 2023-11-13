/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ApplicationTagStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRegistry
  {
    namespace Model
    {
      namespace ApplicationTagStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");


        ApplicationTagStatus GetApplicationTagStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ApplicationTagStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ApplicationTagStatus::SUCCESS;
          }
          else if (hashCode == FAILURE_HASH)
          {
            return ApplicationTagStatus::FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationTagStatus>(hashCode);
          }

          return ApplicationTagStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationTagStatus(ApplicationTagStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationTagStatus::NOT_SET:
            return {};
          case ApplicationTagStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ApplicationTagStatus::SUCCESS:
            return "SUCCESS";
          case ApplicationTagStatus::FAILURE:
            return "FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationTagStatusMapper
    } // namespace Model
  } // namespace AppRegistry
} // namespace Aws

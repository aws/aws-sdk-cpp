/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/StatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMQuickSetup
  {
    namespace Model
    {
      namespace StatusTypeMapper
      {

        static const int Deployment_HASH = HashingUtils::HashString("Deployment");
        static const int AsyncExecutions_HASH = HashingUtils::HashString("AsyncExecutions");


        StatusType GetStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deployment_HASH)
          {
            return StatusType::Deployment;
          }
          else if (hashCode == AsyncExecutions_HASH)
          {
            return StatusType::AsyncExecutions;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusType>(hashCode);
          }

          return StatusType::NOT_SET;
        }

        Aws::String GetNameForStatusType(StatusType enumValue)
        {
          switch(enumValue)
          {
          case StatusType::NOT_SET:
            return {};
          case StatusType::Deployment:
            return "Deployment";
          case StatusType::AsyncExecutions:
            return "AsyncExecutions";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusTypeMapper
    } // namespace Model
  } // namespace SSMQuickSetup
} // namespace Aws

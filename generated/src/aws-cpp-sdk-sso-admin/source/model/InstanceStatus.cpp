/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/InstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace InstanceStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        InstanceStatus GetInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return InstanceStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return InstanceStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return InstanceStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStatus>(hashCode);
          }

          return InstanceStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceStatus(InstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceStatus::NOT_SET:
            return {};
          case InstanceStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case InstanceStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case InstanceStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStatusMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetGroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace TargetGroupStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        TargetGroupStatus GetTargetGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return TargetGroupStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TargetGroupStatus::ACTIVE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return TargetGroupStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return TargetGroupStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return TargetGroupStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetGroupStatus>(hashCode);
          }

          return TargetGroupStatus::NOT_SET;
        }

        Aws::String GetNameForTargetGroupStatus(TargetGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetGroupStatus::NOT_SET:
            return {};
          case TargetGroupStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case TargetGroupStatus::ACTIVE:
            return "ACTIVE";
          case TargetGroupStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case TargetGroupStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case TargetGroupStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetGroupStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws

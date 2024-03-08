/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetStatus.h>
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
      namespace TargetStatusMapper
      {

        static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int INITIAL_HASH = HashingUtils::HashString("INITIAL");
        static const int UNUSED_HASH = HashingUtils::HashString("UNUSED");


        TargetStatus GetTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAINING_HASH)
          {
            return TargetStatus::DRAINING;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return TargetStatus::UNAVAILABLE;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return TargetStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return TargetStatus::UNHEALTHY;
          }
          else if (hashCode == INITIAL_HASH)
          {
            return TargetStatus::INITIAL;
          }
          else if (hashCode == UNUSED_HASH)
          {
            return TargetStatus::UNUSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStatus>(hashCode);
          }

          return TargetStatus::NOT_SET;
        }

        Aws::String GetNameForTargetStatus(TargetStatus enumValue)
        {
          switch(enumValue)
          {
          case TargetStatus::NOT_SET:
            return {};
          case TargetStatus::DRAINING:
            return "DRAINING";
          case TargetStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case TargetStatus::HEALTHY:
            return "HEALTHY";
          case TargetStatus::UNHEALTHY:
            return "UNHEALTHY";
          case TargetStatus::INITIAL:
            return "INITIAL";
          case TargetStatus::UNUSED:
            return "UNUSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws

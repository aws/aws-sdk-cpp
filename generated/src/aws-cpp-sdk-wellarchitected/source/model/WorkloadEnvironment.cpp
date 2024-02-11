/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadEnvironment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace WorkloadEnvironmentMapper
      {

        static const int PRODUCTION_HASH = HashingUtils::HashString("PRODUCTION");
        static const int PREPRODUCTION_HASH = HashingUtils::HashString("PREPRODUCTION");


        WorkloadEnvironment GetWorkloadEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCTION_HASH)
          {
            return WorkloadEnvironment::PRODUCTION;
          }
          else if (hashCode == PREPRODUCTION_HASH)
          {
            return WorkloadEnvironment::PREPRODUCTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkloadEnvironment>(hashCode);
          }

          return WorkloadEnvironment::NOT_SET;
        }

        Aws::String GetNameForWorkloadEnvironment(WorkloadEnvironment enumValue)
        {
          switch(enumValue)
          {
          case WorkloadEnvironment::NOT_SET:
            return {};
          case WorkloadEnvironment::PRODUCTION:
            return "PRODUCTION";
          case WorkloadEnvironment::PREPRODUCTION:
            return "PREPRODUCTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkloadEnvironmentMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws

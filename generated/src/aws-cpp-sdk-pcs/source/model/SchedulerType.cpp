/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/SchedulerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PCS
  {
    namespace Model
    {
      namespace SchedulerTypeMapper
      {

        static const int SLURM_HASH = HashingUtils::HashString("SLURM");


        SchedulerType GetSchedulerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SLURM_HASH)
          {
            return SchedulerType::SLURM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchedulerType>(hashCode);
          }

          return SchedulerType::NOT_SET;
        }

        Aws::String GetNameForSchedulerType(SchedulerType enumValue)
        {
          switch(enumValue)
          {
          case SchedulerType::NOT_SET:
            return {};
          case SchedulerType::SLURM:
            return "SLURM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchedulerTypeMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws

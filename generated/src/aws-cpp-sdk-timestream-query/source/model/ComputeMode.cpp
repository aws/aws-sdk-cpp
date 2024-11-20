/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ComputeMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace ComputeModeMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");


        ComputeMode GetComputeModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return ComputeMode::ON_DEMAND;
          }
          else if (hashCode == PROVISIONED_HASH)
          {
            return ComputeMode::PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeMode>(hashCode);
          }

          return ComputeMode::NOT_SET;
        }

        Aws::String GetNameForComputeMode(ComputeMode enumValue)
        {
          switch(enumValue)
          {
          case ComputeMode::NOT_SET:
            return {};
          case ComputeMode::ON_DEMAND:
            return "ON_DEMAND";
          case ComputeMode::PROVISIONED:
            return "PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeModeMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/BatchJobDependencyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace BatchJobDependencyTypeMapper
      {

        static const int N_TO_N_HASH = HashingUtils::HashString("N_TO_N");
        static const int SEQUENTIAL_HASH = HashingUtils::HashString("SEQUENTIAL");


        BatchJobDependencyType GetBatchJobDependencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == N_TO_N_HASH)
          {
            return BatchJobDependencyType::N_TO_N;
          }
          else if (hashCode == SEQUENTIAL_HASH)
          {
            return BatchJobDependencyType::SEQUENTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchJobDependencyType>(hashCode);
          }

          return BatchJobDependencyType::NOT_SET;
        }

        Aws::String GetNameForBatchJobDependencyType(BatchJobDependencyType enumValue)
        {
          switch(enumValue)
          {
          case BatchJobDependencyType::N_TO_N:
            return "N_TO_N";
          case BatchJobDependencyType::SEQUENTIAL:
            return "SEQUENTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchJobDependencyTypeMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingS3DataDistributionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ProcessingS3DataDistributionTypeMapper
      {

        static const int FullyReplicated_HASH = HashingUtils::HashString("FullyReplicated");
        static const int ShardedByS3Key_HASH = HashingUtils::HashString("ShardedByS3Key");


        ProcessingS3DataDistributionType GetProcessingS3DataDistributionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullyReplicated_HASH)
          {
            return ProcessingS3DataDistributionType::FullyReplicated;
          }
          else if (hashCode == ShardedByS3Key_HASH)
          {
            return ProcessingS3DataDistributionType::ShardedByS3Key;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingS3DataDistributionType>(hashCode);
          }

          return ProcessingS3DataDistributionType::NOT_SET;
        }

        Aws::String GetNameForProcessingS3DataDistributionType(ProcessingS3DataDistributionType enumValue)
        {
          switch(enumValue)
          {
          case ProcessingS3DataDistributionType::FullyReplicated:
            return "FullyReplicated";
          case ProcessingS3DataDistributionType::ShardedByS3Key:
            return "ShardedByS3Key";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingS3DataDistributionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

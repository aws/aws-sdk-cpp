/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SageMakerResourceName.h>
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
      namespace SageMakerResourceNameMapper
      {

        static const int training_job_HASH = HashingUtils::HashString("training-job");
        static const int hyperpod_cluster_HASH = HashingUtils::HashString("hyperpod-cluster");


        SageMakerResourceName GetSageMakerResourceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == training_job_HASH)
          {
            return SageMakerResourceName::training_job;
          }
          else if (hashCode == hyperpod_cluster_HASH)
          {
            return SageMakerResourceName::hyperpod_cluster;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SageMakerResourceName>(hashCode);
          }

          return SageMakerResourceName::NOT_SET;
        }

        Aws::String GetNameForSageMakerResourceName(SageMakerResourceName enumValue)
        {
          switch(enumValue)
          {
          case SageMakerResourceName::NOT_SET:
            return {};
          case SageMakerResourceName::training_job:
            return "training-job";
          case SageMakerResourceName::hyperpod_cluster:
            return "hyperpod-cluster";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SageMakerResourceNameMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

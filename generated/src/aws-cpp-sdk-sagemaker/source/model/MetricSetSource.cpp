/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MetricSetSource.h>
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
      namespace MetricSetSourceMapper
      {

        static constexpr uint32_t Train_HASH = ConstExprHashingUtils::HashString("Train");
        static constexpr uint32_t Validation_HASH = ConstExprHashingUtils::HashString("Validation");
        static constexpr uint32_t Test_HASH = ConstExprHashingUtils::HashString("Test");


        MetricSetSource GetMetricSetSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Train_HASH)
          {
            return MetricSetSource::Train;
          }
          else if (hashCode == Validation_HASH)
          {
            return MetricSetSource::Validation;
          }
          else if (hashCode == Test_HASH)
          {
            return MetricSetSource::Test;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricSetSource>(hashCode);
          }

          return MetricSetSource::NOT_SET;
        }

        Aws::String GetNameForMetricSetSource(MetricSetSource enumValue)
        {
          switch(enumValue)
          {
          case MetricSetSource::NOT_SET:
            return {};
          case MetricSetSource::Train:
            return "Train";
          case MetricSetSource::Validation:
            return "Validation";
          case MetricSetSource::Test:
            return "Test";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricSetSourceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

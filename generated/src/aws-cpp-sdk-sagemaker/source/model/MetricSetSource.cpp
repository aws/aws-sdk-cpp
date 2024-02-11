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

        static const int Train_HASH = HashingUtils::HashString("Train");
        static const int Validation_HASH = HashingUtils::HashString("Validation");
        static const int Test_HASH = HashingUtils::HashString("Test");


        MetricSetSource GetMetricSetSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

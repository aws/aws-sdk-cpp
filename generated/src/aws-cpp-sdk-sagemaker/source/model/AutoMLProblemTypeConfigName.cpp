/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLProblemTypeConfigName.h>
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
      namespace AutoMLProblemTypeConfigNameMapper
      {

        static constexpr uint32_t ImageClassification_HASH = ConstExprHashingUtils::HashString("ImageClassification");
        static constexpr uint32_t TextClassification_HASH = ConstExprHashingUtils::HashString("TextClassification");
        static constexpr uint32_t Tabular_HASH = ConstExprHashingUtils::HashString("Tabular");
        static constexpr uint32_t TimeSeriesForecasting_HASH = ConstExprHashingUtils::HashString("TimeSeriesForecasting");


        AutoMLProblemTypeConfigName GetAutoMLProblemTypeConfigNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ImageClassification_HASH)
          {
            return AutoMLProblemTypeConfigName::ImageClassification;
          }
          else if (hashCode == TextClassification_HASH)
          {
            return AutoMLProblemTypeConfigName::TextClassification;
          }
          else if (hashCode == Tabular_HASH)
          {
            return AutoMLProblemTypeConfigName::Tabular;
          }
          else if (hashCode == TimeSeriesForecasting_HASH)
          {
            return AutoMLProblemTypeConfigName::TimeSeriesForecasting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLProblemTypeConfigName>(hashCode);
          }

          return AutoMLProblemTypeConfigName::NOT_SET;
        }

        Aws::String GetNameForAutoMLProblemTypeConfigName(AutoMLProblemTypeConfigName enumValue)
        {
          switch(enumValue)
          {
          case AutoMLProblemTypeConfigName::NOT_SET:
            return {};
          case AutoMLProblemTypeConfigName::ImageClassification:
            return "ImageClassification";
          case AutoMLProblemTypeConfigName::TextClassification:
            return "TextClassification";
          case AutoMLProblemTypeConfigName::Tabular:
            return "Tabular";
          case AutoMLProblemTypeConfigName::TimeSeriesForecasting:
            return "TimeSeriesForecasting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLProblemTypeConfigNameMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

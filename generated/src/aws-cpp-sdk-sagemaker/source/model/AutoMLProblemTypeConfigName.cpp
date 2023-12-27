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

        static const int ImageClassification_HASH = HashingUtils::HashString("ImageClassification");
        static const int TextClassification_HASH = HashingUtils::HashString("TextClassification");
        static const int TimeSeriesForecasting_HASH = HashingUtils::HashString("TimeSeriesForecasting");
        static const int Tabular_HASH = HashingUtils::HashString("Tabular");
        static const int TextGeneration_HASH = HashingUtils::HashString("TextGeneration");


        AutoMLProblemTypeConfigName GetAutoMLProblemTypeConfigNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ImageClassification_HASH)
          {
            return AutoMLProblemTypeConfigName::ImageClassification;
          }
          else if (hashCode == TextClassification_HASH)
          {
            return AutoMLProblemTypeConfigName::TextClassification;
          }
          else if (hashCode == TimeSeriesForecasting_HASH)
          {
            return AutoMLProblemTypeConfigName::TimeSeriesForecasting;
          }
          else if (hashCode == Tabular_HASH)
          {
            return AutoMLProblemTypeConfigName::Tabular;
          }
          else if (hashCode == TextGeneration_HASH)
          {
            return AutoMLProblemTypeConfigName::TextGeneration;
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
          case AutoMLProblemTypeConfigName::TimeSeriesForecasting:
            return "TimeSeriesForecasting";
          case AutoMLProblemTypeConfigName::Tabular:
            return "Tabular";
          case AutoMLProblemTypeConfigName::TextGeneration:
            return "TextGeneration";
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

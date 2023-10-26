/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringProblemType.h>
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
      namespace MonitoringProblemTypeMapper
      {

        static const int BinaryClassification_HASH = HashingUtils::HashString("BinaryClassification");
        static const int MulticlassClassification_HASH = HashingUtils::HashString("MulticlassClassification");
        static const int Regression_HASH = HashingUtils::HashString("Regression");


        MonitoringProblemType GetMonitoringProblemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BinaryClassification_HASH)
          {
            return MonitoringProblemType::BinaryClassification;
          }
          else if (hashCode == MulticlassClassification_HASH)
          {
            return MonitoringProblemType::MulticlassClassification;
          }
          else if (hashCode == Regression_HASH)
          {
            return MonitoringProblemType::Regression;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringProblemType>(hashCode);
          }

          return MonitoringProblemType::NOT_SET;
        }

        Aws::String GetNameForMonitoringProblemType(MonitoringProblemType enumValue)
        {
          switch(enumValue)
          {
          case MonitoringProblemType::NOT_SET:
            return {};
          case MonitoringProblemType::BinaryClassification:
            return "BinaryClassification";
          case MonitoringProblemType::MulticlassClassification:
            return "MulticlassClassification";
          case MonitoringProblemType::Regression:
            return "Regression";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringProblemTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

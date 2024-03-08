/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringType.h>
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
      namespace MonitoringTypeMapper
      {

        static const int DataQuality_HASH = HashingUtils::HashString("DataQuality");
        static const int ModelQuality_HASH = HashingUtils::HashString("ModelQuality");
        static const int ModelBias_HASH = HashingUtils::HashString("ModelBias");
        static const int ModelExplainability_HASH = HashingUtils::HashString("ModelExplainability");


        MonitoringType GetMonitoringTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DataQuality_HASH)
          {
            return MonitoringType::DataQuality;
          }
          else if (hashCode == ModelQuality_HASH)
          {
            return MonitoringType::ModelQuality;
          }
          else if (hashCode == ModelBias_HASH)
          {
            return MonitoringType::ModelBias;
          }
          else if (hashCode == ModelExplainability_HASH)
          {
            return MonitoringType::ModelExplainability;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringType>(hashCode);
          }

          return MonitoringType::NOT_SET;
        }

        Aws::String GetNameForMonitoringType(MonitoringType enumValue)
        {
          switch(enumValue)
          {
          case MonitoringType::NOT_SET:
            return {};
          case MonitoringType::DataQuality:
            return "DataQuality";
          case MonitoringType::ModelQuality:
            return "ModelQuality";
          case MonitoringType::ModelBias:
            return "ModelBias";
          case MonitoringType::ModelExplainability:
            return "ModelExplainability";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

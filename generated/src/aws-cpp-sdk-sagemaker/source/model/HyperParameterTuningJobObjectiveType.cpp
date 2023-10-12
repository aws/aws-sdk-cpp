/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobObjectiveType.h>
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
      namespace HyperParameterTuningJobObjectiveTypeMapper
      {

        static constexpr uint32_t Maximize_HASH = ConstExprHashingUtils::HashString("Maximize");
        static constexpr uint32_t Minimize_HASH = ConstExprHashingUtils::HashString("Minimize");


        HyperParameterTuningJobObjectiveType GetHyperParameterTuningJobObjectiveTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximize_HASH)
          {
            return HyperParameterTuningJobObjectiveType::Maximize;
          }
          else if (hashCode == Minimize_HASH)
          {
            return HyperParameterTuningJobObjectiveType::Minimize;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobObjectiveType>(hashCode);
          }

          return HyperParameterTuningJobObjectiveType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobObjectiveType(HyperParameterTuningJobObjectiveType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobObjectiveType::NOT_SET:
            return {};
          case HyperParameterTuningJobObjectiveType::Maximize:
            return "Maximize";
          case HyperParameterTuningJobObjectiveType::Minimize:
            return "Minimize";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningJobObjectiveTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

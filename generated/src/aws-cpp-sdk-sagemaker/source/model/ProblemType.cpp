/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProblemType.h>
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
      namespace ProblemTypeMapper
      {

        static constexpr uint32_t BinaryClassification_HASH = ConstExprHashingUtils::HashString("BinaryClassification");
        static constexpr uint32_t MulticlassClassification_HASH = ConstExprHashingUtils::HashString("MulticlassClassification");
        static constexpr uint32_t Regression_HASH = ConstExprHashingUtils::HashString("Regression");


        ProblemType GetProblemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BinaryClassification_HASH)
          {
            return ProblemType::BinaryClassification;
          }
          else if (hashCode == MulticlassClassification_HASH)
          {
            return ProblemType::MulticlassClassification;
          }
          else if (hashCode == Regression_HASH)
          {
            return ProblemType::Regression;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProblemType>(hashCode);
          }

          return ProblemType::NOT_SET;
        }

        Aws::String GetNameForProblemType(ProblemType enumValue)
        {
          switch(enumValue)
          {
          case ProblemType::NOT_SET:
            return {};
          case ProblemType::BinaryClassification:
            return "BinaryClassification";
          case ProblemType::MulticlassClassification:
            return "MulticlassClassification";
          case ProblemType::Regression:
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

      } // namespace ProblemTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

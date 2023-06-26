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

        static const int BinaryClassification_HASH = HashingUtils::HashString("BinaryClassification");
        static const int MulticlassClassification_HASH = HashingUtils::HashString("MulticlassClassification");
        static const int Regression_HASH = HashingUtils::HashString("Regression");


        ProblemType GetProblemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/EvaluationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace EvaluationStateMapper
      {

        static const int PARTIAL_DATA_HASH = HashingUtils::HashString("PARTIAL_DATA");


        EvaluationState GetEvaluationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARTIAL_DATA_HASH)
          {
            return EvaluationState::PARTIAL_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationState>(hashCode);
          }

          return EvaluationState::NOT_SET;
        }

        Aws::String GetNameForEvaluationState(EvaluationState enumValue)
        {
          switch(enumValue)
          {
          case EvaluationState::PARTIAL_DATA:
            return "PARTIAL_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationStateMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws

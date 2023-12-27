/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LastUpdateStatusValue.h>
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
      namespace LastUpdateStatusValueMapper
      {

        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");


        LastUpdateStatusValue GetLastUpdateStatusValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Successful_HASH)
          {
            return LastUpdateStatusValue::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return LastUpdateStatusValue::Failed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return LastUpdateStatusValue::InProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastUpdateStatusValue>(hashCode);
          }

          return LastUpdateStatusValue::NOT_SET;
        }

        Aws::String GetNameForLastUpdateStatusValue(LastUpdateStatusValue enumValue)
        {
          switch(enumValue)
          {
          case LastUpdateStatusValue::NOT_SET:
            return {};
          case LastUpdateStatusValue::Successful:
            return "Successful";
          case LastUpdateStatusValue::Failed:
            return "Failed";
          case LastUpdateStatusValue::InProgress:
            return "InProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastUpdateStatusValueMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

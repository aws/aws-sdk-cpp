/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AnomalyDetectorStateValue.h>
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
      namespace AnomalyDetectorStateValueMapper
      {

        static const int PENDING_TRAINING_HASH = HashingUtils::HashString("PENDING_TRAINING");
        static const int TRAINED_INSUFFICIENT_DATA_HASH = HashingUtils::HashString("TRAINED_INSUFFICIENT_DATA");
        static const int TRAINED_HASH = HashingUtils::HashString("TRAINED");


        AnomalyDetectorStateValue GetAnomalyDetectorStateValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_TRAINING_HASH)
          {
            return AnomalyDetectorStateValue::PENDING_TRAINING;
          }
          else if (hashCode == TRAINED_INSUFFICIENT_DATA_HASH)
          {
            return AnomalyDetectorStateValue::TRAINED_INSUFFICIENT_DATA;
          }
          else if (hashCode == TRAINED_HASH)
          {
            return AnomalyDetectorStateValue::TRAINED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyDetectorStateValue>(hashCode);
          }

          return AnomalyDetectorStateValue::NOT_SET;
        }

        Aws::String GetNameForAnomalyDetectorStateValue(AnomalyDetectorStateValue enumValue)
        {
          switch(enumValue)
          {
          case AnomalyDetectorStateValue::PENDING_TRAINING:
            return "PENDING_TRAINING";
          case AnomalyDetectorStateValue::TRAINED_INSUFFICIENT_DATA:
            return "TRAINED_INSUFFICIENT_DATA";
          case AnomalyDetectorStateValue::TRAINED:
            return "TRAINED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyDetectorStateValueMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws

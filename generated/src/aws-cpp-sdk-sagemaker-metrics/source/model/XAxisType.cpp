/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/XAxisType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerMetrics
  {
    namespace Model
    {
      namespace XAxisTypeMapper
      {

        static const int IterationNumber_HASH = HashingUtils::HashString("IterationNumber");
        static const int Timestamp_HASH = HashingUtils::HashString("Timestamp");


        XAxisType GetXAxisTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IterationNumber_HASH)
          {
            return XAxisType::IterationNumber;
          }
          else if (hashCode == Timestamp_HASH)
          {
            return XAxisType::Timestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XAxisType>(hashCode);
          }

          return XAxisType::NOT_SET;
        }

        Aws::String GetNameForXAxisType(XAxisType enumValue)
        {
          switch(enumValue)
          {
          case XAxisType::NOT_SET:
            return {};
          case XAxisType::IterationNumber:
            return "IterationNumber";
          case XAxisType::Timestamp:
            return "Timestamp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XAxisTypeMapper
    } // namespace Model
  } // namespace SageMakerMetrics
} // namespace Aws

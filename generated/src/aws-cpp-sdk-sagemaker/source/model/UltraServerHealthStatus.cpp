/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UltraServerHealthStatus.h>
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
      namespace UltraServerHealthStatusMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int Impaired_HASH = HashingUtils::HashString("Impaired");
        static const int Insufficient_Data_HASH = HashingUtils::HashString("Insufficient-Data");


        UltraServerHealthStatus GetUltraServerHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return UltraServerHealthStatus::OK;
          }
          else if (hashCode == Impaired_HASH)
          {
            return UltraServerHealthStatus::Impaired;
          }
          else if (hashCode == Insufficient_Data_HASH)
          {
            return UltraServerHealthStatus::Insufficient_Data;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UltraServerHealthStatus>(hashCode);
          }

          return UltraServerHealthStatus::NOT_SET;
        }

        Aws::String GetNameForUltraServerHealthStatus(UltraServerHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case UltraServerHealthStatus::NOT_SET:
            return {};
          case UltraServerHealthStatus::OK:
            return "OK";
          case UltraServerHealthStatus::Impaired:
            return "Impaired";
          case UltraServerHealthStatus::Insufficient_Data:
            return "Insufficient-Data";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UltraServerHealthStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

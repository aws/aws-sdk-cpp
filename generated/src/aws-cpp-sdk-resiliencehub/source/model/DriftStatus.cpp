/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DriftStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace DriftStatusMapper
      {

        static constexpr uint32_t NotChecked_HASH = ConstExprHashingUtils::HashString("NotChecked");
        static constexpr uint32_t NotDetected_HASH = ConstExprHashingUtils::HashString("NotDetected");
        static constexpr uint32_t Detected_HASH = ConstExprHashingUtils::HashString("Detected");


        DriftStatus GetDriftStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotChecked_HASH)
          {
            return DriftStatus::NotChecked;
          }
          else if (hashCode == NotDetected_HASH)
          {
            return DriftStatus::NotDetected;
          }
          else if (hashCode == Detected_HASH)
          {
            return DriftStatus::Detected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DriftStatus>(hashCode);
          }

          return DriftStatus::NOT_SET;
        }

        Aws::String GetNameForDriftStatus(DriftStatus enumValue)
        {
          switch(enumValue)
          {
          case DriftStatus::NOT_SET:
            return {};
          case DriftStatus::NotChecked:
            return "NotChecked";
          case DriftStatus::NotDetected:
            return "NotDetected";
          case DriftStatus::Detected:
            return "Detected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DriftStatusMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws

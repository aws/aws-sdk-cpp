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

        static const int NotChecked_HASH = HashingUtils::HashString("NotChecked");
        static const int NotDetected_HASH = HashingUtils::HashString("NotDetected");
        static const int Detected_HASH = HashingUtils::HashString("Detected");


        DriftStatus GetDriftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

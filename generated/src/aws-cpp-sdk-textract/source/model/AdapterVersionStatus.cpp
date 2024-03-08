/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AdapterVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace AdapterVersionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int AT_RISK_HASH = HashingUtils::HashString("AT_RISK");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
        static const int CREATION_ERROR_HASH = HashingUtils::HashString("CREATION_ERROR");
        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");


        AdapterVersionStatus GetAdapterVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AdapterVersionStatus::ACTIVE;
          }
          else if (hashCode == AT_RISK_HASH)
          {
            return AdapterVersionStatus::AT_RISK;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return AdapterVersionStatus::DEPRECATED;
          }
          else if (hashCode == CREATION_ERROR_HASH)
          {
            return AdapterVersionStatus::CREATION_ERROR;
          }
          else if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return AdapterVersionStatus::CREATION_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdapterVersionStatus>(hashCode);
          }

          return AdapterVersionStatus::NOT_SET;
        }

        Aws::String GetNameForAdapterVersionStatus(AdapterVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case AdapterVersionStatus::NOT_SET:
            return {};
          case AdapterVersionStatus::ACTIVE:
            return "ACTIVE";
          case AdapterVersionStatus::AT_RISK:
            return "AT_RISK";
          case AdapterVersionStatus::DEPRECATED:
            return "DEPRECATED";
          case AdapterVersionStatus::CREATION_ERROR:
            return "CREATION_ERROR";
          case AdapterVersionStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdapterVersionStatusMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws

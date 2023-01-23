/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/StatusValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace StatusValuesMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        StatusValues GetStatusValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return StatusValues::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StatusValues::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return StatusValues::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusValues>(hashCode);
          }

          return StatusValues::NOT_SET;
        }

        Aws::String GetNameForStatusValues(StatusValues enumValue)
        {
          switch(enumValue)
          {
          case StatusValues::IN_PROGRESS:
            return "IN_PROGRESS";
          case StatusValues::FAILED:
            return "FAILED";
          case StatusValues::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusValuesMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws

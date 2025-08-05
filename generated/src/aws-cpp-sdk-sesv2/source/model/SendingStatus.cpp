/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SendingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace SendingStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int REINSTATED_HASH = HashingUtils::HashString("REINSTATED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        SendingStatus GetSendingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return SendingStatus::ENABLED;
          }
          else if (hashCode == REINSTATED_HASH)
          {
            return SendingStatus::REINSTATED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return SendingStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SendingStatus>(hashCode);
          }

          return SendingStatus::NOT_SET;
        }

        Aws::String GetNameForSendingStatus(SendingStatus enumValue)
        {
          switch(enumValue)
          {
          case SendingStatus::NOT_SET:
            return {};
          case SendingStatus::ENABLED:
            return "ENABLED";
          case SendingStatus::REINSTATED:
            return "REINSTATED";
          case SendingStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SendingStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

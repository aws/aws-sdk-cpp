/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/BehaviorOnMxFailure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace BehaviorOnMxFailureMapper
      {

        static const int USE_DEFAULT_VALUE_HASH = HashingUtils::HashString("USE_DEFAULT_VALUE");
        static const int REJECT_MESSAGE_HASH = HashingUtils::HashString("REJECT_MESSAGE");


        BehaviorOnMxFailure GetBehaviorOnMxFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_DEFAULT_VALUE_HASH)
          {
            return BehaviorOnMxFailure::USE_DEFAULT_VALUE;
          }
          else if (hashCode == REJECT_MESSAGE_HASH)
          {
            return BehaviorOnMxFailure::REJECT_MESSAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorOnMxFailure>(hashCode);
          }

          return BehaviorOnMxFailure::NOT_SET;
        }

        Aws::String GetNameForBehaviorOnMxFailure(BehaviorOnMxFailure enumValue)
        {
          switch(enumValue)
          {
          case BehaviorOnMxFailure::USE_DEFAULT_VALUE:
            return "USE_DEFAULT_VALUE";
          case BehaviorOnMxFailure::REJECT_MESSAGE:
            return "REJECT_MESSAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BehaviorOnMxFailureMapper
    } // namespace Model
  } // namespace PinpointEmail
} // namespace Aws

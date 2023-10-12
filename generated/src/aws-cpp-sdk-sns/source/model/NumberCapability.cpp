/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/NumberCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SNS
  {
    namespace Model
    {
      namespace NumberCapabilityMapper
      {

        static constexpr uint32_t SMS_HASH = ConstExprHashingUtils::HashString("SMS");
        static constexpr uint32_t MMS_HASH = ConstExprHashingUtils::HashString("MMS");
        static constexpr uint32_t VOICE_HASH = ConstExprHashingUtils::HashString("VOICE");


        NumberCapability GetNumberCapabilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_HASH)
          {
            return NumberCapability::SMS;
          }
          else if (hashCode == MMS_HASH)
          {
            return NumberCapability::MMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return NumberCapability::VOICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberCapability>(hashCode);
          }

          return NumberCapability::NOT_SET;
        }

        Aws::String GetNameForNumberCapability(NumberCapability enumValue)
        {
          switch(enumValue)
          {
          case NumberCapability::NOT_SET:
            return {};
          case NumberCapability::SMS:
            return "SMS";
          case NumberCapability::MMS:
            return "MMS";
          case NumberCapability::VOICE:
            return "VOICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumberCapabilityMapper
    } // namespace Model
  } // namespace SNS
} // namespace Aws

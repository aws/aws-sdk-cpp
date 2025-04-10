/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SystemMessageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace SystemMessageTypeMapper
      {

        static const int RESPONSE_HASH = HashingUtils::HashString("RESPONSE");
        static const int GROUNDED_RESPONSE_HASH = HashingUtils::HashString("GROUNDED_RESPONSE");


        SystemMessageType GetSystemMessageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESPONSE_HASH)
          {
            return SystemMessageType::RESPONSE;
          }
          else if (hashCode == GROUNDED_RESPONSE_HASH)
          {
            return SystemMessageType::GROUNDED_RESPONSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SystemMessageType>(hashCode);
          }

          return SystemMessageType::NOT_SET;
        }

        Aws::String GetNameForSystemMessageType(SystemMessageType enumValue)
        {
          switch(enumValue)
          {
          case SystemMessageType::NOT_SET:
            return {};
          case SystemMessageType::RESPONSE:
            return "RESPONSE";
          case SystemMessageType::GROUNDED_RESPONSE:
            return "GROUNDED_RESPONSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SystemMessageTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

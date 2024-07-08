/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/Sender.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace SenderMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");


        Sender GetSenderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return Sender::USER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return Sender::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Sender>(hashCode);
          }

          return Sender::NOT_SET;
        }

        Aws::String GetNameForSender(Sender enumValue)
        {
          switch(enumValue)
          {
          case Sender::NOT_SET:
            return {};
          case Sender::USER:
            return "USER";
          case Sender::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SenderMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws

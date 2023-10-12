/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ServerTypeMapper
      {

        static constexpr uint32_t VIRTUAL_MACHINE_HASH = ConstExprHashingUtils::HashString("VIRTUAL_MACHINE");


        ServerType GetServerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIRTUAL_MACHINE_HASH)
          {
            return ServerType::VIRTUAL_MACHINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerType>(hashCode);
          }

          return ServerType::NOT_SET;
        }

        Aws::String GetNameForServerType(ServerType enumValue)
        {
          switch(enumValue)
          {
          case ServerType::NOT_SET:
            return {};
          case ServerType::VIRTUAL_MACHINE:
            return "VIRTUAL_MACHINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerTypeMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws

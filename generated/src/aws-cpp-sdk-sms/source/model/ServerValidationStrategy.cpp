/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerValidationStrategy.h>
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
      namespace ServerValidationStrategyMapper
      {

        static const int USERDATA_HASH = HashingUtils::HashString("USERDATA");


        ServerValidationStrategy GetServerValidationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USERDATA_HASH)
          {
            return ServerValidationStrategy::USERDATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerValidationStrategy>(hashCode);
          }

          return ServerValidationStrategy::NOT_SET;
        }

        Aws::String GetNameForServerValidationStrategy(ServerValidationStrategy enumValue)
        {
          switch(enumValue)
          {
          case ServerValidationStrategy::USERDATA:
            return "USERDATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerValidationStrategyMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws

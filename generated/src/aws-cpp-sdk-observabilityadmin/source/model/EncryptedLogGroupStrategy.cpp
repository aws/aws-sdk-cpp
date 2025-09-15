/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/EncryptedLogGroupStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ObservabilityAdmin
  {
    namespace Model
    {
      namespace EncryptedLogGroupStrategyMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int SKIP_HASH = HashingUtils::HashString("SKIP");


        EncryptedLogGroupStrategy GetEncryptedLogGroupStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return EncryptedLogGroupStrategy::ALLOW;
          }
          else if (hashCode == SKIP_HASH)
          {
            return EncryptedLogGroupStrategy::SKIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptedLogGroupStrategy>(hashCode);
          }

          return EncryptedLogGroupStrategy::NOT_SET;
        }

        Aws::String GetNameForEncryptedLogGroupStrategy(EncryptedLogGroupStrategy enumValue)
        {
          switch(enumValue)
          {
          case EncryptedLogGroupStrategy::NOT_SET:
            return {};
          case EncryptedLogGroupStrategy::ALLOW:
            return "ALLOW";
          case EncryptedLogGroupStrategy::SKIP:
            return "SKIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptedLogGroupStrategyMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws

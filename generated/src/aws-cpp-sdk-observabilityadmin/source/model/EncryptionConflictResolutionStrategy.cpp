/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/EncryptionConflictResolutionStrategy.h>
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
      namespace EncryptionConflictResolutionStrategyMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int SKIP_HASH = HashingUtils::HashString("SKIP");


        EncryptionConflictResolutionStrategy GetEncryptionConflictResolutionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return EncryptionConflictResolutionStrategy::ALLOW;
          }
          else if (hashCode == SKIP_HASH)
          {
            return EncryptionConflictResolutionStrategy::SKIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionConflictResolutionStrategy>(hashCode);
          }

          return EncryptionConflictResolutionStrategy::NOT_SET;
        }

        Aws::String GetNameForEncryptionConflictResolutionStrategy(EncryptionConflictResolutionStrategy enumValue)
        {
          switch(enumValue)
          {
          case EncryptionConflictResolutionStrategy::NOT_SET:
            return {};
          case EncryptionConflictResolutionStrategy::ALLOW:
            return "ALLOW";
          case EncryptionConflictResolutionStrategy::SKIP:
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

      } // namespace EncryptionConflictResolutionStrategyMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws

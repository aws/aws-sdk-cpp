/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/Owner.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace OwnerMapper
      {

        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        Owner GetOwnerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_MANAGED_HASH)
          {
            return Owner::AWS_MANAGED;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return Owner::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Owner>(hashCode);
          }

          return Owner::NOT_SET;
        }

        Aws::String GetNameForOwner(Owner enumValue)
        {
          switch(enumValue)
          {
          case Owner::AWS_MANAGED:
            return "AWS_MANAGED";
          case Owner::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OwnerMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws

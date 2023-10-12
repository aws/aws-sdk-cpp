/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/DatabaseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace DatabaseTypeMapper
      {

        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");
        static constexpr uint32_t TENANT_HASH = ConstExprHashingUtils::HashString("TENANT");


        DatabaseType GetDatabaseTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_HASH)
          {
            return DatabaseType::SYSTEM;
          }
          else if (hashCode == TENANT_HASH)
          {
            return DatabaseType::TENANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseType>(hashCode);
          }

          return DatabaseType::NOT_SET;
        }

        Aws::String GetNameForDatabaseType(DatabaseType enumValue)
        {
          switch(enumValue)
          {
          case DatabaseType::NOT_SET:
            return {};
          case DatabaseType::SYSTEM:
            return "SYSTEM";
          case DatabaseType::TENANT:
            return "TENANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/EngineFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace EngineFamilyMapper
      {

        static constexpr uint32_t MYSQL_HASH = ConstExprHashingUtils::HashString("MYSQL");
        static constexpr uint32_t POSTGRESQL_HASH = ConstExprHashingUtils::HashString("POSTGRESQL");
        static constexpr uint32_t SQLSERVER_HASH = ConstExprHashingUtils::HashString("SQLSERVER");


        EngineFamily GetEngineFamilyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MYSQL_HASH)
          {
            return EngineFamily::MYSQL;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return EngineFamily::POSTGRESQL;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return EngineFamily::SQLSERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngineFamily>(hashCode);
          }

          return EngineFamily::NOT_SET;
        }

        Aws::String GetNameForEngineFamily(EngineFamily enumValue)
        {
          switch(enumValue)
          {
          case EngineFamily::NOT_SET:
            return {};
          case EngineFamily::MYSQL:
            return "MYSQL";
          case EngineFamily::POSTGRESQL:
            return "POSTGRESQL";
          case EngineFamily::SQLSERVER:
            return "SQLSERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngineFamilyMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws

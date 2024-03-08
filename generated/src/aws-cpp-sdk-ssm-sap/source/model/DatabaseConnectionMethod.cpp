/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/DatabaseConnectionMethod.h>
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
      namespace DatabaseConnectionMethodMapper
      {

        static const int DIRECT_HASH = HashingUtils::HashString("DIRECT");
        static const int OVERLAY_HASH = HashingUtils::HashString("OVERLAY");


        DatabaseConnectionMethod GetDatabaseConnectionMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECT_HASH)
          {
            return DatabaseConnectionMethod::DIRECT;
          }
          else if (hashCode == OVERLAY_HASH)
          {
            return DatabaseConnectionMethod::OVERLAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseConnectionMethod>(hashCode);
          }

          return DatabaseConnectionMethod::NOT_SET;
        }

        Aws::String GetNameForDatabaseConnectionMethod(DatabaseConnectionMethod enumValue)
        {
          switch(enumValue)
          {
          case DatabaseConnectionMethod::NOT_SET:
            return {};
          case DatabaseConnectionMethod::DIRECT:
            return "DIRECT";
          case DatabaseConnectionMethod::OVERLAY:
            return "OVERLAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseConnectionMethodMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

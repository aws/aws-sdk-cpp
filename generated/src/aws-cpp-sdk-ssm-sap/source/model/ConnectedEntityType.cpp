/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ConnectedEntityType.h>
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
      namespace ConnectedEntityTypeMapper
      {

        static const int DBMS_HASH = HashingUtils::HashString("DBMS");


        ConnectedEntityType GetConnectedEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DBMS_HASH)
          {
            return ConnectedEntityType::DBMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectedEntityType>(hashCode);
          }

          return ConnectedEntityType::NOT_SET;
        }

        Aws::String GetNameForConnectedEntityType(ConnectedEntityType enumValue)
        {
          switch(enumValue)
          {
          case ConnectedEntityType::NOT_SET:
            return {};
          case ConnectedEntityType::DBMS:
            return "DBMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectedEntityTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

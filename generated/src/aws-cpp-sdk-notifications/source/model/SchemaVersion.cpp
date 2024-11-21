/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/SchemaVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace SchemaVersionMapper
      {

        static const int v1_0_HASH = HashingUtils::HashString("v1.0");


        SchemaVersion GetSchemaVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == v1_0_HASH)
          {
            return SchemaVersion::v1_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaVersion>(hashCode);
          }

          return SchemaVersion::NOT_SET;
        }

        Aws::String GetNameForSchemaVersion(SchemaVersion enumValue)
        {
          switch(enumValue)
          {
          case SchemaVersion::NOT_SET:
            return {};
          case SchemaVersion::v1_0:
            return "v1.0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaVersionMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws

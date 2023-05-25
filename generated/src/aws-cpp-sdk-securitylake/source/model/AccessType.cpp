/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace AccessTypeMapper
      {

        static const int LAKEFORMATION_HASH = HashingUtils::HashString("LAKEFORMATION");
        static const int S3_HASH = HashingUtils::HashString("S3");


        AccessType GetAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAKEFORMATION_HASH)
          {
            return AccessType::LAKEFORMATION;
          }
          else if (hashCode == S3_HASH)
          {
            return AccessType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessType>(hashCode);
          }

          return AccessType::NOT_SET;
        }

        Aws::String GetNameForAccessType(AccessType enumValue)
        {
          switch(enumValue)
          {
          case AccessType::LAKEFORMATION:
            return "LAKEFORMATION";
          case AccessType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessTypeMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws

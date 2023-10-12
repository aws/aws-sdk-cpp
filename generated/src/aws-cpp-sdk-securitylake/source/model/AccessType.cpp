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

        static constexpr uint32_t LAKEFORMATION_HASH = ConstExprHashingUtils::HashString("LAKEFORMATION");
        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");


        AccessType GetAccessTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AccessType::NOT_SET:
            return {};
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

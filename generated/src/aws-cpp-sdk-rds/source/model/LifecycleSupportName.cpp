/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/LifecycleSupportName.h>
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
      namespace LifecycleSupportNameMapper
      {

        static const int open_source_rds_standard_support_HASH = HashingUtils::HashString("open-source-rds-standard-support");
        static const int open_source_rds_extended_support_HASH = HashingUtils::HashString("open-source-rds-extended-support");


        LifecycleSupportName GetLifecycleSupportNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_source_rds_standard_support_HASH)
          {
            return LifecycleSupportName::open_source_rds_standard_support;
          }
          else if (hashCode == open_source_rds_extended_support_HASH)
          {
            return LifecycleSupportName::open_source_rds_extended_support;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleSupportName>(hashCode);
          }

          return LifecycleSupportName::NOT_SET;
        }

        Aws::String GetNameForLifecycleSupportName(LifecycleSupportName enumValue)
        {
          switch(enumValue)
          {
          case LifecycleSupportName::NOT_SET:
            return {};
          case LifecycleSupportName::open_source_rds_standard_support:
            return "open-source-rds-standard-support";
          case LifecycleSupportName::open_source_rds_extended_support:
            return "open-source-rds-extended-support";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleSupportNameMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws

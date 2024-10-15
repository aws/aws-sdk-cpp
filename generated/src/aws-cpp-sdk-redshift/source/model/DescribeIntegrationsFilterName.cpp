/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeIntegrationsFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace DescribeIntegrationsFilterNameMapper
      {

        static const int integration_arn_HASH = HashingUtils::HashString("integration-arn");
        static const int source_arn_HASH = HashingUtils::HashString("source-arn");
        static const int source_types_HASH = HashingUtils::HashString("source-types");
        static const int status_HASH = HashingUtils::HashString("status");


        DescribeIntegrationsFilterName GetDescribeIntegrationsFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == integration_arn_HASH)
          {
            return DescribeIntegrationsFilterName::integration_arn;
          }
          else if (hashCode == source_arn_HASH)
          {
            return DescribeIntegrationsFilterName::source_arn;
          }
          else if (hashCode == source_types_HASH)
          {
            return DescribeIntegrationsFilterName::source_types;
          }
          else if (hashCode == status_HASH)
          {
            return DescribeIntegrationsFilterName::status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeIntegrationsFilterName>(hashCode);
          }

          return DescribeIntegrationsFilterName::NOT_SET;
        }

        Aws::String GetNameForDescribeIntegrationsFilterName(DescribeIntegrationsFilterName enumValue)
        {
          switch(enumValue)
          {
          case DescribeIntegrationsFilterName::NOT_SET:
            return {};
          case DescribeIntegrationsFilterName::integration_arn:
            return "integration-arn";
          case DescribeIntegrationsFilterName::source_arn:
            return "source-arn";
          case DescribeIntegrationsFilterName::source_types:
            return "source-types";
          case DescribeIntegrationsFilterName::status:
            return "status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeIntegrationsFilterNameMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws

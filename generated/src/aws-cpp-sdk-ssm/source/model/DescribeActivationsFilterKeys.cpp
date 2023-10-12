/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeActivationsFilterKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DescribeActivationsFilterKeysMapper
      {

        static constexpr uint32_t ActivationIds_HASH = ConstExprHashingUtils::HashString("ActivationIds");
        static constexpr uint32_t DefaultInstanceName_HASH = ConstExprHashingUtils::HashString("DefaultInstanceName");
        static constexpr uint32_t IamRole_HASH = ConstExprHashingUtils::HashString("IamRole");


        DescribeActivationsFilterKeys GetDescribeActivationsFilterKeysForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivationIds_HASH)
          {
            return DescribeActivationsFilterKeys::ActivationIds;
          }
          else if (hashCode == DefaultInstanceName_HASH)
          {
            return DescribeActivationsFilterKeys::DefaultInstanceName;
          }
          else if (hashCode == IamRole_HASH)
          {
            return DescribeActivationsFilterKeys::IamRole;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeActivationsFilterKeys>(hashCode);
          }

          return DescribeActivationsFilterKeys::NOT_SET;
        }

        Aws::String GetNameForDescribeActivationsFilterKeys(DescribeActivationsFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case DescribeActivationsFilterKeys::NOT_SET:
            return {};
          case DescribeActivationsFilterKeys::ActivationIds:
            return "ActivationIds";
          case DescribeActivationsFilterKeys::DefaultInstanceName:
            return "DefaultInstanceName";
          case DescribeActivationsFilterKeys::IamRole:
            return "IamRole";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeActivationsFilterKeysMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

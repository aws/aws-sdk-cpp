/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PermissionConditionOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace PermissionConditionOperatorMapper
      {

        static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");


        PermissionConditionOperator GetPermissionConditionOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StringEquals_HASH)
          {
            return PermissionConditionOperator::StringEquals;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionConditionOperator>(hashCode);
          }

          return PermissionConditionOperator::NOT_SET;
        }

        Aws::String GetNameForPermissionConditionOperator(PermissionConditionOperator enumValue)
        {
          switch(enumValue)
          {
          case PermissionConditionOperator::NOT_SET:
            return {};
          case PermissionConditionOperator::StringEquals:
            return "StringEquals";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionConditionOperatorMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

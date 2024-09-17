/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstancePropertyFilterOperator.h>
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
      namespace InstancePropertyFilterOperatorMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");
        static const int BeginWith_HASH = HashingUtils::HashString("BeginWith");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");


        InstancePropertyFilterOperator GetInstancePropertyFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return InstancePropertyFilterOperator::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return InstancePropertyFilterOperator::NotEqual;
          }
          else if (hashCode == BeginWith_HASH)
          {
            return InstancePropertyFilterOperator::BeginWith;
          }
          else if (hashCode == LessThan_HASH)
          {
            return InstancePropertyFilterOperator::LessThan;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return InstancePropertyFilterOperator::GreaterThan;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstancePropertyFilterOperator>(hashCode);
          }

          return InstancePropertyFilterOperator::NOT_SET;
        }

        Aws::String GetNameForInstancePropertyFilterOperator(InstancePropertyFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case InstancePropertyFilterOperator::NOT_SET:
            return {};
          case InstancePropertyFilterOperator::Equal:
            return "Equal";
          case InstancePropertyFilterOperator::NotEqual:
            return "NotEqual";
          case InstancePropertyFilterOperator::BeginWith:
            return "BeginWith";
          case InstancePropertyFilterOperator::LessThan:
            return "LessThan";
          case InstancePropertyFilterOperator::GreaterThan:
            return "GreaterThan";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstancePropertyFilterOperatorMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

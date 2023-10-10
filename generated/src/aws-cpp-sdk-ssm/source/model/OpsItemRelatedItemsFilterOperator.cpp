/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemRelatedItemsFilterOperator.h>
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
      namespace OpsItemRelatedItemsFilterOperatorMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");


        OpsItemRelatedItemsFilterOperator GetOpsItemRelatedItemsFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return OpsItemRelatedItemsFilterOperator::Equal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemRelatedItemsFilterOperator>(hashCode);
          }

          return OpsItemRelatedItemsFilterOperator::NOT_SET;
        }

        Aws::String GetNameForOpsItemRelatedItemsFilterOperator(OpsItemRelatedItemsFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case OpsItemRelatedItemsFilterOperator::NOT_SET:
            return {};
          case OpsItemRelatedItemsFilterOperator::Equal:
            return "Equal";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemRelatedItemsFilterOperatorMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

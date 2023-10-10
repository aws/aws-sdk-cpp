/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemEventFilterOperator.h>
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
      namespace OpsItemEventFilterOperatorMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");


        OpsItemEventFilterOperator GetOpsItemEventFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return OpsItemEventFilterOperator::Equal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemEventFilterOperator>(hashCode);
          }

          return OpsItemEventFilterOperator::NOT_SET;
        }

        Aws::String GetNameForOpsItemEventFilterOperator(OpsItemEventFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case OpsItemEventFilterOperator::NOT_SET:
            return {};
          case OpsItemEventFilterOperator::Equal:
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

      } // namespace OpsItemEventFilterOperatorMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

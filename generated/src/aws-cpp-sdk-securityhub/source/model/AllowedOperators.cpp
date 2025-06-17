/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace AllowedOperatorsMapper
      {

        static const int AND_HASH = HashingUtils::HashString("AND");
        static const int OR_HASH = HashingUtils::HashString("OR");


        AllowedOperators GetAllowedOperatorsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AND_HASH)
          {
            return AllowedOperators::AND;
          }
          else if (hashCode == OR_HASH)
          {
            return AllowedOperators::OR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowedOperators>(hashCode);
          }

          return AllowedOperators::NOT_SET;
        }

        Aws::String GetNameForAllowedOperators(AllowedOperators enumValue)
        {
          switch(enumValue)
          {
          case AllowedOperators::NOT_SET:
            return {};
          case AllowedOperators::AND:
            return "AND";
          case AllowedOperators::OR:
            return "OR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowedOperatorsMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

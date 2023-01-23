/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ChildType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace ChildTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("ORGANIZATIONAL_UNIT");


        ChildType GetChildTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return ChildType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATIONAL_UNIT_HASH)
          {
            return ChildType::ORGANIZATIONAL_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChildType>(hashCode);
          }

          return ChildType::NOT_SET;
        }

        Aws::String GetNameForChildType(ChildType enumValue)
        {
          switch(enumValue)
          {
          case ChildType::ACCOUNT:
            return "ACCOUNT";
          case ChildType::ORGANIZATIONAL_UNIT:
            return "ORGANIZATIONAL_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChildTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws

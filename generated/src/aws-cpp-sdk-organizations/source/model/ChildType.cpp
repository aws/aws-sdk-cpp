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

        static constexpr uint32_t ACCOUNT_HASH = ConstExprHashingUtils::HashString("ACCOUNT");
        static constexpr uint32_t ORGANIZATIONAL_UNIT_HASH = ConstExprHashingUtils::HashString("ORGANIZATIONAL_UNIT");


        ChildType GetChildTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ChildType::NOT_SET:
            return {};
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

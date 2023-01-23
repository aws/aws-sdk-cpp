/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/TargetType.h>
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
      namespace TargetTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("ORGANIZATIONAL_UNIT");
        static const int ROOT_HASH = HashingUtils::HashString("ROOT");


        TargetType GetTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return TargetType::ACCOUNT;
          }
          else if (hashCode == ORGANIZATIONAL_UNIT_HASH)
          {
            return TargetType::ORGANIZATIONAL_UNIT;
          }
          else if (hashCode == ROOT_HASH)
          {
            return TargetType::ROOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetType>(hashCode);
          }

          return TargetType::NOT_SET;
        }

        Aws::String GetNameForTargetType(TargetType enumValue)
        {
          switch(enumValue)
          {
          case TargetType::ACCOUNT:
            return "ACCOUNT";
          case TargetType::ORGANIZATIONAL_UNIT:
            return "ORGANIZATIONAL_UNIT";
          case TargetType::ROOT:
            return "ROOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws

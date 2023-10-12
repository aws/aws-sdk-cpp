/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/TargetIdType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroupsTaggingAPI
  {
    namespace Model
    {
      namespace TargetIdTypeMapper
      {

        static constexpr uint32_t ACCOUNT_HASH = ConstExprHashingUtils::HashString("ACCOUNT");
        static constexpr uint32_t OU_HASH = ConstExprHashingUtils::HashString("OU");
        static constexpr uint32_t ROOT_HASH = ConstExprHashingUtils::HashString("ROOT");


        TargetIdType GetTargetIdTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return TargetIdType::ACCOUNT;
          }
          else if (hashCode == OU_HASH)
          {
            return TargetIdType::OU;
          }
          else if (hashCode == ROOT_HASH)
          {
            return TargetIdType::ROOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetIdType>(hashCode);
          }

          return TargetIdType::NOT_SET;
        }

        Aws::String GetNameForTargetIdType(TargetIdType enumValue)
        {
          switch(enumValue)
          {
          case TargetIdType::NOT_SET:
            return {};
          case TargetIdType::ACCOUNT:
            return "ACCOUNT";
          case TargetIdType::OU:
            return "OU";
          case TargetIdType::ROOT:
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

      } // namespace TargetIdTypeMapper
    } // namespace Model
  } // namespace ResourceGroupsTaggingAPI
} // namespace Aws

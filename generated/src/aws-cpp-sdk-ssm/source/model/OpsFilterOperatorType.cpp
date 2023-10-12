/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsFilterOperatorType.h>
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
      namespace OpsFilterOperatorTypeMapper
      {

        static constexpr uint32_t Equal_HASH = ConstExprHashingUtils::HashString("Equal");
        static constexpr uint32_t NotEqual_HASH = ConstExprHashingUtils::HashString("NotEqual");
        static constexpr uint32_t BeginWith_HASH = ConstExprHashingUtils::HashString("BeginWith");
        static constexpr uint32_t LessThan_HASH = ConstExprHashingUtils::HashString("LessThan");
        static constexpr uint32_t GreaterThan_HASH = ConstExprHashingUtils::HashString("GreaterThan");
        static constexpr uint32_t Exists_HASH = ConstExprHashingUtils::HashString("Exists");


        OpsFilterOperatorType GetOpsFilterOperatorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return OpsFilterOperatorType::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return OpsFilterOperatorType::NotEqual;
          }
          else if (hashCode == BeginWith_HASH)
          {
            return OpsFilterOperatorType::BeginWith;
          }
          else if (hashCode == LessThan_HASH)
          {
            return OpsFilterOperatorType::LessThan;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return OpsFilterOperatorType::GreaterThan;
          }
          else if (hashCode == Exists_HASH)
          {
            return OpsFilterOperatorType::Exists;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsFilterOperatorType>(hashCode);
          }

          return OpsFilterOperatorType::NOT_SET;
        }

        Aws::String GetNameForOpsFilterOperatorType(OpsFilterOperatorType enumValue)
        {
          switch(enumValue)
          {
          case OpsFilterOperatorType::NOT_SET:
            return {};
          case OpsFilterOperatorType::Equal:
            return "Equal";
          case OpsFilterOperatorType::NotEqual:
            return "NotEqual";
          case OpsFilterOperatorType::BeginWith:
            return "BeginWith";
          case OpsFilterOperatorType::LessThan:
            return "LessThan";
          case OpsFilterOperatorType::GreaterThan:
            return "GreaterThan";
          case OpsFilterOperatorType::Exists:
            return "Exists";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsFilterOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

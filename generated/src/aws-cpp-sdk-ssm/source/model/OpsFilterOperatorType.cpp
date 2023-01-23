﻿/**
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

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");
        static const int BeginWith_HASH = HashingUtils::HashString("BeginWith");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int Exists_HASH = HashingUtils::HashString("Exists");


        OpsFilterOperatorType GetOpsFilterOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

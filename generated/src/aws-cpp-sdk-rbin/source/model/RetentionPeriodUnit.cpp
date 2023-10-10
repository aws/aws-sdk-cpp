﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/RetentionPeriodUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace RetentionPeriodUnitMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");


        RetentionPeriodUnit GetRetentionPeriodUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return RetentionPeriodUnit::DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionPeriodUnit>(hashCode);
          }

          return RetentionPeriodUnit::NOT_SET;
        }

        Aws::String GetNameForRetentionPeriodUnit(RetentionPeriodUnit enumValue)
        {
          switch(enumValue)
          {
          case RetentionPeriodUnit::NOT_SET:
            return {};
          case RetentionPeriodUnit::DAYS:
            return "DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionPeriodUnitMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RecommendedActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace RecommendedActionTypeMapper
      {

        static const int SQL_HASH = HashingUtils::HashString("SQL");
        static const int CLI_HASH = HashingUtils::HashString("CLI");


        RecommendedActionType GetRecommendedActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SQL_HASH)
          {
            return RecommendedActionType::SQL;
          }
          else if (hashCode == CLI_HASH)
          {
            return RecommendedActionType::CLI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendedActionType>(hashCode);
          }

          return RecommendedActionType::NOT_SET;
        }

        Aws::String GetNameForRecommendedActionType(RecommendedActionType enumValue)
        {
          switch(enumValue)
          {
          case RecommendedActionType::NOT_SET:
            return {};
          case RecommendedActionType::SQL:
            return "SQL";
          case RecommendedActionType::CLI:
            return "CLI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendedActionTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws

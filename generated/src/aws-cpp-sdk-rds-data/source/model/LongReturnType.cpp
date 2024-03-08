/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/LongReturnType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDSDataService
  {
    namespace Model
    {
      namespace LongReturnTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int LONG_HASH = HashingUtils::HashString("LONG");


        LongReturnType GetLongReturnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return LongReturnType::STRING;
          }
          else if (hashCode == LONG_HASH)
          {
            return LongReturnType::LONG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LongReturnType>(hashCode);
          }

          return LongReturnType::NOT_SET;
        }

        Aws::String GetNameForLongReturnType(LongReturnType enumValue)
        {
          switch(enumValue)
          {
          case LongReturnType::NOT_SET:
            return {};
          case LongReturnType::STRING:
            return "STRING";
          case LongReturnType::LONG:
            return "LONG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LongReturnTypeMapper
    } // namespace Model
  } // namespace RDSDataService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FieldToProtectType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace FieldToProtectTypeMapper
      {

        static const int SINGLE_HEADER_HASH = HashingUtils::HashString("SINGLE_HEADER");
        static const int SINGLE_COOKIE_HASH = HashingUtils::HashString("SINGLE_COOKIE");
        static const int SINGLE_QUERY_ARGUMENT_HASH = HashingUtils::HashString("SINGLE_QUERY_ARGUMENT");
        static const int QUERY_STRING_HASH = HashingUtils::HashString("QUERY_STRING");
        static const int BODY_HASH = HashingUtils::HashString("BODY");


        FieldToProtectType GetFieldToProtectTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_HEADER_HASH)
          {
            return FieldToProtectType::SINGLE_HEADER;
          }
          else if (hashCode == SINGLE_COOKIE_HASH)
          {
            return FieldToProtectType::SINGLE_COOKIE;
          }
          else if (hashCode == SINGLE_QUERY_ARGUMENT_HASH)
          {
            return FieldToProtectType::SINGLE_QUERY_ARGUMENT;
          }
          else if (hashCode == QUERY_STRING_HASH)
          {
            return FieldToProtectType::QUERY_STRING;
          }
          else if (hashCode == BODY_HASH)
          {
            return FieldToProtectType::BODY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldToProtectType>(hashCode);
          }

          return FieldToProtectType::NOT_SET;
        }

        Aws::String GetNameForFieldToProtectType(FieldToProtectType enumValue)
        {
          switch(enumValue)
          {
          case FieldToProtectType::NOT_SET:
            return {};
          case FieldToProtectType::SINGLE_HEADER:
            return "SINGLE_HEADER";
          case FieldToProtectType::SINGLE_COOKIE:
            return "SINGLE_COOKIE";
          case FieldToProtectType::SINGLE_QUERY_ARGUMENT:
            return "SINGLE_QUERY_ARGUMENT";
          case FieldToProtectType::QUERY_STRING:
            return "QUERY_STRING";
          case FieldToProtectType::BODY:
            return "BODY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldToProtectTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Schemas
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static constexpr uint32_t OpenApi3_HASH = ConstExprHashingUtils::HashString("OpenApi3");
        static constexpr uint32_t JSONSchemaDraft4_HASH = ConstExprHashingUtils::HashString("JSONSchemaDraft4");


        Type GetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OpenApi3_HASH)
          {
            return Type::OpenApi3;
          }
          else if (hashCode == JSONSchemaDraft4_HASH)
          {
            return Type::JSONSchemaDraft4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::OpenApi3:
            return "OpenApi3";
          case Type::JSONSchemaDraft4:
            return "JSONSchemaDraft4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace Schemas
} // namespace Aws

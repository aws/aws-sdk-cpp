/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ParameterType.h>
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
      namespace ParameterTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int StringList_HASH = HashingUtils::HashString("StringList");
        static const int SecureString_HASH = HashingUtils::HashString("SecureString");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return ParameterType::String;
          }
          else if (hashCode == StringList_HASH)
          {
            return ParameterType::StringList;
          }
          else if (hashCode == SecureString_HASH)
          {
            return ParameterType::SecureString;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterType>(hashCode);
          }

          return ParameterType::NOT_SET;
        }

        Aws::String GetNameForParameterType(ParameterType enumValue)
        {
          switch(enumValue)
          {
          case ParameterType::String:
            return "String";
          case ParameterType::StringList:
            return "StringList";
          case ParameterType::SecureString:
            return "SecureString";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

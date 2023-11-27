/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ParameterValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ParameterValueTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ParameterValueType GetParameterValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ParameterValueType::DEFAULT;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ParameterValueType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterValueType>(hashCode);
          }

          return ParameterValueType::NOT_SET;
        }

        Aws::String GetNameForParameterValueType(ParameterValueType enumValue)
        {
          switch(enumValue)
          {
          case ParameterValueType::NOT_SET:
            return {};
          case ParameterValueType::DEFAULT:
            return "DEFAULT";
          case ParameterValueType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterValueTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SsmParameterStoreParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace SsmParameterStoreParameterTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");


        SsmParameterStoreParameterType GetSsmParameterStoreParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return SsmParameterStoreParameterType::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SsmParameterStoreParameterType>(hashCode);
          }

          return SsmParameterStoreParameterType::NOT_SET;
        }

        Aws::String GetNameForSsmParameterStoreParameterType(SsmParameterStoreParameterType enumValue)
        {
          switch(enumValue)
          {
          case SsmParameterStoreParameterType::NOT_SET:
            return {};
          case SsmParameterStoreParameterType::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SsmParameterStoreParameterTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws

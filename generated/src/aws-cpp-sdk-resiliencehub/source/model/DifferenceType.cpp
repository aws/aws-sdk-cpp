/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DifferenceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace DifferenceTypeMapper
      {

        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");


        DifferenceType GetDifferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotEqual_HASH)
          {
            return DifferenceType::NotEqual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DifferenceType>(hashCode);
          }

          return DifferenceType::NOT_SET;
        }

        Aws::String GetNameForDifferenceType(DifferenceType enumValue)
        {
          switch(enumValue)
          {
          case DifferenceType::NOT_SET:
            return {};
          case DifferenceType::NotEqual:
            return "NotEqual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DifferenceTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws

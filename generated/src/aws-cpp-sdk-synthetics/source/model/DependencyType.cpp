/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/DependencyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace DependencyTypeMapper
      {

        static const int LambdaLayer_HASH = HashingUtils::HashString("LambdaLayer");


        DependencyType GetDependencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LambdaLayer_HASH)
          {
            return DependencyType::LambdaLayer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DependencyType>(hashCode);
          }

          return DependencyType::NOT_SET;
        }

        Aws::String GetNameForDependencyType(DependencyType enumValue)
        {
          switch(enumValue)
          {
          case DependencyType::NOT_SET:
            return {};
          case DependencyType::LambdaLayer:
            return "LambdaLayer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DependencyTypeMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws

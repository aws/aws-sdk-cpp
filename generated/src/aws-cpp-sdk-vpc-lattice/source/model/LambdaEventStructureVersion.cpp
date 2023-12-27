/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/LambdaEventStructureVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace LambdaEventStructureVersionMapper
      {

        static const int V1_HASH = HashingUtils::HashString("V1");
        static const int V2_HASH = HashingUtils::HashString("V2");


        LambdaEventStructureVersion GetLambdaEventStructureVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_HASH)
          {
            return LambdaEventStructureVersion::V1;
          }
          else if (hashCode == V2_HASH)
          {
            return LambdaEventStructureVersion::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaEventStructureVersion>(hashCode);
          }

          return LambdaEventStructureVersion::NOT_SET;
        }

        Aws::String GetNameForLambdaEventStructureVersion(LambdaEventStructureVersion enumValue)
        {
          switch(enumValue)
          {
          case LambdaEventStructureVersion::NOT_SET:
            return {};
          case LambdaEventStructureVersion::V1:
            return "V1";
          case LambdaEventStructureVersion::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaEventStructureVersionMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CrossAccountFilterOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace CrossAccountFilterOptionMapper
      {

        static const int SameAccount_HASH = HashingUtils::HashString("SameAccount");
        static const int CrossAccount_HASH = HashingUtils::HashString("CrossAccount");


        CrossAccountFilterOption GetCrossAccountFilterOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SameAccount_HASH)
          {
            return CrossAccountFilterOption::SameAccount;
          }
          else if (hashCode == CrossAccount_HASH)
          {
            return CrossAccountFilterOption::CrossAccount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrossAccountFilterOption>(hashCode);
          }

          return CrossAccountFilterOption::NOT_SET;
        }

        Aws::String GetNameForCrossAccountFilterOption(CrossAccountFilterOption enumValue)
        {
          switch(enumValue)
          {
          case CrossAccountFilterOption::NOT_SET:
            return {};
          case CrossAccountFilterOption::SameAccount:
            return "SameAccount";
          case CrossAccountFilterOption::CrossAccount:
            return "CrossAccount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrossAccountFilterOptionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

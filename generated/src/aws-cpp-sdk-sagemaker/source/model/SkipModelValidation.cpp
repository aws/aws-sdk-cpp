/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SkipModelValidation.h>
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
      namespace SkipModelValidationMapper
      {

        static const int All_HASH = HashingUtils::HashString("All");
        static const int None_HASH = HashingUtils::HashString("None");


        SkipModelValidation GetSkipModelValidationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return SkipModelValidation::All;
          }
          else if (hashCode == None_HASH)
          {
            return SkipModelValidation::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SkipModelValidation>(hashCode);
          }

          return SkipModelValidation::NOT_SET;
        }

        Aws::String GetNameForSkipModelValidation(SkipModelValidation enumValue)
        {
          switch(enumValue)
          {
          case SkipModelValidation::NOT_SET:
            return {};
          case SkipModelValidation::All:
            return "All";
          case SkipModelValidation::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SkipModelValidationMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

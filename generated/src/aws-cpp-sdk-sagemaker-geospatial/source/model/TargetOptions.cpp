/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/TargetOptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace TargetOptionsMapper
      {

        static const int INPUT_HASH = HashingUtils::HashString("INPUT");
        static const int OUTPUT_HASH = HashingUtils::HashString("OUTPUT");


        TargetOptions GetTargetOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPUT_HASH)
          {
            return TargetOptions::INPUT;
          }
          else if (hashCode == OUTPUT_HASH)
          {
            return TargetOptions::OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetOptions>(hashCode);
          }

          return TargetOptions::NOT_SET;
        }

        Aws::String GetNameForTargetOptions(TargetOptions enumValue)
        {
          switch(enumValue)
          {
          case TargetOptions::INPUT:
            return "INPUT";
          case TargetOptions::OUTPUT:
            return "OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetOptionsMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/AlgorithmNameCloudRemoval.h>
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
      namespace AlgorithmNameCloudRemovalMapper
      {

        static const int INTERPOLATION_HASH = HashingUtils::HashString("INTERPOLATION");


        AlgorithmNameCloudRemoval GetAlgorithmNameCloudRemovalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERPOLATION_HASH)
          {
            return AlgorithmNameCloudRemoval::INTERPOLATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlgorithmNameCloudRemoval>(hashCode);
          }

          return AlgorithmNameCloudRemoval::NOT_SET;
        }

        Aws::String GetNameForAlgorithmNameCloudRemoval(AlgorithmNameCloudRemoval enumValue)
        {
          switch(enumValue)
          {
          case AlgorithmNameCloudRemoval::INTERPOLATION:
            return "INTERPOLATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlgorithmNameCloudRemovalMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

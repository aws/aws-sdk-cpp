/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobType.h>
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
      namespace VectorEnrichmentJobTypeMapper
      {

        static const int REVERSE_GEOCODING_HASH = HashingUtils::HashString("REVERSE_GEOCODING");
        static const int MAP_MATCHING_HASH = HashingUtils::HashString("MAP_MATCHING");


        VectorEnrichmentJobType GetVectorEnrichmentJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REVERSE_GEOCODING_HASH)
          {
            return VectorEnrichmentJobType::REVERSE_GEOCODING;
          }
          else if (hashCode == MAP_MATCHING_HASH)
          {
            return VectorEnrichmentJobType::MAP_MATCHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VectorEnrichmentJobType>(hashCode);
          }

          return VectorEnrichmentJobType::NOT_SET;
        }

        Aws::String GetNameForVectorEnrichmentJobType(VectorEnrichmentJobType enumValue)
        {
          switch(enumValue)
          {
          case VectorEnrichmentJobType::REVERSE_GEOCODING:
            return "REVERSE_GEOCODING";
          case VectorEnrichmentJobType::MAP_MATCHING:
            return "MAP_MATCHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VectorEnrichmentJobTypeMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobDocumentType.h>
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
      namespace VectorEnrichmentJobDocumentTypeMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");


        VectorEnrichmentJobDocumentType GetVectorEnrichmentJobDocumentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return VectorEnrichmentJobDocumentType::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VectorEnrichmentJobDocumentType>(hashCode);
          }

          return VectorEnrichmentJobDocumentType::NOT_SET;
        }

        Aws::String GetNameForVectorEnrichmentJobDocumentType(VectorEnrichmentJobDocumentType enumValue)
        {
          switch(enumValue)
          {
          case VectorEnrichmentJobDocumentType::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VectorEnrichmentJobDocumentTypeMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

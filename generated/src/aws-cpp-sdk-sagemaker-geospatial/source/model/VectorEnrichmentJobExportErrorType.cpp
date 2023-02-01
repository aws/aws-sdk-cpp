/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportErrorType.h>
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
      namespace VectorEnrichmentJobExportErrorTypeMapper
      {

        static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
        static const int SERVER_ERROR_HASH = HashingUtils::HashString("SERVER_ERROR");


        VectorEnrichmentJobExportErrorType GetVectorEnrichmentJobExportErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLIENT_ERROR_HASH)
          {
            return VectorEnrichmentJobExportErrorType::CLIENT_ERROR;
          }
          else if (hashCode == SERVER_ERROR_HASH)
          {
            return VectorEnrichmentJobExportErrorType::SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VectorEnrichmentJobExportErrorType>(hashCode);
          }

          return VectorEnrichmentJobExportErrorType::NOT_SET;
        }

        Aws::String GetNameForVectorEnrichmentJobExportErrorType(VectorEnrichmentJobExportErrorType enumValue)
        {
          switch(enumValue)
          {
          case VectorEnrichmentJobExportErrorType::CLIENT_ERROR:
            return "CLIENT_ERROR";
          case VectorEnrichmentJobExportErrorType::SERVER_ERROR:
            return "SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VectorEnrichmentJobExportErrorTypeMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

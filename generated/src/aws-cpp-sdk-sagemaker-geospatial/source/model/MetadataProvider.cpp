/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/MetadataProvider.h>
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
      namespace MetadataProviderMapper
      {

        static const int PLANET_ORDER_HASH = HashingUtils::HashString("PLANET_ORDER");


        MetadataProvider GetMetadataProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLANET_ORDER_HASH)
          {
            return MetadataProvider::PLANET_ORDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataProvider>(hashCode);
          }

          return MetadataProvider::NOT_SET;
        }

        Aws::String GetNameForMetadataProvider(MetadataProvider enumValue)
        {
          switch(enumValue)
          {
          case MetadataProvider::PLANET_ORDER:
            return "PLANET_ORDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataProviderMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

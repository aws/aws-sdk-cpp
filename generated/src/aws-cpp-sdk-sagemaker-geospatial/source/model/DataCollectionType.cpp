/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/DataCollectionType.h>
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
      namespace DataCollectionTypeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int PREMIUM_HASH = HashingUtils::HashString("PREMIUM");
        static const int USER_HASH = HashingUtils::HashString("USER");


        DataCollectionType GetDataCollectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return DataCollectionType::PUBLIC_;
          }
          else if (hashCode == PREMIUM_HASH)
          {
            return DataCollectionType::PREMIUM;
          }
          else if (hashCode == USER_HASH)
          {
            return DataCollectionType::USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataCollectionType>(hashCode);
          }

          return DataCollectionType::NOT_SET;
        }

        Aws::String GetNameForDataCollectionType(DataCollectionType enumValue)
        {
          switch(enumValue)
          {
          case DataCollectionType::PUBLIC_:
            return "PUBLIC";
          case DataCollectionType::PREMIUM:
            return "PREMIUM";
          case DataCollectionType::USER:
            return "USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataCollectionTypeMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws

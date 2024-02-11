/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StorageType.h>
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
      namespace StorageTypeMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int InMemory_HASH = HashingUtils::HashString("InMemory");


        StorageType GetStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return StorageType::Standard;
          }
          else if (hashCode == InMemory_HASH)
          {
            return StorageType::InMemory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageType>(hashCode);
          }

          return StorageType::NOT_SET;
        }

        Aws::String GetNameForStorageType(StorageType enumValue)
        {
          switch(enumValue)
          {
          case StorageType::NOT_SET:
            return {};
          case StorageType::Standard:
            return "Standard";
          case StorageType::InMemory:
            return "InMemory";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

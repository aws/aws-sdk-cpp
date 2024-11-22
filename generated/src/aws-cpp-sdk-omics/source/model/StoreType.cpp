/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StoreType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace StoreTypeMapper
      {

        static const int SEQUENCE_STORE_HASH = HashingUtils::HashString("SEQUENCE_STORE");
        static const int REFERENCE_STORE_HASH = HashingUtils::HashString("REFERENCE_STORE");


        StoreType GetStoreTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEQUENCE_STORE_HASH)
          {
            return StoreType::SEQUENCE_STORE;
          }
          else if (hashCode == REFERENCE_STORE_HASH)
          {
            return StoreType::REFERENCE_STORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StoreType>(hashCode);
          }

          return StoreType::NOT_SET;
        }

        Aws::String GetNameForStoreType(StoreType enumValue)
        {
          switch(enumValue)
          {
          case StoreType::NOT_SET:
            return {};
          case StoreType::SEQUENCE_STORE:
            return "SEQUENCE_STORE";
          case StoreType::REFERENCE_STORE:
            return "REFERENCE_STORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StoreTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws

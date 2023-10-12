/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ObjectOwnership.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace ObjectOwnershipMapper
      {

        static constexpr uint32_t BucketOwnerPreferred_HASH = ConstExprHashingUtils::HashString("BucketOwnerPreferred");
        static constexpr uint32_t ObjectWriter_HASH = ConstExprHashingUtils::HashString("ObjectWriter");
        static constexpr uint32_t BucketOwnerEnforced_HASH = ConstExprHashingUtils::HashString("BucketOwnerEnforced");


        ObjectOwnership GetObjectOwnershipForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BucketOwnerPreferred_HASH)
          {
            return ObjectOwnership::BucketOwnerPreferred;
          }
          else if (hashCode == ObjectWriter_HASH)
          {
            return ObjectOwnership::ObjectWriter;
          }
          else if (hashCode == BucketOwnerEnforced_HASH)
          {
            return ObjectOwnership::BucketOwnerEnforced;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectOwnership>(hashCode);
          }

          return ObjectOwnership::NOT_SET;
        }

        Aws::String GetNameForObjectOwnership(ObjectOwnership enumValue)
        {
          switch(enumValue)
          {
          case ObjectOwnership::NOT_SET:
            return {};
          case ObjectOwnership::BucketOwnerPreferred:
            return "BucketOwnerPreferred";
          case ObjectOwnership::ObjectWriter:
            return "ObjectWriter";
          case ObjectOwnership::BucketOwnerEnforced:
            return "BucketOwnerEnforced";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectOwnershipMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ChecksumType.h>
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
      namespace ChecksumTypeMapper
      {

        static const int COMPOSITE_HASH = HashingUtils::HashString("COMPOSITE");
        static const int FULL_OBJECT_HASH = HashingUtils::HashString("FULL_OBJECT");


        ChecksumType GetChecksumTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPOSITE_HASH)
          {
            return ChecksumType::COMPOSITE;
          }
          else if (hashCode == FULL_OBJECT_HASH)
          {
            return ChecksumType::FULL_OBJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChecksumType>(hashCode);
          }

          return ChecksumType::NOT_SET;
        }

        Aws::String GetNameForChecksumType(ChecksumType enumValue)
        {
          switch(enumValue)
          {
          case ChecksumType::NOT_SET:
            return {};
          case ChecksumType::COMPOSITE:
            return "COMPOSITE";
          case ChecksumType::FULL_OBJECT:
            return "FULL_OBJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChecksumTypeMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws

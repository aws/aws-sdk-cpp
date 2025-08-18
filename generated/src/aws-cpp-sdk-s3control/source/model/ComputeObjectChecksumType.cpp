/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ComputeObjectChecksumType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace ComputeObjectChecksumTypeMapper
      {

        static const int FULL_OBJECT_HASH = HashingUtils::HashString("FULL_OBJECT");
        static const int COMPOSITE_HASH = HashingUtils::HashString("COMPOSITE");


        ComputeObjectChecksumType GetComputeObjectChecksumTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_OBJECT_HASH)
          {
            return ComputeObjectChecksumType::FULL_OBJECT;
          }
          else if (hashCode == COMPOSITE_HASH)
          {
            return ComputeObjectChecksumType::COMPOSITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeObjectChecksumType>(hashCode);
          }

          return ComputeObjectChecksumType::NOT_SET;
        }

        Aws::String GetNameForComputeObjectChecksumType(ComputeObjectChecksumType enumValue)
        {
          switch(enumValue)
          {
          case ComputeObjectChecksumType::NOT_SET:
            return {};
          case ComputeObjectChecksumType::FULL_OBJECT:
            return "FULL_OBJECT";
          case ComputeObjectChecksumType::COMPOSITE:
            return "COMPOSITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeObjectChecksumTypeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

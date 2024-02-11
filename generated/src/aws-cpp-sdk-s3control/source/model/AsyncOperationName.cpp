/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AsyncOperationName.h>
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
      namespace AsyncOperationNameMapper
      {

        static const int CreateMultiRegionAccessPoint_HASH = HashingUtils::HashString("CreateMultiRegionAccessPoint");
        static const int DeleteMultiRegionAccessPoint_HASH = HashingUtils::HashString("DeleteMultiRegionAccessPoint");
        static const int PutMultiRegionAccessPointPolicy_HASH = HashingUtils::HashString("PutMultiRegionAccessPointPolicy");


        AsyncOperationName GetAsyncOperationNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateMultiRegionAccessPoint_HASH)
          {
            return AsyncOperationName::CreateMultiRegionAccessPoint;
          }
          else if (hashCode == DeleteMultiRegionAccessPoint_HASH)
          {
            return AsyncOperationName::DeleteMultiRegionAccessPoint;
          }
          else if (hashCode == PutMultiRegionAccessPointPolicy_HASH)
          {
            return AsyncOperationName::PutMultiRegionAccessPointPolicy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsyncOperationName>(hashCode);
          }

          return AsyncOperationName::NOT_SET;
        }

        Aws::String GetNameForAsyncOperationName(AsyncOperationName enumValue)
        {
          switch(enumValue)
          {
          case AsyncOperationName::NOT_SET:
            return {};
          case AsyncOperationName::CreateMultiRegionAccessPoint:
            return "CreateMultiRegionAccessPoint";
          case AsyncOperationName::DeleteMultiRegionAccessPoint:
            return "DeleteMultiRegionAccessPoint";
          case AsyncOperationName::PutMultiRegionAccessPointPolicy:
            return "PutMultiRegionAccessPointPolicy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsyncOperationNameMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncS3Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ResourceDataSyncS3FormatMapper
      {

        static const int JsonSerDe_HASH = HashingUtils::HashString("JsonSerDe");


        ResourceDataSyncS3Format GetResourceDataSyncS3FormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JsonSerDe_HASH)
          {
            return ResourceDataSyncS3Format::JsonSerDe;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceDataSyncS3Format>(hashCode);
          }

          return ResourceDataSyncS3Format::NOT_SET;
        }

        Aws::String GetNameForResourceDataSyncS3Format(ResourceDataSyncS3Format enumValue)
        {
          switch(enumValue)
          {
          case ResourceDataSyncS3Format::JsonSerDe:
            return "JsonSerDe";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceDataSyncS3FormatMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourcesDateField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ResourcesDateFieldMapper
      {

        static const int resource_detail_capture_time_dt_HASH = HashingUtils::HashString("resource_detail_capture_time_dt");
        static const int resource_creation_time_dt_HASH = HashingUtils::HashString("resource_creation_time_dt");


        ResourcesDateField GetResourcesDateFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resource_detail_capture_time_dt_HASH)
          {
            return ResourcesDateField::resource_detail_capture_time_dt;
          }
          else if (hashCode == resource_creation_time_dt_HASH)
          {
            return ResourcesDateField::resource_creation_time_dt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourcesDateField>(hashCode);
          }

          return ResourcesDateField::NOT_SET;
        }

        Aws::String GetNameForResourcesDateField(ResourcesDateField enumValue)
        {
          switch(enumValue)
          {
          case ResourcesDateField::NOT_SET:
            return {};
          case ResourcesDateField::resource_detail_capture_time_dt:
            return "resource_detail_capture_time_dt";
          case ResourcesDateField::resource_creation_time_dt:
            return "resource_creation_time_dt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourcesDateFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

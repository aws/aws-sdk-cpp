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

        static const int ResourceDetailCaptureTime_HASH = HashingUtils::HashString("ResourceDetailCaptureTime");
        static const int ResourceCreationTime_HASH = HashingUtils::HashString("ResourceCreationTime");


        ResourcesDateField GetResourcesDateFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceDetailCaptureTime_HASH)
          {
            return ResourcesDateField::ResourceDetailCaptureTime;
          }
          else if (hashCode == ResourceCreationTime_HASH)
          {
            return ResourcesDateField::ResourceCreationTime;
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
          case ResourcesDateField::ResourceDetailCaptureTime:
            return "ResourceDetailCaptureTime";
          case ResourcesDateField::ResourceCreationTime:
            return "ResourceCreationTime";
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

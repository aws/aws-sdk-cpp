/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/BundleAssociatedResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace BundleAssociatedResourceTypeMapper
      {

        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        BundleAssociatedResourceType GetBundleAssociatedResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_HASH)
          {
            return BundleAssociatedResourceType::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BundleAssociatedResourceType>(hashCode);
          }

          return BundleAssociatedResourceType::NOT_SET;
        }

        Aws::String GetNameForBundleAssociatedResourceType(BundleAssociatedResourceType enumValue)
        {
          switch(enumValue)
          {
          case BundleAssociatedResourceType::NOT_SET:
            return {};
          case BundleAssociatedResourceType::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BundleAssociatedResourceTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

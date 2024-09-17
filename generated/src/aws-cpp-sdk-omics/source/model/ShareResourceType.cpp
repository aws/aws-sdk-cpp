/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ShareResourceType.h>
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
      namespace ShareResourceTypeMapper
      {

        static const int VARIANT_STORE_HASH = HashingUtils::HashString("VARIANT_STORE");
        static const int ANNOTATION_STORE_HASH = HashingUtils::HashString("ANNOTATION_STORE");
        static const int WORKFLOW_HASH = HashingUtils::HashString("WORKFLOW");


        ShareResourceType GetShareResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VARIANT_STORE_HASH)
          {
            return ShareResourceType::VARIANT_STORE;
          }
          else if (hashCode == ANNOTATION_STORE_HASH)
          {
            return ShareResourceType::ANNOTATION_STORE;
          }
          else if (hashCode == WORKFLOW_HASH)
          {
            return ShareResourceType::WORKFLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareResourceType>(hashCode);
          }

          return ShareResourceType::NOT_SET;
        }

        Aws::String GetNameForShareResourceType(ShareResourceType enumValue)
        {
          switch(enumValue)
          {
          case ShareResourceType::NOT_SET:
            return {};
          case ShareResourceType::VARIANT_STORE:
            return "VARIANT_STORE";
          case ShareResourceType::ANNOTATION_STORE:
            return "ANNOTATION_STORE";
          case ShareResourceType::WORKFLOW:
            return "WORKFLOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareResourceTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws

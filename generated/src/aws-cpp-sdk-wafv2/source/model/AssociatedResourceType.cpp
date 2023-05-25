/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AssociatedResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace AssociatedResourceTypeMapper
      {

        static const int CLOUDFRONT_HASH = HashingUtils::HashString("CLOUDFRONT");


        AssociatedResourceType GetAssociatedResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFRONT_HASH)
          {
            return AssociatedResourceType::CLOUDFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociatedResourceType>(hashCode);
          }

          return AssociatedResourceType::NOT_SET;
        }

        Aws::String GetNameForAssociatedResourceType(AssociatedResourceType enumValue)
        {
          switch(enumValue)
          {
          case AssociatedResourceType::CLOUDFRONT:
            return "CLOUDFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociatedResourceTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws

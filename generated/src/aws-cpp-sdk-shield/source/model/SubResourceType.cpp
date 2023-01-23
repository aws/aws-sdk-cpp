/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/SubResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace SubResourceTypeMapper
      {

        static const int IP_HASH = HashingUtils::HashString("IP");
        static const int URL_HASH = HashingUtils::HashString("URL");


        SubResourceType GetSubResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return SubResourceType::IP;
          }
          else if (hashCode == URL_HASH)
          {
            return SubResourceType::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubResourceType>(hashCode);
          }

          return SubResourceType::NOT_SET;
        }

        Aws::String GetNameForSubResourceType(SubResourceType enumValue)
        {
          switch(enumValue)
          {
          case SubResourceType::IP:
            return "IP";
          case SubResourceType::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubResourceTypeMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws

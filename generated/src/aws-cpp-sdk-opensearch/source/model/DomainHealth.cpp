/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace DomainHealthMapper
      {

        static const int Red_HASH = HashingUtils::HashString("Red");
        static const int Yellow_HASH = HashingUtils::HashString("Yellow");
        static const int Green_HASH = HashingUtils::HashString("Green");
        static const int NotAvailable_HASH = HashingUtils::HashString("NotAvailable");


        DomainHealth GetDomainHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Red_HASH)
          {
            return DomainHealth::Red;
          }
          else if (hashCode == Yellow_HASH)
          {
            return DomainHealth::Yellow;
          }
          else if (hashCode == Green_HASH)
          {
            return DomainHealth::Green;
          }
          else if (hashCode == NotAvailable_HASH)
          {
            return DomainHealth::NotAvailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainHealth>(hashCode);
          }

          return DomainHealth::NOT_SET;
        }

        Aws::String GetNameForDomainHealth(DomainHealth enumValue)
        {
          switch(enumValue)
          {
          case DomainHealth::NOT_SET:
            return {};
          case DomainHealth::Red:
            return "Red";
          case DomainHealth::Yellow:
            return "Yellow";
          case DomainHealth::Green:
            return "Green";
          case DomainHealth::NotAvailable:
            return "NotAvailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainHealthMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

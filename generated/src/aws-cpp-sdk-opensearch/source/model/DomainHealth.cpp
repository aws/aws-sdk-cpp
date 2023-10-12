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

        static constexpr uint32_t Red_HASH = ConstExprHashingUtils::HashString("Red");
        static constexpr uint32_t Yellow_HASH = ConstExprHashingUtils::HashString("Yellow");
        static constexpr uint32_t Green_HASH = ConstExprHashingUtils::HashString("Green");
        static constexpr uint32_t NotAvailable_HASH = ConstExprHashingUtils::HashString("NotAvailable");


        DomainHealth GetDomainHealthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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

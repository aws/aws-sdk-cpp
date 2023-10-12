/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainState.h>
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
      namespace DomainStateMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Processing_HASH = ConstExprHashingUtils::HashString("Processing");
        static constexpr uint32_t NotAvailable_HASH = ConstExprHashingUtils::HashString("NotAvailable");


        DomainState GetDomainStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return DomainState::Active;
          }
          else if (hashCode == Processing_HASH)
          {
            return DomainState::Processing;
          }
          else if (hashCode == NotAvailable_HASH)
          {
            return DomainState::NotAvailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainState>(hashCode);
          }

          return DomainState::NOT_SET;
        }

        Aws::String GetNameForDomainState(DomainState enumValue)
        {
          switch(enumValue)
          {
          case DomainState::NOT_SET:
            return {};
          case DomainState::Active:
            return "Active";
          case DomainState::Processing:
            return "Processing";
          case DomainState::NotAvailable:
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

      } // namespace DomainStateMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

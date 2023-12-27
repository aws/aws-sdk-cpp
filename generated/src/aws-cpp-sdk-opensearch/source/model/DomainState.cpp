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

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Processing_HASH = HashingUtils::HashString("Processing");
        static const int NotAvailable_HASH = HashingUtils::HashString("NotAvailable");


        DomainState GetDomainStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/InitiatedBy.h>
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
      namespace InitiatedByMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");


        InitiatedBy GetInitiatedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return InitiatedBy::CUSTOMER;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return InitiatedBy::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InitiatedBy>(hashCode);
          }

          return InitiatedBy::NOT_SET;
        }

        Aws::String GetNameForInitiatedBy(InitiatedBy enumValue)
        {
          switch(enumValue)
          {
          case InitiatedBy::NOT_SET:
            return {};
          case InitiatedBy::CUSTOMER:
            return "CUSTOMER";
          case InitiatedBy::SERVICE:
            return "SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InitiatedByMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/IngestionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace IngestionModeMapper
      {

        static const int BULK_HASH = HashingUtils::HashString("BULK");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        IngestionMode GetIngestionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BULK_HASH)
          {
            return IngestionMode::BULK;
          }
          else if (hashCode == PUT_HASH)
          {
            return IngestionMode::PUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return IngestionMode::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionMode>(hashCode);
          }

          return IngestionMode::NOT_SET;
        }

        Aws::String GetNameForIngestionMode(IngestionMode enumValue)
        {
          switch(enumValue)
          {
          case IngestionMode::NOT_SET:
            return {};
          case IngestionMode::BULK:
            return "BULK";
          case IngestionMode::PUT:
            return "PUT";
          case IngestionMode::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionModeMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws

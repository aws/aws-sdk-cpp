/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SourceCollectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace SourceCollectionStatusMapper
      {

        static const int COLLECTING_HASH = HashingUtils::HashString("COLLECTING");
        static const int MISCONFIGURED_HASH = HashingUtils::HashString("MISCONFIGURED");
        static const int NOT_COLLECTING_HASH = HashingUtils::HashString("NOT_COLLECTING");


        SourceCollectionStatus GetSourceCollectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLLECTING_HASH)
          {
            return SourceCollectionStatus::COLLECTING;
          }
          else if (hashCode == MISCONFIGURED_HASH)
          {
            return SourceCollectionStatus::MISCONFIGURED;
          }
          else if (hashCode == NOT_COLLECTING_HASH)
          {
            return SourceCollectionStatus::NOT_COLLECTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceCollectionStatus>(hashCode);
          }

          return SourceCollectionStatus::NOT_SET;
        }

        Aws::String GetNameForSourceCollectionStatus(SourceCollectionStatus enumValue)
        {
          switch(enumValue)
          {
          case SourceCollectionStatus::NOT_SET:
            return {};
          case SourceCollectionStatus::COLLECTING:
            return "COLLECTING";
          case SourceCollectionStatus::MISCONFIGURED:
            return "MISCONFIGURED";
          case SourceCollectionStatus::NOT_COLLECTING:
            return "NOT_COLLECTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceCollectionStatusMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws

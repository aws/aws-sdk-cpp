/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/MasterNodeStatus.h>
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
      namespace MasterNodeStatusMapper
      {

        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int UnAvailable_HASH = HashingUtils::HashString("UnAvailable");


        MasterNodeStatus GetMasterNodeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Available_HASH)
          {
            return MasterNodeStatus::Available;
          }
          else if (hashCode == UnAvailable_HASH)
          {
            return MasterNodeStatus::UnAvailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MasterNodeStatus>(hashCode);
          }

          return MasterNodeStatus::NOT_SET;
        }

        Aws::String GetNameForMasterNodeStatus(MasterNodeStatus enumValue)
        {
          switch(enumValue)
          {
          case MasterNodeStatus::NOT_SET:
            return {};
          case MasterNodeStatus::Available:
            return "Available";
          case MasterNodeStatus::UnAvailable:
            return "UnAvailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MasterNodeStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

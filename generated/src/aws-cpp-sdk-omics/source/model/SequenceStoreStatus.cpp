/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SequenceStoreStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace SequenceStoreStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SequenceStoreStatus GetSequenceStoreStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return SequenceStoreStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return SequenceStoreStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return SequenceStoreStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SequenceStoreStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SequenceStoreStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SequenceStoreStatus>(hashCode);
          }

          return SequenceStoreStatus::NOT_SET;
        }

        Aws::String GetNameForSequenceStoreStatus(SequenceStoreStatus enumValue)
        {
          switch(enumValue)
          {
          case SequenceStoreStatus::NOT_SET:
            return {};
          case SequenceStoreStatus::CREATING:
            return "CREATING";
          case SequenceStoreStatus::ACTIVE:
            return "ACTIVE";
          case SequenceStoreStatus::UPDATING:
            return "UPDATING";
          case SequenceStoreStatus::DELETING:
            return "DELETING";
          case SequenceStoreStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SequenceStoreStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws

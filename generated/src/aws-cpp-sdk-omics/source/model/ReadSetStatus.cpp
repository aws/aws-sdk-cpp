/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetStatus.h>
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
      namespace ReadSetStatusMapper
      {

        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int PROCESSING_UPLOAD_HASH = HashingUtils::HashString("PROCESSING_UPLOAD");
        static const int UPLOAD_FAILED_HASH = HashingUtils::HashString("UPLOAD_FAILED");


        ReadSetStatus GetReadSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARCHIVED_HASH)
          {
            return ReadSetStatus::ARCHIVED;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ReadSetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ReadSetStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReadSetStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReadSetStatus::DELETED;
          }
          else if (hashCode == PROCESSING_UPLOAD_HASH)
          {
            return ReadSetStatus::PROCESSING_UPLOAD;
          }
          else if (hashCode == UPLOAD_FAILED_HASH)
          {
            return ReadSetStatus::UPLOAD_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetStatus>(hashCode);
          }

          return ReadSetStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetStatus(ReadSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetStatus::NOT_SET:
            return {};
          case ReadSetStatus::ARCHIVED:
            return "ARCHIVED";
          case ReadSetStatus::ACTIVATING:
            return "ACTIVATING";
          case ReadSetStatus::ACTIVE:
            return "ACTIVE";
          case ReadSetStatus::DELETING:
            return "DELETING";
          case ReadSetStatus::DELETED:
            return "DELETED";
          case ReadSetStatus::PROCESSING_UPLOAD:
            return "PROCESSING_UPLOAD";
          case ReadSetStatus::UPLOAD_FAILED:
            return "UPLOAD_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReadSetStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws

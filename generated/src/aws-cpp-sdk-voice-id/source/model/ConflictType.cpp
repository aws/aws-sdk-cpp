/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ConflictType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace ConflictTypeMapper
      {

        static const int ANOTHER_ACTIVE_STREAM_HASH = HashingUtils::HashString("ANOTHER_ACTIVE_STREAM");
        static const int DOMAIN_NOT_ACTIVE_HASH = HashingUtils::HashString("DOMAIN_NOT_ACTIVE");
        static const int CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT_HASH = HashingUtils::HashString("CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT");
        static const int ENROLLMENT_ALREADY_EXISTS_HASH = HashingUtils::HashString("ENROLLMENT_ALREADY_EXISTS");
        static const int SPEAKER_NOT_SET_HASH = HashingUtils::HashString("SPEAKER_NOT_SET");
        static const int SPEAKER_OPTED_OUT_HASH = HashingUtils::HashString("SPEAKER_OPTED_OUT");
        static const int CONCURRENT_CHANGES_HASH = HashingUtils::HashString("CONCURRENT_CHANGES");
        static const int DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES_HASH = HashingUtils::HashString("DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES");
        static const int CANNOT_DELETE_NON_EMPTY_WATCHLIST_HASH = HashingUtils::HashString("CANNOT_DELETE_NON_EMPTY_WATCHLIST");
        static const int FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST_HASH = HashingUtils::HashString("FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST");


        ConflictType GetConflictTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANOTHER_ACTIVE_STREAM_HASH)
          {
            return ConflictType::ANOTHER_ACTIVE_STREAM;
          }
          else if (hashCode == DOMAIN_NOT_ACTIVE_HASH)
          {
            return ConflictType::DOMAIN_NOT_ACTIVE;
          }
          else if (hashCode == CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT_HASH)
          {
            return ConflictType::CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT;
          }
          else if (hashCode == ENROLLMENT_ALREADY_EXISTS_HASH)
          {
            return ConflictType::ENROLLMENT_ALREADY_EXISTS;
          }
          else if (hashCode == SPEAKER_NOT_SET_HASH)
          {
            return ConflictType::SPEAKER_NOT_SET;
          }
          else if (hashCode == SPEAKER_OPTED_OUT_HASH)
          {
            return ConflictType::SPEAKER_OPTED_OUT;
          }
          else if (hashCode == CONCURRENT_CHANGES_HASH)
          {
            return ConflictType::CONCURRENT_CHANGES;
          }
          else if (hashCode == DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES_HASH)
          {
            return ConflictType::DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES;
          }
          else if (hashCode == CANNOT_DELETE_NON_EMPTY_WATCHLIST_HASH)
          {
            return ConflictType::CANNOT_DELETE_NON_EMPTY_WATCHLIST;
          }
          else if (hashCode == FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST_HASH)
          {
            return ConflictType::FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictType>(hashCode);
          }

          return ConflictType::NOT_SET;
        }

        Aws::String GetNameForConflictType(ConflictType enumValue)
        {
          switch(enumValue)
          {
          case ConflictType::NOT_SET:
            return {};
          case ConflictType::ANOTHER_ACTIVE_STREAM:
            return "ANOTHER_ACTIVE_STREAM";
          case ConflictType::DOMAIN_NOT_ACTIVE:
            return "DOMAIN_NOT_ACTIVE";
          case ConflictType::CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT:
            return "CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT";
          case ConflictType::ENROLLMENT_ALREADY_EXISTS:
            return "ENROLLMENT_ALREADY_EXISTS";
          case ConflictType::SPEAKER_NOT_SET:
            return "SPEAKER_NOT_SET";
          case ConflictType::SPEAKER_OPTED_OUT:
            return "SPEAKER_OPTED_OUT";
          case ConflictType::CONCURRENT_CHANGES:
            return "CONCURRENT_CHANGES";
          case ConflictType::DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES:
            return "DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES";
          case ConflictType::CANNOT_DELETE_NON_EMPTY_WATCHLIST:
            return "CANNOT_DELETE_NON_EMPTY_WATCHLIST";
          case ConflictType::FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST:
            return "FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictTypeMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws

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

        static constexpr uint32_t ANOTHER_ACTIVE_STREAM_HASH = ConstExprHashingUtils::HashString("ANOTHER_ACTIVE_STREAM");
        static constexpr uint32_t DOMAIN_NOT_ACTIVE_HASH = ConstExprHashingUtils::HashString("DOMAIN_NOT_ACTIVE");
        static constexpr uint32_t CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT_HASH = ConstExprHashingUtils::HashString("CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT");
        static constexpr uint32_t ENROLLMENT_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ENROLLMENT_ALREADY_EXISTS");
        static constexpr uint32_t SPEAKER_NOT_SET_HASH = ConstExprHashingUtils::HashString("SPEAKER_NOT_SET");
        static constexpr uint32_t SPEAKER_OPTED_OUT_HASH = ConstExprHashingUtils::HashString("SPEAKER_OPTED_OUT");
        static constexpr uint32_t CONCURRENT_CHANGES_HASH = ConstExprHashingUtils::HashString("CONCURRENT_CHANGES");
        static constexpr uint32_t DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES_HASH = ConstExprHashingUtils::HashString("DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES");
        static constexpr uint32_t CANNOT_DELETE_NON_EMPTY_WATCHLIST_HASH = ConstExprHashingUtils::HashString("CANNOT_DELETE_NON_EMPTY_WATCHLIST");
        static constexpr uint32_t FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST_HASH = ConstExprHashingUtils::HashString("FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST");


        ConflictType GetConflictTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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

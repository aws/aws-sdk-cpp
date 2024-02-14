/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MessageUsefulnessReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace MessageUsefulnessReasonMapper
      {

        static const int NOT_FACTUALLY_CORRECT_HASH = HashingUtils::HashString("NOT_FACTUALLY_CORRECT");
        static const int HARMFUL_OR_UNSAFE_HASH = HashingUtils::HashString("HARMFUL_OR_UNSAFE");
        static const int INCORRECT_OR_MISSING_SOURCES_HASH = HashingUtils::HashString("INCORRECT_OR_MISSING_SOURCES");
        static const int NOT_HELPFUL_HASH = HashingUtils::HashString("NOT_HELPFUL");
        static const int FACTUALLY_CORRECT_HASH = HashingUtils::HashString("FACTUALLY_CORRECT");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int RELEVANT_SOURCES_HASH = HashingUtils::HashString("RELEVANT_SOURCES");
        static const int HELPFUL_HASH = HashingUtils::HashString("HELPFUL");
        static const int NOT_BASED_ON_DOCUMENTS_HASH = HashingUtils::HashString("NOT_BASED_ON_DOCUMENTS");
        static const int NOT_COMPLETE_HASH = HashingUtils::HashString("NOT_COMPLETE");
        static const int NOT_CONCISE_HASH = HashingUtils::HashString("NOT_CONCISE");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        MessageUsefulnessReason GetMessageUsefulnessReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_FACTUALLY_CORRECT_HASH)
          {
            return MessageUsefulnessReason::NOT_FACTUALLY_CORRECT;
          }
          else if (hashCode == HARMFUL_OR_UNSAFE_HASH)
          {
            return MessageUsefulnessReason::HARMFUL_OR_UNSAFE;
          }
          else if (hashCode == INCORRECT_OR_MISSING_SOURCES_HASH)
          {
            return MessageUsefulnessReason::INCORRECT_OR_MISSING_SOURCES;
          }
          else if (hashCode == NOT_HELPFUL_HASH)
          {
            return MessageUsefulnessReason::NOT_HELPFUL;
          }
          else if (hashCode == FACTUALLY_CORRECT_HASH)
          {
            return MessageUsefulnessReason::FACTUALLY_CORRECT;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return MessageUsefulnessReason::COMPLETE;
          }
          else if (hashCode == RELEVANT_SOURCES_HASH)
          {
            return MessageUsefulnessReason::RELEVANT_SOURCES;
          }
          else if (hashCode == HELPFUL_HASH)
          {
            return MessageUsefulnessReason::HELPFUL;
          }
          else if (hashCode == NOT_BASED_ON_DOCUMENTS_HASH)
          {
            return MessageUsefulnessReason::NOT_BASED_ON_DOCUMENTS;
          }
          else if (hashCode == NOT_COMPLETE_HASH)
          {
            return MessageUsefulnessReason::NOT_COMPLETE;
          }
          else if (hashCode == NOT_CONCISE_HASH)
          {
            return MessageUsefulnessReason::NOT_CONCISE;
          }
          else if (hashCode == OTHER_HASH)
          {
            return MessageUsefulnessReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageUsefulnessReason>(hashCode);
          }

          return MessageUsefulnessReason::NOT_SET;
        }

        Aws::String GetNameForMessageUsefulnessReason(MessageUsefulnessReason enumValue)
        {
          switch(enumValue)
          {
          case MessageUsefulnessReason::NOT_SET:
            return {};
          case MessageUsefulnessReason::NOT_FACTUALLY_CORRECT:
            return "NOT_FACTUALLY_CORRECT";
          case MessageUsefulnessReason::HARMFUL_OR_UNSAFE:
            return "HARMFUL_OR_UNSAFE";
          case MessageUsefulnessReason::INCORRECT_OR_MISSING_SOURCES:
            return "INCORRECT_OR_MISSING_SOURCES";
          case MessageUsefulnessReason::NOT_HELPFUL:
            return "NOT_HELPFUL";
          case MessageUsefulnessReason::FACTUALLY_CORRECT:
            return "FACTUALLY_CORRECT";
          case MessageUsefulnessReason::COMPLETE:
            return "COMPLETE";
          case MessageUsefulnessReason::RELEVANT_SOURCES:
            return "RELEVANT_SOURCES";
          case MessageUsefulnessReason::HELPFUL:
            return "HELPFUL";
          case MessageUsefulnessReason::NOT_BASED_ON_DOCUMENTS:
            return "NOT_BASED_ON_DOCUMENTS";
          case MessageUsefulnessReason::NOT_COMPLETE:
            return "NOT_COMPLETE";
          case MessageUsefulnessReason::NOT_CONCISE:
            return "NOT_CONCISE";
          case MessageUsefulnessReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageUsefulnessReasonMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

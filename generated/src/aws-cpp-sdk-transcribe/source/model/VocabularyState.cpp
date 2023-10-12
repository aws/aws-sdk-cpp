/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/VocabularyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace VocabularyStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        VocabularyState GetVocabularyStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return VocabularyState::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return VocabularyState::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VocabularyState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VocabularyState>(hashCode);
          }

          return VocabularyState::NOT_SET;
        }

        Aws::String GetNameForVocabularyState(VocabularyState enumValue)
        {
          switch(enumValue)
          {
          case VocabularyState::NOT_SET:
            return {};
          case VocabularyState::PENDING:
            return "PENDING";
          case VocabularyState::READY:
            return "READY";
          case VocabularyState::FAILED:
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

      } // namespace VocabularyStateMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws

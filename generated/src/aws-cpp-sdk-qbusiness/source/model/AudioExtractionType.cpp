/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AudioExtractionType.h>
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
      namespace AudioExtractionTypeMapper
      {

        static const int TRANSCRIPT_HASH = HashingUtils::HashString("TRANSCRIPT");
        static const int SUMMARY_HASH = HashingUtils::HashString("SUMMARY");


        AudioExtractionType GetAudioExtractionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSCRIPT_HASH)
          {
            return AudioExtractionType::TRANSCRIPT;
          }
          else if (hashCode == SUMMARY_HASH)
          {
            return AudioExtractionType::SUMMARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioExtractionType>(hashCode);
          }

          return AudioExtractionType::NOT_SET;
        }

        Aws::String GetNameForAudioExtractionType(AudioExtractionType enumValue)
        {
          switch(enumValue)
          {
          case AudioExtractionType::NOT_SET:
            return {};
          case AudioExtractionType::TRANSCRIPT:
            return "TRANSCRIPT";
          case AudioExtractionType::SUMMARY:
            return "SUMMARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioExtractionTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

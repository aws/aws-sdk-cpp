/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/TranscriptFilterType.h>
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
      namespace TranscriptFilterTypeMapper
      {

        static const int EXACT_HASH = HashingUtils::HashString("EXACT");


        TranscriptFilterType GetTranscriptFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return TranscriptFilterType::EXACT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscriptFilterType>(hashCode);
          }

          return TranscriptFilterType::NOT_SET;
        }

        Aws::String GetNameForTranscriptFilterType(TranscriptFilterType enumValue)
        {
          switch(enumValue)
          {
          case TranscriptFilterType::NOT_SET:
            return {};
          case TranscriptFilterType::EXACT:
            return "EXACT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscriptFilterTypeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws

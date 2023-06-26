/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ContentRedactionOutput.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace ContentRedactionOutputMapper
      {

        static const int redacted_HASH = HashingUtils::HashString("redacted");
        static const int redacted_and_unredacted_HASH = HashingUtils::HashString("redacted_and_unredacted");


        ContentRedactionOutput GetContentRedactionOutputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == redacted_HASH)
          {
            return ContentRedactionOutput::redacted;
          }
          else if (hashCode == redacted_and_unredacted_HASH)
          {
            return ContentRedactionOutput::redacted_and_unredacted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentRedactionOutput>(hashCode);
          }

          return ContentRedactionOutput::NOT_SET;
        }

        Aws::String GetNameForContentRedactionOutput(ContentRedactionOutput enumValue)
        {
          switch(enumValue)
          {
          case ContentRedactionOutput::redacted:
            return "redacted";
          case ContentRedactionOutput::redacted_and_unredacted:
            return "redacted_and_unredacted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentRedactionOutputMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws

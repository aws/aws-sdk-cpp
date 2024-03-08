/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ContentRedactionType.h>
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
      namespace ContentRedactionTypeMapper
      {

        static const int PII_HASH = HashingUtils::HashString("PII");


        ContentRedactionType GetContentRedactionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PII_HASH)
          {
            return ContentRedactionType::PII;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentRedactionType>(hashCode);
          }

          return ContentRedactionType::NOT_SET;
        }

        Aws::String GetNameForContentRedactionType(ContentRedactionType enumValue)
        {
          switch(enumValue)
          {
          case ContentRedactionType::NOT_SET:
            return {};
          case ContentRedactionType::PII:
            return "PII";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentRedactionTypeMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws

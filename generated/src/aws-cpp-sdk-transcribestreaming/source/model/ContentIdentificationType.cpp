/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ContentIdentificationType.h>
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
      namespace ContentIdentificationTypeMapper
      {

        static const int PII_HASH = HashingUtils::HashString("PII");


        ContentIdentificationType GetContentIdentificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PII_HASH)
          {
            return ContentIdentificationType::PII;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentIdentificationType>(hashCode);
          }

          return ContentIdentificationType::NOT_SET;
        }

        Aws::String GetNameForContentIdentificationType(ContentIdentificationType enumValue)
        {
          switch(enumValue)
          {
          case ContentIdentificationType::NOT_SET:
            return {};
          case ContentIdentificationType::PII:
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

      } // namespace ContentIdentificationTypeMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/FieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace FieldTypeMapper
      {

        static const int SELECT_HASH = HashingUtils::HashString("SELECT");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");


        FieldType GetFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECT_HASH)
          {
            return FieldType::SELECT;
          }
          else if (hashCode == TEXT_HASH)
          {
            return FieldType::TEXT;
          }
          else if (hashCode == ATTACHMENT_HASH)
          {
            return FieldType::ATTACHMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldType>(hashCode);
          }

          return FieldType::NOT_SET;
        }

        Aws::String GetNameForFieldType(FieldType enumValue)
        {
          switch(enumValue)
          {
          case FieldType::NOT_SET:
            return {};
          case FieldType::SELECT:
            return "SELECT";
          case FieldType::TEXT:
            return "TEXT";
          case FieldType::ATTACHMENT:
            return "ATTACHMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldTypeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

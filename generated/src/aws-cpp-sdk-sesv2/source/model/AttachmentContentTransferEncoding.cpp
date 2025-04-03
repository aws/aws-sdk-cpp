/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/AttachmentContentTransferEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace AttachmentContentTransferEncodingMapper
      {

        static const int BASE64_HASH = HashingUtils::HashString("BASE64");
        static const int QUOTED_PRINTABLE_HASH = HashingUtils::HashString("QUOTED_PRINTABLE");
        static const int SEVEN_BIT_HASH = HashingUtils::HashString("SEVEN_BIT");


        AttachmentContentTransferEncoding GetAttachmentContentTransferEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASE64_HASH)
          {
            return AttachmentContentTransferEncoding::BASE64;
          }
          else if (hashCode == QUOTED_PRINTABLE_HASH)
          {
            return AttachmentContentTransferEncoding::QUOTED_PRINTABLE;
          }
          else if (hashCode == SEVEN_BIT_HASH)
          {
            return AttachmentContentTransferEncoding::SEVEN_BIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentContentTransferEncoding>(hashCode);
          }

          return AttachmentContentTransferEncoding::NOT_SET;
        }

        Aws::String GetNameForAttachmentContentTransferEncoding(AttachmentContentTransferEncoding enumValue)
        {
          switch(enumValue)
          {
          case AttachmentContentTransferEncoding::NOT_SET:
            return {};
          case AttachmentContentTransferEncoding::BASE64:
            return "BASE64";
          case AttachmentContentTransferEncoding::QUOTED_PRINTABLE:
            return "QUOTED_PRINTABLE";
          case AttachmentContentTransferEncoding::SEVEN_BIT:
            return "SEVEN_BIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentContentTransferEncodingMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

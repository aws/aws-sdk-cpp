/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/AttachmentContentDisposition.h>
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
      namespace AttachmentContentDispositionMapper
      {

        static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");
        static const int INLINE_HASH = HashingUtils::HashString("INLINE");


        AttachmentContentDisposition GetAttachmentContentDispositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTACHMENT_HASH)
          {
            return AttachmentContentDisposition::ATTACHMENT;
          }
          else if (hashCode == INLINE_HASH)
          {
            return AttachmentContentDisposition::INLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentContentDisposition>(hashCode);
          }

          return AttachmentContentDisposition::NOT_SET;
        }

        Aws::String GetNameForAttachmentContentDisposition(AttachmentContentDisposition enumValue)
        {
          switch(enumValue)
          {
          case AttachmentContentDisposition::NOT_SET:
            return {};
          case AttachmentContentDisposition::ATTACHMENT:
            return "ATTACHMENT";
          case AttachmentContentDisposition::INLINE:
            return "INLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentContentDispositionMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

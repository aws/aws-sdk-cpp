/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentStatus.h>
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
      namespace DocumentStatusMapper
      {

        static const int RECEIVED_HASH = HashingUtils::HashString("RECEIVED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int INDEXED_HASH = HashingUtils::HashString("INDEXED");
        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DOCUMENT_FAILED_TO_INDEX_HASH = HashingUtils::HashString("DOCUMENT_FAILED_TO_INDEX");


        DocumentStatus GetDocumentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECEIVED_HASH)
          {
            return DocumentStatus::RECEIVED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return DocumentStatus::PROCESSING;
          }
          else if (hashCode == INDEXED_HASH)
          {
            return DocumentStatus::INDEXED;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return DocumentStatus::UPDATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DocumentStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DocumentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DocumentStatus::DELETED;
          }
          else if (hashCode == DOCUMENT_FAILED_TO_INDEX_HASH)
          {
            return DocumentStatus::DOCUMENT_FAILED_TO_INDEX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentStatus>(hashCode);
          }

          return DocumentStatus::NOT_SET;
        }

        Aws::String GetNameForDocumentStatus(DocumentStatus enumValue)
        {
          switch(enumValue)
          {
          case DocumentStatus::NOT_SET:
            return {};
          case DocumentStatus::RECEIVED:
            return "RECEIVED";
          case DocumentStatus::PROCESSING:
            return "PROCESSING";
          case DocumentStatus::INDEXED:
            return "INDEXED";
          case DocumentStatus::UPDATED:
            return "UPDATED";
          case DocumentStatus::FAILED:
            return "FAILED";
          case DocumentStatus::DELETING:
            return "DELETING";
          case DocumentStatus::DELETED:
            return "DELETED";
          case DocumentStatus::DOCUMENT_FAILED_TO_INDEX:
            return "DOCUMENT_FAILED_TO_INDEX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

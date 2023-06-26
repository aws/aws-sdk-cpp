/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        DocumentStatus GetDocumentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return DocumentStatus::Creating;
          }
          else if (hashCode == Active_HASH)
          {
            return DocumentStatus::Active;
          }
          else if (hashCode == Updating_HASH)
          {
            return DocumentStatus::Updating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return DocumentStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return DocumentStatus::Failed;
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
          case DocumentStatus::Creating:
            return "Creating";
          case DocumentStatus::Active:
            return "Active";
          case DocumentStatus::Updating:
            return "Updating";
          case DocumentStatus::Deleting:
            return "Deleting";
          case DocumentStatus::Failed:
            return "Failed";
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
  } // namespace SSM
} // namespace Aws

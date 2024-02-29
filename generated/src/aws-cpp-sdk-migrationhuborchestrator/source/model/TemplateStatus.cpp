/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/TemplateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace TemplateStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int PENDING_CREATION_HASH = HashingUtils::HashString("PENDING_CREATION");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");


        TemplateStatus GetTemplateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return TemplateStatus::CREATED;
          }
          else if (hashCode == READY_HASH)
          {
            return TemplateStatus::READY;
          }
          else if (hashCode == PENDING_CREATION_HASH)
          {
            return TemplateStatus::PENDING_CREATION;
          }
          else if (hashCode == CREATING_HASH)
          {
            return TemplateStatus::CREATING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return TemplateStatus::CREATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateStatus>(hashCode);
          }

          return TemplateStatus::NOT_SET;
        }

        Aws::String GetNameForTemplateStatus(TemplateStatus enumValue)
        {
          switch(enumValue)
          {
          case TemplateStatus::NOT_SET:
            return {};
          case TemplateStatus::CREATED:
            return "CREATED";
          case TemplateStatus::READY:
            return "READY";
          case TemplateStatus::PENDING_CREATION:
            return "PENDING_CREATION";
          case TemplateStatus::CREATING:
            return "CREATING";
          case TemplateStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateStatusMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws

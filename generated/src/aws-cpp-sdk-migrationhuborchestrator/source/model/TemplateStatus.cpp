﻿/**
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


        TemplateStatus GetTemplateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return TemplateStatus::CREATED;
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

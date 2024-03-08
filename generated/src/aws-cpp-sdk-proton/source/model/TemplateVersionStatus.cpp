/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/TemplateVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace TemplateVersionStatusMapper
      {

        static const int REGISTRATION_IN_PROGRESS_HASH = HashingUtils::HashString("REGISTRATION_IN_PROGRESS");
        static const int REGISTRATION_FAILED_HASH = HashingUtils::HashString("REGISTRATION_FAILED");
        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");


        TemplateVersionStatus GetTemplateVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTRATION_IN_PROGRESS_HASH)
          {
            return TemplateVersionStatus::REGISTRATION_IN_PROGRESS;
          }
          else if (hashCode == REGISTRATION_FAILED_HASH)
          {
            return TemplateVersionStatus::REGISTRATION_FAILED;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return TemplateVersionStatus::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return TemplateVersionStatus::PUBLISHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateVersionStatus>(hashCode);
          }

          return TemplateVersionStatus::NOT_SET;
        }

        Aws::String GetNameForTemplateVersionStatus(TemplateVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case TemplateVersionStatus::NOT_SET:
            return {};
          case TemplateVersionStatus::REGISTRATION_IN_PROGRESS:
            return "REGISTRATION_IN_PROGRESS";
          case TemplateVersionStatus::REGISTRATION_FAILED:
            return "REGISTRATION_FAILED";
          case TemplateVersionStatus::DRAFT:
            return "DRAFT";
          case TemplateVersionStatus::PUBLISHED:
            return "PUBLISHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateVersionStatusMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws

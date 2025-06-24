/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfNumberField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace OcsfNumberFieldMapper
      {

        static const int activity_id_HASH = HashingUtils::HashString("activity_id");
        static const int compliance_status_id_HASH = HashingUtils::HashString("compliance.status_id");
        static const int confidence_score_HASH = HashingUtils::HashString("confidence_score");
        static const int severity_id_HASH = HashingUtils::HashString("severity_id");
        static const int status_id_HASH = HashingUtils::HashString("status_id");
        static const int finding_info_related_events_count_HASH = HashingUtils::HashString("finding_info.related_events_count");


        OcsfNumberField GetOcsfNumberFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == activity_id_HASH)
          {
            return OcsfNumberField::activity_id;
          }
          else if (hashCode == compliance_status_id_HASH)
          {
            return OcsfNumberField::compliance_status_id;
          }
          else if (hashCode == confidence_score_HASH)
          {
            return OcsfNumberField::confidence_score;
          }
          else if (hashCode == severity_id_HASH)
          {
            return OcsfNumberField::severity_id;
          }
          else if (hashCode == status_id_HASH)
          {
            return OcsfNumberField::status_id;
          }
          else if (hashCode == finding_info_related_events_count_HASH)
          {
            return OcsfNumberField::finding_info_related_events_count;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfNumberField>(hashCode);
          }

          return OcsfNumberField::NOT_SET;
        }

        Aws::String GetNameForOcsfNumberField(OcsfNumberField enumValue)
        {
          switch(enumValue)
          {
          case OcsfNumberField::NOT_SET:
            return {};
          case OcsfNumberField::activity_id:
            return "activity_id";
          case OcsfNumberField::compliance_status_id:
            return "compliance.status_id";
          case OcsfNumberField::confidence_score:
            return "confidence_score";
          case OcsfNumberField::severity_id:
            return "severity_id";
          case OcsfNumberField::status_id:
            return "status_id";
          case OcsfNumberField::finding_info_related_events_count:
            return "finding_info.related_events_count";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OcsfNumberFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

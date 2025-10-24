/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfDateField.h>
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
      namespace OcsfDateFieldMapper
      {

        static const int finding_info_created_time_dt_HASH = HashingUtils::HashString("finding_info.created_time_dt");
        static const int finding_info_first_seen_time_dt_HASH = HashingUtils::HashString("finding_info.first_seen_time_dt");
        static const int finding_info_last_seen_time_dt_HASH = HashingUtils::HashString("finding_info.last_seen_time_dt");
        static const int finding_info_modified_time_dt_HASH = HashingUtils::HashString("finding_info.modified_time_dt");
        static const int resources_image_created_time_dt_HASH = HashingUtils::HashString("resources.image.created_time_dt");
        static const int resources_image_last_used_time_dt_HASH = HashingUtils::HashString("resources.image.last_used_time_dt");
        static const int resources_modified_time_dt_HASH = HashingUtils::HashString("resources.modified_time_dt");


        OcsfDateField GetOcsfDateFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == finding_info_created_time_dt_HASH)
          {
            return OcsfDateField::finding_info_created_time_dt;
          }
          else if (hashCode == finding_info_first_seen_time_dt_HASH)
          {
            return OcsfDateField::finding_info_first_seen_time_dt;
          }
          else if (hashCode == finding_info_last_seen_time_dt_HASH)
          {
            return OcsfDateField::finding_info_last_seen_time_dt;
          }
          else if (hashCode == finding_info_modified_time_dt_HASH)
          {
            return OcsfDateField::finding_info_modified_time_dt;
          }
          else if (hashCode == resources_image_created_time_dt_HASH)
          {
            return OcsfDateField::resources_image_created_time_dt;
          }
          else if (hashCode == resources_image_last_used_time_dt_HASH)
          {
            return OcsfDateField::resources_image_last_used_time_dt;
          }
          else if (hashCode == resources_modified_time_dt_HASH)
          {
            return OcsfDateField::resources_modified_time_dt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfDateField>(hashCode);
          }

          return OcsfDateField::NOT_SET;
        }

        Aws::String GetNameForOcsfDateField(OcsfDateField enumValue)
        {
          switch(enumValue)
          {
          case OcsfDateField::NOT_SET:
            return {};
          case OcsfDateField::finding_info_created_time_dt:
            return "finding_info.created_time_dt";
          case OcsfDateField::finding_info_first_seen_time_dt:
            return "finding_info.first_seen_time_dt";
          case OcsfDateField::finding_info_last_seen_time_dt:
            return "finding_info.last_seen_time_dt";
          case OcsfDateField::finding_info_modified_time_dt:
            return "finding_info.modified_time_dt";
          case OcsfDateField::resources_image_created_time_dt:
            return "resources.image.created_time_dt";
          case OcsfDateField::resources_image_last_used_time_dt:
            return "resources.image.last_used_time_dt";
          case OcsfDateField::resources_modified_time_dt:
            return "resources.modified_time_dt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OcsfDateFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

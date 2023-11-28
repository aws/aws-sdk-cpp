/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/WebExperienceStatus.h>
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
      namespace WebExperienceStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PENDING_AUTH_CONFIG_HASH = HashingUtils::HashString("PENDING_AUTH_CONFIG");


        WebExperienceStatus GetWebExperienceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WebExperienceStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WebExperienceStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WebExperienceStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WebExperienceStatus::FAILED;
          }
          else if (hashCode == PENDING_AUTH_CONFIG_HASH)
          {
            return WebExperienceStatus::PENDING_AUTH_CONFIG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebExperienceStatus>(hashCode);
          }

          return WebExperienceStatus::NOT_SET;
        }

        Aws::String GetNameForWebExperienceStatus(WebExperienceStatus enumValue)
        {
          switch(enumValue)
          {
          case WebExperienceStatus::NOT_SET:
            return {};
          case WebExperienceStatus::CREATING:
            return "CREATING";
          case WebExperienceStatus::ACTIVE:
            return "ACTIVE";
          case WebExperienceStatus::DELETING:
            return "DELETING";
          case WebExperienceStatus::FAILED:
            return "FAILED";
          case WebExperienceStatus::PENDING_AUTH_CONFIG:
            return "PENDING_AUTH_CONFIG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebExperienceStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

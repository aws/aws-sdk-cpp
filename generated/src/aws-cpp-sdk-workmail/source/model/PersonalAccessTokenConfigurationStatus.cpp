/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PersonalAccessTokenConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace PersonalAccessTokenConfigurationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        PersonalAccessTokenConfigurationStatus GetPersonalAccessTokenConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return PersonalAccessTokenConfigurationStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return PersonalAccessTokenConfigurationStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersonalAccessTokenConfigurationStatus>(hashCode);
          }

          return PersonalAccessTokenConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForPersonalAccessTokenConfigurationStatus(PersonalAccessTokenConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case PersonalAccessTokenConfigurationStatus::NOT_SET:
            return {};
          case PersonalAccessTokenConfigurationStatus::ACTIVE:
            return "ACTIVE";
          case PersonalAccessTokenConfigurationStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersonalAccessTokenConfigurationStatusMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws

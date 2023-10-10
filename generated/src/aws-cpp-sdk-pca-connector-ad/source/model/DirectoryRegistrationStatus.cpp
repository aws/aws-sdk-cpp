/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/DirectoryRegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace DirectoryRegistrationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DirectoryRegistrationStatus GetDirectoryRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DirectoryRegistrationStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DirectoryRegistrationStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DirectoryRegistrationStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DirectoryRegistrationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryRegistrationStatus>(hashCode);
          }

          return DirectoryRegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForDirectoryRegistrationStatus(DirectoryRegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case DirectoryRegistrationStatus::NOT_SET:
            return {};
          case DirectoryRegistrationStatus::CREATING:
            return "CREATING";
          case DirectoryRegistrationStatus::ACTIVE:
            return "ACTIVE";
          case DirectoryRegistrationStatus::DELETING:
            return "DELETING";
          case DirectoryRegistrationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryRegistrationStatusMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws

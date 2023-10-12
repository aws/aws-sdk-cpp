/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/DirectoryRegistrationStatusReason.h>
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
      namespace DirectoryRegistrationStatusReasonMapper
      {

        static constexpr uint32_t DIRECTORY_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("DIRECTORY_ACCESS_DENIED");
        static constexpr uint32_t DIRECTORY_RESOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("DIRECTORY_RESOURCE_NOT_FOUND");
        static constexpr uint32_t DIRECTORY_NOT_ACTIVE_HASH = ConstExprHashingUtils::HashString("DIRECTORY_NOT_ACTIVE");
        static constexpr uint32_t DIRECTORY_NOT_REACHABLE_HASH = ConstExprHashingUtils::HashString("DIRECTORY_NOT_REACHABLE");
        static constexpr uint32_t DIRECTORY_TYPE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("DIRECTORY_TYPE_NOT_SUPPORTED");
        static constexpr uint32_t INTERNAL_FAILURE_HASH = ConstExprHashingUtils::HashString("INTERNAL_FAILURE");


        DirectoryRegistrationStatusReason GetDirectoryRegistrationStatusReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECTORY_ACCESS_DENIED_HASH)
          {
            return DirectoryRegistrationStatusReason::DIRECTORY_ACCESS_DENIED;
          }
          else if (hashCode == DIRECTORY_RESOURCE_NOT_FOUND_HASH)
          {
            return DirectoryRegistrationStatusReason::DIRECTORY_RESOURCE_NOT_FOUND;
          }
          else if (hashCode == DIRECTORY_NOT_ACTIVE_HASH)
          {
            return DirectoryRegistrationStatusReason::DIRECTORY_NOT_ACTIVE;
          }
          else if (hashCode == DIRECTORY_NOT_REACHABLE_HASH)
          {
            return DirectoryRegistrationStatusReason::DIRECTORY_NOT_REACHABLE;
          }
          else if (hashCode == DIRECTORY_TYPE_NOT_SUPPORTED_HASH)
          {
            return DirectoryRegistrationStatusReason::DIRECTORY_TYPE_NOT_SUPPORTED;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return DirectoryRegistrationStatusReason::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryRegistrationStatusReason>(hashCode);
          }

          return DirectoryRegistrationStatusReason::NOT_SET;
        }

        Aws::String GetNameForDirectoryRegistrationStatusReason(DirectoryRegistrationStatusReason enumValue)
        {
          switch(enumValue)
          {
          case DirectoryRegistrationStatusReason::NOT_SET:
            return {};
          case DirectoryRegistrationStatusReason::DIRECTORY_ACCESS_DENIED:
            return "DIRECTORY_ACCESS_DENIED";
          case DirectoryRegistrationStatusReason::DIRECTORY_RESOURCE_NOT_FOUND:
            return "DIRECTORY_RESOURCE_NOT_FOUND";
          case DirectoryRegistrationStatusReason::DIRECTORY_NOT_ACTIVE:
            return "DIRECTORY_NOT_ACTIVE";
          case DirectoryRegistrationStatusReason::DIRECTORY_NOT_REACHABLE:
            return "DIRECTORY_NOT_REACHABLE";
          case DirectoryRegistrationStatusReason::DIRECTORY_TYPE_NOT_SUPPORTED:
            return "DIRECTORY_TYPE_NOT_SUPPORTED";
          case DirectoryRegistrationStatusReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryRegistrationStatusReasonMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws

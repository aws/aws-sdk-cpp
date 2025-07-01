/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/OciOnboardingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace OciOnboardingStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int PENDING_LINK_GENERATION_HASH = HashingUtils::HashString("PENDING_LINK_GENERATION");
        static const int PENDING_CUSTOMER_ACTION_HASH = HashingUtils::HashString("PENDING_CUSTOMER_ACTION");
        static const int PENDING_INITIALIZATION_HASH = HashingUtils::HashString("PENDING_INITIALIZATION");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_IN_HOME_REGION_HASH = HashingUtils::HashString("ACTIVE_IN_HOME_REGION");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACTIVE_LIMITED_HASH = HashingUtils::HashString("ACTIVE_LIMITED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PUBLIC_OFFER_UNSUPPORTED_HASH = HashingUtils::HashString("PUBLIC_OFFER_UNSUPPORTED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        OciOnboardingStatus GetOciOnboardingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return OciOnboardingStatus::NOT_STARTED;
          }
          else if (hashCode == PENDING_LINK_GENERATION_HASH)
          {
            return OciOnboardingStatus::PENDING_LINK_GENERATION;
          }
          else if (hashCode == PENDING_CUSTOMER_ACTION_HASH)
          {
            return OciOnboardingStatus::PENDING_CUSTOMER_ACTION;
          }
          else if (hashCode == PENDING_INITIALIZATION_HASH)
          {
            return OciOnboardingStatus::PENDING_INITIALIZATION;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return OciOnboardingStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_IN_HOME_REGION_HASH)
          {
            return OciOnboardingStatus::ACTIVE_IN_HOME_REGION;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return OciOnboardingStatus::ACTIVE;
          }
          else if (hashCode == ACTIVE_LIMITED_HASH)
          {
            return OciOnboardingStatus::ACTIVE_LIMITED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OciOnboardingStatus::FAILED;
          }
          else if (hashCode == PUBLIC_OFFER_UNSUPPORTED_HASH)
          {
            return OciOnboardingStatus::PUBLIC_OFFER_UNSUPPORTED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return OciOnboardingStatus::SUSPENDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return OciOnboardingStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OciOnboardingStatus>(hashCode);
          }

          return OciOnboardingStatus::NOT_SET;
        }

        Aws::String GetNameForOciOnboardingStatus(OciOnboardingStatus enumValue)
        {
          switch(enumValue)
          {
          case OciOnboardingStatus::NOT_SET:
            return {};
          case OciOnboardingStatus::NOT_STARTED:
            return "NOT_STARTED";
          case OciOnboardingStatus::PENDING_LINK_GENERATION:
            return "PENDING_LINK_GENERATION";
          case OciOnboardingStatus::PENDING_CUSTOMER_ACTION:
            return "PENDING_CUSTOMER_ACTION";
          case OciOnboardingStatus::PENDING_INITIALIZATION:
            return "PENDING_INITIALIZATION";
          case OciOnboardingStatus::ACTIVATING:
            return "ACTIVATING";
          case OciOnboardingStatus::ACTIVE_IN_HOME_REGION:
            return "ACTIVE_IN_HOME_REGION";
          case OciOnboardingStatus::ACTIVE:
            return "ACTIVE";
          case OciOnboardingStatus::ACTIVE_LIMITED:
            return "ACTIVE_LIMITED";
          case OciOnboardingStatus::FAILED:
            return "FAILED";
          case OciOnboardingStatus::PUBLIC_OFFER_UNSUPPORTED:
            return "PUBLIC_OFFER_UNSUPPORTED";
          case OciOnboardingStatus::SUSPENDED:
            return "SUSPENDED";
          case OciOnboardingStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OciOnboardingStatusMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws

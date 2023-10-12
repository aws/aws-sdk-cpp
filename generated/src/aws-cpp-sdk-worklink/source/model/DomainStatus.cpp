/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/DomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkLink
  {
    namespace Model
    {
      namespace DomainStatusMapper
      {

        static constexpr uint32_t PENDING_VALIDATION_HASH = ConstExprHashingUtils::HashString("PENDING_VALIDATION");
        static constexpr uint32_t ASSOCIATING_HASH = ConstExprHashingUtils::HashString("ASSOCIATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t DISASSOCIATING_HASH = ConstExprHashingUtils::HashString("DISASSOCIATING");
        static constexpr uint32_t DISASSOCIATED_HASH = ConstExprHashingUtils::HashString("DISASSOCIATED");
        static constexpr uint32_t FAILED_TO_ASSOCIATE_HASH = ConstExprHashingUtils::HashString("FAILED_TO_ASSOCIATE");
        static constexpr uint32_t FAILED_TO_DISASSOCIATE_HASH = ConstExprHashingUtils::HashString("FAILED_TO_DISASSOCIATE");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return DomainStatus::PENDING_VALIDATION;
          }
          else if (hashCode == ASSOCIATING_HASH)
          {
            return DomainStatus::ASSOCIATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DomainStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return DomainStatus::INACTIVE;
          }
          else if (hashCode == DISASSOCIATING_HASH)
          {
            return DomainStatus::DISASSOCIATING;
          }
          else if (hashCode == DISASSOCIATED_HASH)
          {
            return DomainStatus::DISASSOCIATED;
          }
          else if (hashCode == FAILED_TO_ASSOCIATE_HASH)
          {
            return DomainStatus::FAILED_TO_ASSOCIATE;
          }
          else if (hashCode == FAILED_TO_DISASSOCIATE_HASH)
          {
            return DomainStatus::FAILED_TO_DISASSOCIATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::NOT_SET:
            return {};
          case DomainStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case DomainStatus::ASSOCIATING:
            return "ASSOCIATING";
          case DomainStatus::ACTIVE:
            return "ACTIVE";
          case DomainStatus::INACTIVE:
            return "INACTIVE";
          case DomainStatus::DISASSOCIATING:
            return "DISASSOCIATING";
          case DomainStatus::DISASSOCIATED:
            return "DISASSOCIATED";
          case DomainStatus::FAILED_TO_ASSOCIATE:
            return "FAILED_TO_ASSOCIATE";
          case DomainStatus::FAILED_TO_DISASSOCIATE:
            return "FAILED_TO_DISASSOCIATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace WorkLink
} // namespace Aws

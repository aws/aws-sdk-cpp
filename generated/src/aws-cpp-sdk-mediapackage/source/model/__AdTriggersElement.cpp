/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/__AdTriggersElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace __AdTriggersElementMapper
      {

        static constexpr uint32_t SPLICE_INSERT_HASH = ConstExprHashingUtils::HashString("SPLICE_INSERT");
        static constexpr uint32_t BREAK_HASH = ConstExprHashingUtils::HashString("BREAK");
        static constexpr uint32_t PROVIDER_ADVERTISEMENT_HASH = ConstExprHashingUtils::HashString("PROVIDER_ADVERTISEMENT");
        static constexpr uint32_t DISTRIBUTOR_ADVERTISEMENT_HASH = ConstExprHashingUtils::HashString("DISTRIBUTOR_ADVERTISEMENT");
        static constexpr uint32_t PROVIDER_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("PROVIDER_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("DISTRIBUTOR_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY");


        __AdTriggersElement Get__AdTriggersElementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPLICE_INSERT_HASH)
          {
            return __AdTriggersElement::SPLICE_INSERT;
          }
          else if (hashCode == BREAK_HASH)
          {
            return __AdTriggersElement::BREAK;
          }
          else if (hashCode == PROVIDER_ADVERTISEMENT_HASH)
          {
            return __AdTriggersElement::PROVIDER_ADVERTISEMENT;
          }
          else if (hashCode == DISTRIBUTOR_ADVERTISEMENT_HASH)
          {
            return __AdTriggersElement::DISTRIBUTOR_ADVERTISEMENT;
          }
          else if (hashCode == PROVIDER_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::PROVIDER_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::DISTRIBUTOR_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<__AdTriggersElement>(hashCode);
          }

          return __AdTriggersElement::NOT_SET;
        }

        Aws::String GetNameFor__AdTriggersElement(__AdTriggersElement enumValue)
        {
          switch(enumValue)
          {
          case __AdTriggersElement::NOT_SET:
            return {};
          case __AdTriggersElement::SPLICE_INSERT:
            return "SPLICE_INSERT";
          case __AdTriggersElement::BREAK:
            return "BREAK";
          case __AdTriggersElement::PROVIDER_ADVERTISEMENT:
            return "PROVIDER_ADVERTISEMENT";
          case __AdTriggersElement::DISTRIBUTOR_ADVERTISEMENT:
            return "DISTRIBUTOR_ADVERTISEMENT";
          case __AdTriggersElement::PROVIDER_PLACEMENT_OPPORTUNITY:
            return "PROVIDER_PLACEMENT_OPPORTUNITY";
          case __AdTriggersElement::DISTRIBUTOR_PLACEMENT_OPPORTUNITY:
            return "DISTRIBUTOR_PLACEMENT_OPPORTUNITY";
          case __AdTriggersElement::PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY:
            return "PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY";
          case __AdTriggersElement::DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY:
            return "DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace __AdTriggersElementMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws

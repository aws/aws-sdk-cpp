/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ScteFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace ScteFilterMapper
      {

        static constexpr uint32_t SPLICE_INSERT_HASH = ConstExprHashingUtils::HashString("SPLICE_INSERT");
        static constexpr uint32_t BREAK_HASH = ConstExprHashingUtils::HashString("BREAK");
        static constexpr uint32_t PROVIDER_ADVERTISEMENT_HASH = ConstExprHashingUtils::HashString("PROVIDER_ADVERTISEMENT");
        static constexpr uint32_t DISTRIBUTOR_ADVERTISEMENT_HASH = ConstExprHashingUtils::HashString("DISTRIBUTOR_ADVERTISEMENT");
        static constexpr uint32_t PROVIDER_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("PROVIDER_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("DISTRIBUTOR_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = ConstExprHashingUtils::HashString("DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY");
        static constexpr uint32_t PROGRAM_HASH = ConstExprHashingUtils::HashString("PROGRAM");


        ScteFilter GetScteFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPLICE_INSERT_HASH)
          {
            return ScteFilter::SPLICE_INSERT;
          }
          else if (hashCode == BREAK_HASH)
          {
            return ScteFilter::BREAK;
          }
          else if (hashCode == PROVIDER_ADVERTISEMENT_HASH)
          {
            return ScteFilter::PROVIDER_ADVERTISEMENT;
          }
          else if (hashCode == DISTRIBUTOR_ADVERTISEMENT_HASH)
          {
            return ScteFilter::DISTRIBUTOR_ADVERTISEMENT;
          }
          else if (hashCode == PROVIDER_PLACEMENT_OPPORTUNITY_HASH)
          {
            return ScteFilter::PROVIDER_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH)
          {
            return ScteFilter::DISTRIBUTOR_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH)
          {
            return ScteFilter::PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH)
          {
            return ScteFilter::DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == PROGRAM_HASH)
          {
            return ScteFilter::PROGRAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScteFilter>(hashCode);
          }

          return ScteFilter::NOT_SET;
        }

        Aws::String GetNameForScteFilter(ScteFilter enumValue)
        {
          switch(enumValue)
          {
          case ScteFilter::NOT_SET:
            return {};
          case ScteFilter::SPLICE_INSERT:
            return "SPLICE_INSERT";
          case ScteFilter::BREAK:
            return "BREAK";
          case ScteFilter::PROVIDER_ADVERTISEMENT:
            return "PROVIDER_ADVERTISEMENT";
          case ScteFilter::DISTRIBUTOR_ADVERTISEMENT:
            return "DISTRIBUTOR_ADVERTISEMENT";
          case ScteFilter::PROVIDER_PLACEMENT_OPPORTUNITY:
            return "PROVIDER_PLACEMENT_OPPORTUNITY";
          case ScteFilter::DISTRIBUTOR_PLACEMENT_OPPORTUNITY:
            return "DISTRIBUTOR_PLACEMENT_OPPORTUNITY";
          case ScteFilter::PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY:
            return "PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY";
          case ScteFilter::DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY:
            return "DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY";
          case ScteFilter::PROGRAM:
            return "PROGRAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScteFilterMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

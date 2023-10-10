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

        static const int SPLICE_INSERT_HASH = HashingUtils::HashString("SPLICE_INSERT");
        static const int BREAK_HASH = HashingUtils::HashString("BREAK");
        static const int PROVIDER_ADVERTISEMENT_HASH = HashingUtils::HashString("PROVIDER_ADVERTISEMENT");
        static const int DISTRIBUTOR_ADVERTISEMENT_HASH = HashingUtils::HashString("DISTRIBUTOR_ADVERTISEMENT");
        static const int PROVIDER_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("PROVIDER_PLACEMENT_OPPORTUNITY");
        static const int DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("DISTRIBUTOR_PLACEMENT_OPPORTUNITY");
        static const int PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY");
        static const int DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY");
        static const int PROGRAM_HASH = HashingUtils::HashString("PROGRAM");


        ScteFilter GetScteFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

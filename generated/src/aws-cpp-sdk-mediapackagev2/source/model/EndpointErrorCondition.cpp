/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/EndpointErrorCondition.h>
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
      namespace EndpointErrorConditionMapper
      {

        static const int STALE_MANIFEST_HASH = HashingUtils::HashString("STALE_MANIFEST");
        static const int INCOMPLETE_MANIFEST_HASH = HashingUtils::HashString("INCOMPLETE_MANIFEST");
        static const int MISSING_DRM_KEY_HASH = HashingUtils::HashString("MISSING_DRM_KEY");
        static const int SLATE_INPUT_HASH = HashingUtils::HashString("SLATE_INPUT");


        EndpointErrorCondition GetEndpointErrorConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STALE_MANIFEST_HASH)
          {
            return EndpointErrorCondition::STALE_MANIFEST;
          }
          else if (hashCode == INCOMPLETE_MANIFEST_HASH)
          {
            return EndpointErrorCondition::INCOMPLETE_MANIFEST;
          }
          else if (hashCode == MISSING_DRM_KEY_HASH)
          {
            return EndpointErrorCondition::MISSING_DRM_KEY;
          }
          else if (hashCode == SLATE_INPUT_HASH)
          {
            return EndpointErrorCondition::SLATE_INPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointErrorCondition>(hashCode);
          }

          return EndpointErrorCondition::NOT_SET;
        }

        Aws::String GetNameForEndpointErrorCondition(EndpointErrorCondition enumValue)
        {
          switch(enumValue)
          {
          case EndpointErrorCondition::NOT_SET:
            return {};
          case EndpointErrorCondition::STALE_MANIFEST:
            return "STALE_MANIFEST";
          case EndpointErrorCondition::INCOMPLETE_MANIFEST:
            return "INCOMPLETE_MANIFEST";
          case EndpointErrorCondition::MISSING_DRM_KEY:
            return "MISSING_DRM_KEY";
          case EndpointErrorCondition::SLATE_INPUT:
            return "SLATE_INPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointErrorConditionMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

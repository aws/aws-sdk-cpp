/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StudioWebPortal.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace StudioWebPortalMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        StudioWebPortal GetStudioWebPortalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return StudioWebPortal::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return StudioWebPortal::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioWebPortal>(hashCode);
          }

          return StudioWebPortal::NOT_SET;
        }

        Aws::String GetNameForStudioWebPortal(StudioWebPortal enumValue)
        {
          switch(enumValue)
          {
          case StudioWebPortal::NOT_SET:
            return {};
          case StudioWebPortal::ENABLED:
            return "ENABLED";
          case StudioWebPortal::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioWebPortalMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

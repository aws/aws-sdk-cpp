/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashDrmSignaling.h>
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
      namespace DashDrmSignalingMapper
      {

        static const int INDIVIDUAL_HASH = HashingUtils::HashString("INDIVIDUAL");
        static const int REFERENCED_HASH = HashingUtils::HashString("REFERENCED");


        DashDrmSignaling GetDashDrmSignalingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDIVIDUAL_HASH)
          {
            return DashDrmSignaling::INDIVIDUAL;
          }
          else if (hashCode == REFERENCED_HASH)
          {
            return DashDrmSignaling::REFERENCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashDrmSignaling>(hashCode);
          }

          return DashDrmSignaling::NOT_SET;
        }

        Aws::String GetNameForDashDrmSignaling(DashDrmSignaling enumValue)
        {
          switch(enumValue)
          {
          case DashDrmSignaling::NOT_SET:
            return {};
          case DashDrmSignaling::INDIVIDUAL:
            return "INDIVIDUAL";
          case DashDrmSignaling::REFERENCED:
            return "REFERENCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashDrmSignalingMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

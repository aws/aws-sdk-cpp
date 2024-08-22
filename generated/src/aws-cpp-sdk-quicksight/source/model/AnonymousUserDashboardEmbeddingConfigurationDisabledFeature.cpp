/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfigurationDisabledFeature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AnonymousUserDashboardEmbeddingConfigurationDisabledFeatureMapper
      {

        static const int SHARED_VIEW_HASH = HashingUtils::HashString("SHARED_VIEW");


        AnonymousUserDashboardEmbeddingConfigurationDisabledFeature GetAnonymousUserDashboardEmbeddingConfigurationDisabledFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_VIEW_HASH)
          {
            return AnonymousUserDashboardEmbeddingConfigurationDisabledFeature::SHARED_VIEW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>(hashCode);
          }

          return AnonymousUserDashboardEmbeddingConfigurationDisabledFeature::NOT_SET;
        }

        Aws::String GetNameForAnonymousUserDashboardEmbeddingConfigurationDisabledFeature(AnonymousUserDashboardEmbeddingConfigurationDisabledFeature enumValue)
        {
          switch(enumValue)
          {
          case AnonymousUserDashboardEmbeddingConfigurationDisabledFeature::NOT_SET:
            return {};
          case AnonymousUserDashboardEmbeddingConfigurationDisabledFeature::SHARED_VIEW:
            return "SHARED_VIEW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnonymousUserDashboardEmbeddingConfigurationDisabledFeatureMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

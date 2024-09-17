/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfigurationEnabledFeature.h>
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
      namespace AnonymousUserDashboardEmbeddingConfigurationEnabledFeatureMapper
      {

        static const int SHARED_VIEW_HASH = HashingUtils::HashString("SHARED_VIEW");


        AnonymousUserDashboardEmbeddingConfigurationEnabledFeature GetAnonymousUserDashboardEmbeddingConfigurationEnabledFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_VIEW_HASH)
          {
            return AnonymousUserDashboardEmbeddingConfigurationEnabledFeature::SHARED_VIEW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>(hashCode);
          }

          return AnonymousUserDashboardEmbeddingConfigurationEnabledFeature::NOT_SET;
        }

        Aws::String GetNameForAnonymousUserDashboardEmbeddingConfigurationEnabledFeature(AnonymousUserDashboardEmbeddingConfigurationEnabledFeature enumValue)
        {
          switch(enumValue)
          {
          case AnonymousUserDashboardEmbeddingConfigurationEnabledFeature::NOT_SET:
            return {};
          case AnonymousUserDashboardEmbeddingConfigurationEnabledFeature::SHARED_VIEW:
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

      } // namespace AnonymousUserDashboardEmbeddingConfigurationEnabledFeatureMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

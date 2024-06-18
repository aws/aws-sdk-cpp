/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrackingServerSize.h>
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
      namespace TrackingServerSizeMapper
      {

        static const int Small_HASH = HashingUtils::HashString("Small");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int Large_HASH = HashingUtils::HashString("Large");


        TrackingServerSize GetTrackingServerSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Small_HASH)
          {
            return TrackingServerSize::Small;
          }
          else if (hashCode == Medium_HASH)
          {
            return TrackingServerSize::Medium;
          }
          else if (hashCode == Large_HASH)
          {
            return TrackingServerSize::Large;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrackingServerSize>(hashCode);
          }

          return TrackingServerSize::NOT_SET;
        }

        Aws::String GetNameForTrackingServerSize(TrackingServerSize enumValue)
        {
          switch(enumValue)
          {
          case TrackingServerSize::NOT_SET:
            return {};
          case TrackingServerSize::Small:
            return "Small";
          case TrackingServerSize::Medium:
            return "Medium";
          case TrackingServerSize::Large:
            return "Large";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrackingServerSizeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

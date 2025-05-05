/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FrameMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace FrameMetricTypeMapper
      {

        static const int PSNR_HASH = HashingUtils::HashString("PSNR");
        static const int SSIM_HASH = HashingUtils::HashString("SSIM");
        static const int MS_SSIM_HASH = HashingUtils::HashString("MS_SSIM");
        static const int PSNR_HVS_HASH = HashingUtils::HashString("PSNR_HVS");
        static const int VMAF_HASH = HashingUtils::HashString("VMAF");
        static const int QVBR_HASH = HashingUtils::HashString("QVBR");


        FrameMetricType GetFrameMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PSNR_HASH)
          {
            return FrameMetricType::PSNR;
          }
          else if (hashCode == SSIM_HASH)
          {
            return FrameMetricType::SSIM;
          }
          else if (hashCode == MS_SSIM_HASH)
          {
            return FrameMetricType::MS_SSIM;
          }
          else if (hashCode == PSNR_HVS_HASH)
          {
            return FrameMetricType::PSNR_HVS;
          }
          else if (hashCode == VMAF_HASH)
          {
            return FrameMetricType::VMAF;
          }
          else if (hashCode == QVBR_HASH)
          {
            return FrameMetricType::QVBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FrameMetricType>(hashCode);
          }

          return FrameMetricType::NOT_SET;
        }

        Aws::String GetNameForFrameMetricType(FrameMetricType enumValue)
        {
          switch(enumValue)
          {
          case FrameMetricType::NOT_SET:
            return {};
          case FrameMetricType::PSNR:
            return "PSNR";
          case FrameMetricType::SSIM:
            return "SSIM";
          case FrameMetricType::MS_SSIM:
            return "MS_SSIM";
          case FrameMetricType::PSNR_HVS:
            return "PSNR_HVS";
          case FrameMetricType::VMAF:
            return "VMAF";
          case FrameMetricType::QVBR:
            return "QVBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrameMetricTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TargetDevice.h>
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
      namespace TargetDeviceMapper
      {

        static constexpr uint32_t lambda_HASH = ConstExprHashingUtils::HashString("lambda");
        static constexpr uint32_t ml_m4_HASH = ConstExprHashingUtils::HashString("ml_m4");
        static constexpr uint32_t ml_m5_HASH = ConstExprHashingUtils::HashString("ml_m5");
        static constexpr uint32_t ml_c4_HASH = ConstExprHashingUtils::HashString("ml_c4");
        static constexpr uint32_t ml_c5_HASH = ConstExprHashingUtils::HashString("ml_c5");
        static constexpr uint32_t ml_p2_HASH = ConstExprHashingUtils::HashString("ml_p2");
        static constexpr uint32_t ml_p3_HASH = ConstExprHashingUtils::HashString("ml_p3");
        static constexpr uint32_t ml_g4dn_HASH = ConstExprHashingUtils::HashString("ml_g4dn");
        static constexpr uint32_t ml_inf1_HASH = ConstExprHashingUtils::HashString("ml_inf1");
        static constexpr uint32_t ml_inf2_HASH = ConstExprHashingUtils::HashString("ml_inf2");
        static constexpr uint32_t ml_trn1_HASH = ConstExprHashingUtils::HashString("ml_trn1");
        static constexpr uint32_t ml_eia2_HASH = ConstExprHashingUtils::HashString("ml_eia2");
        static constexpr uint32_t jetson_tx1_HASH = ConstExprHashingUtils::HashString("jetson_tx1");
        static constexpr uint32_t jetson_tx2_HASH = ConstExprHashingUtils::HashString("jetson_tx2");
        static constexpr uint32_t jetson_nano_HASH = ConstExprHashingUtils::HashString("jetson_nano");
        static constexpr uint32_t jetson_xavier_HASH = ConstExprHashingUtils::HashString("jetson_xavier");
        static constexpr uint32_t rasp3b_HASH = ConstExprHashingUtils::HashString("rasp3b");
        static constexpr uint32_t imx8qm_HASH = ConstExprHashingUtils::HashString("imx8qm");
        static constexpr uint32_t deeplens_HASH = ConstExprHashingUtils::HashString("deeplens");
        static constexpr uint32_t rk3399_HASH = ConstExprHashingUtils::HashString("rk3399");
        static constexpr uint32_t rk3288_HASH = ConstExprHashingUtils::HashString("rk3288");
        static constexpr uint32_t aisage_HASH = ConstExprHashingUtils::HashString("aisage");
        static constexpr uint32_t sbe_c_HASH = ConstExprHashingUtils::HashString("sbe_c");
        static constexpr uint32_t qcs605_HASH = ConstExprHashingUtils::HashString("qcs605");
        static constexpr uint32_t qcs603_HASH = ConstExprHashingUtils::HashString("qcs603");
        static constexpr uint32_t sitara_am57x_HASH = ConstExprHashingUtils::HashString("sitara_am57x");
        static constexpr uint32_t amba_cv2_HASH = ConstExprHashingUtils::HashString("amba_cv2");
        static constexpr uint32_t amba_cv22_HASH = ConstExprHashingUtils::HashString("amba_cv22");
        static constexpr uint32_t amba_cv25_HASH = ConstExprHashingUtils::HashString("amba_cv25");
        static constexpr uint32_t x86_win32_HASH = ConstExprHashingUtils::HashString("x86_win32");
        static constexpr uint32_t x86_win64_HASH = ConstExprHashingUtils::HashString("x86_win64");
        static constexpr uint32_t coreml_HASH = ConstExprHashingUtils::HashString("coreml");
        static constexpr uint32_t jacinto_tda4vm_HASH = ConstExprHashingUtils::HashString("jacinto_tda4vm");
        static constexpr uint32_t imx8mplus_HASH = ConstExprHashingUtils::HashString("imx8mplus");


        TargetDevice GetTargetDeviceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lambda_HASH)
          {
            return TargetDevice::lambda;
          }
          else if (hashCode == ml_m4_HASH)
          {
            return TargetDevice::ml_m4;
          }
          else if (hashCode == ml_m5_HASH)
          {
            return TargetDevice::ml_m5;
          }
          else if (hashCode == ml_c4_HASH)
          {
            return TargetDevice::ml_c4;
          }
          else if (hashCode == ml_c5_HASH)
          {
            return TargetDevice::ml_c5;
          }
          else if (hashCode == ml_p2_HASH)
          {
            return TargetDevice::ml_p2;
          }
          else if (hashCode == ml_p3_HASH)
          {
            return TargetDevice::ml_p3;
          }
          else if (hashCode == ml_g4dn_HASH)
          {
            return TargetDevice::ml_g4dn;
          }
          else if (hashCode == ml_inf1_HASH)
          {
            return TargetDevice::ml_inf1;
          }
          else if (hashCode == ml_inf2_HASH)
          {
            return TargetDevice::ml_inf2;
          }
          else if (hashCode == ml_trn1_HASH)
          {
            return TargetDevice::ml_trn1;
          }
          else if (hashCode == ml_eia2_HASH)
          {
            return TargetDevice::ml_eia2;
          }
          else if (hashCode == jetson_tx1_HASH)
          {
            return TargetDevice::jetson_tx1;
          }
          else if (hashCode == jetson_tx2_HASH)
          {
            return TargetDevice::jetson_tx2;
          }
          else if (hashCode == jetson_nano_HASH)
          {
            return TargetDevice::jetson_nano;
          }
          else if (hashCode == jetson_xavier_HASH)
          {
            return TargetDevice::jetson_xavier;
          }
          else if (hashCode == rasp3b_HASH)
          {
            return TargetDevice::rasp3b;
          }
          else if (hashCode == imx8qm_HASH)
          {
            return TargetDevice::imx8qm;
          }
          else if (hashCode == deeplens_HASH)
          {
            return TargetDevice::deeplens;
          }
          else if (hashCode == rk3399_HASH)
          {
            return TargetDevice::rk3399;
          }
          else if (hashCode == rk3288_HASH)
          {
            return TargetDevice::rk3288;
          }
          else if (hashCode == aisage_HASH)
          {
            return TargetDevice::aisage;
          }
          else if (hashCode == sbe_c_HASH)
          {
            return TargetDevice::sbe_c;
          }
          else if (hashCode == qcs605_HASH)
          {
            return TargetDevice::qcs605;
          }
          else if (hashCode == qcs603_HASH)
          {
            return TargetDevice::qcs603;
          }
          else if (hashCode == sitara_am57x_HASH)
          {
            return TargetDevice::sitara_am57x;
          }
          else if (hashCode == amba_cv2_HASH)
          {
            return TargetDevice::amba_cv2;
          }
          else if (hashCode == amba_cv22_HASH)
          {
            return TargetDevice::amba_cv22;
          }
          else if (hashCode == amba_cv25_HASH)
          {
            return TargetDevice::amba_cv25;
          }
          else if (hashCode == x86_win32_HASH)
          {
            return TargetDevice::x86_win32;
          }
          else if (hashCode == x86_win64_HASH)
          {
            return TargetDevice::x86_win64;
          }
          else if (hashCode == coreml_HASH)
          {
            return TargetDevice::coreml;
          }
          else if (hashCode == jacinto_tda4vm_HASH)
          {
            return TargetDevice::jacinto_tda4vm;
          }
          else if (hashCode == imx8mplus_HASH)
          {
            return TargetDevice::imx8mplus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDevice>(hashCode);
          }

          return TargetDevice::NOT_SET;
        }

        Aws::String GetNameForTargetDevice(TargetDevice enumValue)
        {
          switch(enumValue)
          {
          case TargetDevice::NOT_SET:
            return {};
          case TargetDevice::lambda:
            return "lambda";
          case TargetDevice::ml_m4:
            return "ml_m4";
          case TargetDevice::ml_m5:
            return "ml_m5";
          case TargetDevice::ml_c4:
            return "ml_c4";
          case TargetDevice::ml_c5:
            return "ml_c5";
          case TargetDevice::ml_p2:
            return "ml_p2";
          case TargetDevice::ml_p3:
            return "ml_p3";
          case TargetDevice::ml_g4dn:
            return "ml_g4dn";
          case TargetDevice::ml_inf1:
            return "ml_inf1";
          case TargetDevice::ml_inf2:
            return "ml_inf2";
          case TargetDevice::ml_trn1:
            return "ml_trn1";
          case TargetDevice::ml_eia2:
            return "ml_eia2";
          case TargetDevice::jetson_tx1:
            return "jetson_tx1";
          case TargetDevice::jetson_tx2:
            return "jetson_tx2";
          case TargetDevice::jetson_nano:
            return "jetson_nano";
          case TargetDevice::jetson_xavier:
            return "jetson_xavier";
          case TargetDevice::rasp3b:
            return "rasp3b";
          case TargetDevice::imx8qm:
            return "imx8qm";
          case TargetDevice::deeplens:
            return "deeplens";
          case TargetDevice::rk3399:
            return "rk3399";
          case TargetDevice::rk3288:
            return "rk3288";
          case TargetDevice::aisage:
            return "aisage";
          case TargetDevice::sbe_c:
            return "sbe_c";
          case TargetDevice::qcs605:
            return "qcs605";
          case TargetDevice::qcs603:
            return "qcs603";
          case TargetDevice::sitara_am57x:
            return "sitara_am57x";
          case TargetDevice::amba_cv2:
            return "amba_cv2";
          case TargetDevice::amba_cv22:
            return "amba_cv22";
          case TargetDevice::amba_cv25:
            return "amba_cv25";
          case TargetDevice::x86_win32:
            return "x86_win32";
          case TargetDevice::x86_win64:
            return "x86_win64";
          case TargetDevice::coreml:
            return "coreml";
          case TargetDevice::jacinto_tda4vm:
            return "jacinto_tda4vm";
          case TargetDevice::imx8mplus:
            return "imx8mplus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDeviceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

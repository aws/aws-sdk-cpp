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

        static const int lambda_HASH = HashingUtils::HashString("lambda");
        static const int ml_m4_HASH = HashingUtils::HashString("ml_m4");
        static const int ml_m5_HASH = HashingUtils::HashString("ml_m5");
        static const int ml_m6g_HASH = HashingUtils::HashString("ml_m6g");
        static const int ml_c4_HASH = HashingUtils::HashString("ml_c4");
        static const int ml_c5_HASH = HashingUtils::HashString("ml_c5");
        static const int ml_c6g_HASH = HashingUtils::HashString("ml_c6g");
        static const int ml_p2_HASH = HashingUtils::HashString("ml_p2");
        static const int ml_p3_HASH = HashingUtils::HashString("ml_p3");
        static const int ml_g4dn_HASH = HashingUtils::HashString("ml_g4dn");
        static const int ml_inf1_HASH = HashingUtils::HashString("ml_inf1");
        static const int ml_inf2_HASH = HashingUtils::HashString("ml_inf2");
        static const int ml_trn1_HASH = HashingUtils::HashString("ml_trn1");
        static const int ml_eia2_HASH = HashingUtils::HashString("ml_eia2");
        static const int jetson_tx1_HASH = HashingUtils::HashString("jetson_tx1");
        static const int jetson_tx2_HASH = HashingUtils::HashString("jetson_tx2");
        static const int jetson_nano_HASH = HashingUtils::HashString("jetson_nano");
        static const int jetson_xavier_HASH = HashingUtils::HashString("jetson_xavier");
        static const int rasp3b_HASH = HashingUtils::HashString("rasp3b");
        static const int rasp4b_HASH = HashingUtils::HashString("rasp4b");
        static const int imx8qm_HASH = HashingUtils::HashString("imx8qm");
        static const int deeplens_HASH = HashingUtils::HashString("deeplens");
        static const int rk3399_HASH = HashingUtils::HashString("rk3399");
        static const int rk3288_HASH = HashingUtils::HashString("rk3288");
        static const int aisage_HASH = HashingUtils::HashString("aisage");
        static const int sbe_c_HASH = HashingUtils::HashString("sbe_c");
        static const int qcs605_HASH = HashingUtils::HashString("qcs605");
        static const int qcs603_HASH = HashingUtils::HashString("qcs603");
        static const int sitara_am57x_HASH = HashingUtils::HashString("sitara_am57x");
        static const int amba_cv2_HASH = HashingUtils::HashString("amba_cv2");
        static const int amba_cv22_HASH = HashingUtils::HashString("amba_cv22");
        static const int amba_cv25_HASH = HashingUtils::HashString("amba_cv25");
        static const int x86_win32_HASH = HashingUtils::HashString("x86_win32");
        static const int x86_win64_HASH = HashingUtils::HashString("x86_win64");
        static const int coreml_HASH = HashingUtils::HashString("coreml");
        static const int jacinto_tda4vm_HASH = HashingUtils::HashString("jacinto_tda4vm");
        static const int imx8mplus_HASH = HashingUtils::HashString("imx8mplus");


        TargetDevice GetTargetDeviceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ml_m6g_HASH)
          {
            return TargetDevice::ml_m6g;
          }
          else if (hashCode == ml_c4_HASH)
          {
            return TargetDevice::ml_c4;
          }
          else if (hashCode == ml_c5_HASH)
          {
            return TargetDevice::ml_c5;
          }
          else if (hashCode == ml_c6g_HASH)
          {
            return TargetDevice::ml_c6g;
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
          else if (hashCode == rasp4b_HASH)
          {
            return TargetDevice::rasp4b;
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
          case TargetDevice::ml_m6g:
            return "ml_m6g";
          case TargetDevice::ml_c4:
            return "ml_c4";
          case TargetDevice::ml_c5:
            return "ml_c5";
          case TargetDevice::ml_c6g:
            return "ml_c6g";
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
          case TargetDevice::rasp4b:
            return "rasp4b";
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

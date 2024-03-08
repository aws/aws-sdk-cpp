/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/OpticalStandard.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace OpticalStandardMapper
      {

        static const int OPTIC_10GBASE_SR_HASH = HashingUtils::HashString("OPTIC_10GBASE_SR");
        static const int OPTIC_10GBASE_IR_HASH = HashingUtils::HashString("OPTIC_10GBASE_IR");
        static const int OPTIC_10GBASE_LR_HASH = HashingUtils::HashString("OPTIC_10GBASE_LR");
        static const int OPTIC_40GBASE_SR_HASH = HashingUtils::HashString("OPTIC_40GBASE_SR");
        static const int OPTIC_40GBASE_ESR_HASH = HashingUtils::HashString("OPTIC_40GBASE_ESR");
        static const int OPTIC_40GBASE_IR4_LR4L_HASH = HashingUtils::HashString("OPTIC_40GBASE_IR4_LR4L");
        static const int OPTIC_40GBASE_LR4_HASH = HashingUtils::HashString("OPTIC_40GBASE_LR4");
        static const int OPTIC_100GBASE_SR4_HASH = HashingUtils::HashString("OPTIC_100GBASE_SR4");
        static const int OPTIC_100GBASE_CWDM4_HASH = HashingUtils::HashString("OPTIC_100GBASE_CWDM4");
        static const int OPTIC_100GBASE_LR4_HASH = HashingUtils::HashString("OPTIC_100GBASE_LR4");
        static const int OPTIC_100G_PSM4_MSA_HASH = HashingUtils::HashString("OPTIC_100G_PSM4_MSA");
        static const int OPTIC_1000BASE_LX_HASH = HashingUtils::HashString("OPTIC_1000BASE_LX");
        static const int OPTIC_1000BASE_SX_HASH = HashingUtils::HashString("OPTIC_1000BASE_SX");


        OpticalStandard GetOpticalStandardForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPTIC_10GBASE_SR_HASH)
          {
            return OpticalStandard::OPTIC_10GBASE_SR;
          }
          else if (hashCode == OPTIC_10GBASE_IR_HASH)
          {
            return OpticalStandard::OPTIC_10GBASE_IR;
          }
          else if (hashCode == OPTIC_10GBASE_LR_HASH)
          {
            return OpticalStandard::OPTIC_10GBASE_LR;
          }
          else if (hashCode == OPTIC_40GBASE_SR_HASH)
          {
            return OpticalStandard::OPTIC_40GBASE_SR;
          }
          else if (hashCode == OPTIC_40GBASE_ESR_HASH)
          {
            return OpticalStandard::OPTIC_40GBASE_ESR;
          }
          else if (hashCode == OPTIC_40GBASE_IR4_LR4L_HASH)
          {
            return OpticalStandard::OPTIC_40GBASE_IR4_LR4L;
          }
          else if (hashCode == OPTIC_40GBASE_LR4_HASH)
          {
            return OpticalStandard::OPTIC_40GBASE_LR4;
          }
          else if (hashCode == OPTIC_100GBASE_SR4_HASH)
          {
            return OpticalStandard::OPTIC_100GBASE_SR4;
          }
          else if (hashCode == OPTIC_100GBASE_CWDM4_HASH)
          {
            return OpticalStandard::OPTIC_100GBASE_CWDM4;
          }
          else if (hashCode == OPTIC_100GBASE_LR4_HASH)
          {
            return OpticalStandard::OPTIC_100GBASE_LR4;
          }
          else if (hashCode == OPTIC_100G_PSM4_MSA_HASH)
          {
            return OpticalStandard::OPTIC_100G_PSM4_MSA;
          }
          else if (hashCode == OPTIC_1000BASE_LX_HASH)
          {
            return OpticalStandard::OPTIC_1000BASE_LX;
          }
          else if (hashCode == OPTIC_1000BASE_SX_HASH)
          {
            return OpticalStandard::OPTIC_1000BASE_SX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpticalStandard>(hashCode);
          }

          return OpticalStandard::NOT_SET;
        }

        Aws::String GetNameForOpticalStandard(OpticalStandard enumValue)
        {
          switch(enumValue)
          {
          case OpticalStandard::NOT_SET:
            return {};
          case OpticalStandard::OPTIC_10GBASE_SR:
            return "OPTIC_10GBASE_SR";
          case OpticalStandard::OPTIC_10GBASE_IR:
            return "OPTIC_10GBASE_IR";
          case OpticalStandard::OPTIC_10GBASE_LR:
            return "OPTIC_10GBASE_LR";
          case OpticalStandard::OPTIC_40GBASE_SR:
            return "OPTIC_40GBASE_SR";
          case OpticalStandard::OPTIC_40GBASE_ESR:
            return "OPTIC_40GBASE_ESR";
          case OpticalStandard::OPTIC_40GBASE_IR4_LR4L:
            return "OPTIC_40GBASE_IR4_LR4L";
          case OpticalStandard::OPTIC_40GBASE_LR4:
            return "OPTIC_40GBASE_LR4";
          case OpticalStandard::OPTIC_100GBASE_SR4:
            return "OPTIC_100GBASE_SR4";
          case OpticalStandard::OPTIC_100GBASE_CWDM4:
            return "OPTIC_100GBASE_CWDM4";
          case OpticalStandard::OPTIC_100GBASE_LR4:
            return "OPTIC_100GBASE_LR4";
          case OpticalStandard::OPTIC_100G_PSM4_MSA:
            return "OPTIC_100G_PSM4_MSA";
          case OpticalStandard::OPTIC_1000BASE_LX:
            return "OPTIC_1000BASE_LX";
          case OpticalStandard::OPTIC_1000BASE_SX:
            return "OPTIC_1000BASE_SX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpticalStandardMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws

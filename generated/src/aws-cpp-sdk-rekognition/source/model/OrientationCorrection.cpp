/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace OrientationCorrectionMapper
      {

        static constexpr uint32_t ROTATE_0_HASH = ConstExprHashingUtils::HashString("ROTATE_0");
        static constexpr uint32_t ROTATE_90_HASH = ConstExprHashingUtils::HashString("ROTATE_90");
        static constexpr uint32_t ROTATE_180_HASH = ConstExprHashingUtils::HashString("ROTATE_180");
        static constexpr uint32_t ROTATE_270_HASH = ConstExprHashingUtils::HashString("ROTATE_270");


        OrientationCorrection GetOrientationCorrectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROTATE_0_HASH)
          {
            return OrientationCorrection::ROTATE_0;
          }
          else if (hashCode == ROTATE_90_HASH)
          {
            return OrientationCorrection::ROTATE_90;
          }
          else if (hashCode == ROTATE_180_HASH)
          {
            return OrientationCorrection::ROTATE_180;
          }
          else if (hashCode == ROTATE_270_HASH)
          {
            return OrientationCorrection::ROTATE_270;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrientationCorrection>(hashCode);
          }

          return OrientationCorrection::NOT_SET;
        }

        Aws::String GetNameForOrientationCorrection(OrientationCorrection enumValue)
        {
          switch(enumValue)
          {
          case OrientationCorrection::NOT_SET:
            return {};
          case OrientationCorrection::ROTATE_0:
            return "ROTATE_0";
          case OrientationCorrection::ROTATE_90:
            return "ROTATE_90";
          case OrientationCorrection::ROTATE_180:
            return "ROTATE_180";
          case OrientationCorrection::ROTATE_270:
            return "ROTATE_270";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrientationCorrectionMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws

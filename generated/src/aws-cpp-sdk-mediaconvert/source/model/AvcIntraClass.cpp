/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraClass.h>
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
      namespace AvcIntraClassMapper
      {

        static const int CLASS_50_HASH = HashingUtils::HashString("CLASS_50");
        static const int CLASS_100_HASH = HashingUtils::HashString("CLASS_100");
        static const int CLASS_200_HASH = HashingUtils::HashString("CLASS_200");
        static const int CLASS_4K_2K_HASH = HashingUtils::HashString("CLASS_4K_2K");


        AvcIntraClass GetAvcIntraClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASS_50_HASH)
          {
            return AvcIntraClass::CLASS_50;
          }
          else if (hashCode == CLASS_100_HASH)
          {
            return AvcIntraClass::CLASS_100;
          }
          else if (hashCode == CLASS_200_HASH)
          {
            return AvcIntraClass::CLASS_200;
          }
          else if (hashCode == CLASS_4K_2K_HASH)
          {
            return AvcIntraClass::CLASS_4K_2K;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvcIntraClass>(hashCode);
          }

          return AvcIntraClass::NOT_SET;
        }

        Aws::String GetNameForAvcIntraClass(AvcIntraClass enumValue)
        {
          switch(enumValue)
          {
          case AvcIntraClass::NOT_SET:
            return {};
          case AvcIntraClass::CLASS_50:
            return "CLASS_50";
          case AvcIntraClass::CLASS_100:
            return "CLASS_100";
          case AvcIntraClass::CLASS_200:
            return "CLASS_200";
          case AvcIntraClass::CLASS_4K_2K:
            return "CLASS_4K_2K";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AvcIntraClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UncompressedFourcc.h>
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
      namespace UncompressedFourccMapper
      {

        static const int I420_HASH = HashingUtils::HashString("I420");
        static const int I422_HASH = HashingUtils::HashString("I422");
        static const int I444_HASH = HashingUtils::HashString("I444");


        UncompressedFourcc GetUncompressedFourccForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == I420_HASH)
          {
            return UncompressedFourcc::I420;
          }
          else if (hashCode == I422_HASH)
          {
            return UncompressedFourcc::I422;
          }
          else if (hashCode == I444_HASH)
          {
            return UncompressedFourcc::I444;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UncompressedFourcc>(hashCode);
          }

          return UncompressedFourcc::NOT_SET;
        }

        Aws::String GetNameForUncompressedFourcc(UncompressedFourcc enumValue)
        {
          switch(enumValue)
          {
          case UncompressedFourcc::NOT_SET:
            return {};
          case UncompressedFourcc::I420:
            return "I420";
          case UncompressedFourcc::I422:
            return "I422";
          case UncompressedFourcc::I444:
            return "I444";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UncompressedFourccMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

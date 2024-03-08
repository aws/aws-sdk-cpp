/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProresChromaSampling.h>
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
      namespace ProresChromaSamplingMapper
      {

        static const int PRESERVE_444_SAMPLING_HASH = HashingUtils::HashString("PRESERVE_444_SAMPLING");
        static const int SUBSAMPLE_TO_422_HASH = HashingUtils::HashString("SUBSAMPLE_TO_422");


        ProresChromaSampling GetProresChromaSamplingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESERVE_444_SAMPLING_HASH)
          {
            return ProresChromaSampling::PRESERVE_444_SAMPLING;
          }
          else if (hashCode == SUBSAMPLE_TO_422_HASH)
          {
            return ProresChromaSampling::SUBSAMPLE_TO_422;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProresChromaSampling>(hashCode);
          }

          return ProresChromaSampling::NOT_SET;
        }

        Aws::String GetNameForProresChromaSampling(ProresChromaSampling enumValue)
        {
          switch(enumValue)
          {
          case ProresChromaSampling::NOT_SET:
            return {};
          case ProresChromaSampling::PRESERVE_444_SAMPLING:
            return "PRESERVE_444_SAMPLING";
          case ProresChromaSampling::SUBSAMPLE_TO_422:
            return "SUBSAMPLE_TO_422";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProresChromaSamplingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

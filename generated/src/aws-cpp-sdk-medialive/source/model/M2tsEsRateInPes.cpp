/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsEsRateInPes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace M2tsEsRateInPesMapper
      {

        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");
        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        M2tsEsRateInPes GetM2tsEsRateInPesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUDE_HASH)
          {
            return M2tsEsRateInPes::EXCLUDE;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return M2tsEsRateInPes::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsEsRateInPes>(hashCode);
          }

          return M2tsEsRateInPes::NOT_SET;
        }

        Aws::String GetNameForM2tsEsRateInPes(M2tsEsRateInPes enumValue)
        {
          switch(enumValue)
          {
          case M2tsEsRateInPes::EXCLUDE:
            return "EXCLUDE";
          case M2tsEsRateInPes::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsEsRateInPesMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsPcrControl.h>
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
      namespace M2tsPcrControlMapper
      {

        static const int PCR_EVERY_PES_PACKET_HASH = HashingUtils::HashString("PCR_EVERY_PES_PACKET");
        static const int CONFIGURED_PCR_PERIOD_HASH = HashingUtils::HashString("CONFIGURED_PCR_PERIOD");


        M2tsPcrControl GetM2tsPcrControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PCR_EVERY_PES_PACKET_HASH)
          {
            return M2tsPcrControl::PCR_EVERY_PES_PACKET;
          }
          else if (hashCode == CONFIGURED_PCR_PERIOD_HASH)
          {
            return M2tsPcrControl::CONFIGURED_PCR_PERIOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsPcrControl>(hashCode);
          }

          return M2tsPcrControl::NOT_SET;
        }

        Aws::String GetNameForM2tsPcrControl(M2tsPcrControl enumValue)
        {
          switch(enumValue)
          {
          case M2tsPcrControl::PCR_EVERY_PES_PACKET:
            return "PCR_EVERY_PES_PACKET";
          case M2tsPcrControl::CONFIGURED_PCR_PERIOD:
            return "CONFIGURED_PCR_PERIOD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsPcrControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

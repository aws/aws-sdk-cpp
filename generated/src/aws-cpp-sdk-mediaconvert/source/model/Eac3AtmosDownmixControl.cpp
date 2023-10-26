/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosDownmixControl.h>
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
      namespace Eac3AtmosDownmixControlMapper
      {

        static const int SPECIFIED_HASH = HashingUtils::HashString("SPECIFIED");
        static const int INITIALIZE_FROM_SOURCE_HASH = HashingUtils::HashString("INITIALIZE_FROM_SOURCE");


        Eac3AtmosDownmixControl GetEac3AtmosDownmixControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPECIFIED_HASH)
          {
            return Eac3AtmosDownmixControl::SPECIFIED;
          }
          else if (hashCode == INITIALIZE_FROM_SOURCE_HASH)
          {
            return Eac3AtmosDownmixControl::INITIALIZE_FROM_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosDownmixControl>(hashCode);
          }

          return Eac3AtmosDownmixControl::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosDownmixControl(Eac3AtmosDownmixControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosDownmixControl::NOT_SET:
            return {};
          case Eac3AtmosDownmixControl::SPECIFIED:
            return "SPECIFIED";
          case Eac3AtmosDownmixControl::INITIALIZE_FROM_SOURCE:
            return "INITIALIZE_FROM_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosDownmixControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

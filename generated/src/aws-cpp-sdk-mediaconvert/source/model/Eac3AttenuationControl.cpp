/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AttenuationControl.h>
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
      namespace Eac3AttenuationControlMapper
      {

        static const int ATTENUATE_3_DB_HASH = HashingUtils::HashString("ATTENUATE_3_DB");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Eac3AttenuationControl GetEac3AttenuationControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTENUATE_3_DB_HASH)
          {
            return Eac3AttenuationControl::ATTENUATE_3_DB;
          }
          else if (hashCode == NONE_HASH)
          {
            return Eac3AttenuationControl::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AttenuationControl>(hashCode);
          }

          return Eac3AttenuationControl::NOT_SET;
        }

        Aws::String GetNameForEac3AttenuationControl(Eac3AttenuationControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3AttenuationControl::ATTENUATE_3_DB:
            return "ATTENUATE_3_DB";
          case Eac3AttenuationControl::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AttenuationControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

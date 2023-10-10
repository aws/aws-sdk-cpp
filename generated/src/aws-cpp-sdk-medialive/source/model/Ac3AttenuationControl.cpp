/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Ac3AttenuationControl.h>
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
      namespace Ac3AttenuationControlMapper
      {

        static const int ATTENUATE_3_DB_HASH = HashingUtils::HashString("ATTENUATE_3_DB");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Ac3AttenuationControl GetAc3AttenuationControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTENUATE_3_DB_HASH)
          {
            return Ac3AttenuationControl::ATTENUATE_3_DB;
          }
          else if (hashCode == NONE_HASH)
          {
            return Ac3AttenuationControl::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3AttenuationControl>(hashCode);
          }

          return Ac3AttenuationControl::NOT_SET;
        }

        Aws::String GetNameForAc3AttenuationControl(Ac3AttenuationControl enumValue)
        {
          switch(enumValue)
          {
          case Ac3AttenuationControl::NOT_SET:
            return {};
          case Ac3AttenuationControl::ATTENUATE_3_DB:
            return "ATTENUATE_3_DB";
          case Ac3AttenuationControl::NONE:
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

      } // namespace Ac3AttenuationControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

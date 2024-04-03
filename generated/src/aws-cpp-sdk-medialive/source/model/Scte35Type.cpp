/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35Type.h>
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
      namespace Scte35TypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SCTE_35_WITHOUT_SEGMENTATION_HASH = HashingUtils::HashString("SCTE_35_WITHOUT_SEGMENTATION");


        Scte35Type GetScte35TypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Scte35Type::NONE;
          }
          else if (hashCode == SCTE_35_WITHOUT_SEGMENTATION_HASH)
          {
            return Scte35Type::SCTE_35_WITHOUT_SEGMENTATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35Type>(hashCode);
          }

          return Scte35Type::NOT_SET;
        }

        Aws::String GetNameForScte35Type(Scte35Type enumValue)
        {
          switch(enumValue)
          {
          case Scte35Type::NOT_SET:
            return {};
          case Scte35Type::NONE:
            return "NONE";
          case Scte35Type::SCTE_35_WITHOUT_SEGMENTATION:
            return "SCTE_35_WITHOUT_SEGMENTATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35TypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

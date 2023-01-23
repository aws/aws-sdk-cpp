/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/RelativePosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace RelativePositionMapper
      {

        static const int BEFORE_PROGRAM_HASH = HashingUtils::HashString("BEFORE_PROGRAM");
        static const int AFTER_PROGRAM_HASH = HashingUtils::HashString("AFTER_PROGRAM");


        RelativePosition GetRelativePositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_PROGRAM_HASH)
          {
            return RelativePosition::BEFORE_PROGRAM;
          }
          else if (hashCode == AFTER_PROGRAM_HASH)
          {
            return RelativePosition::AFTER_PROGRAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelativePosition>(hashCode);
          }

          return RelativePosition::NOT_SET;
        }

        Aws::String GetNameForRelativePosition(RelativePosition enumValue)
        {
          switch(enumValue)
          {
          case RelativePosition::BEFORE_PROGRAM:
            return "BEFORE_PROGRAM";
          case RelativePosition::AFTER_PROGRAM:
            return "AFTER_PROGRAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelativePositionMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws

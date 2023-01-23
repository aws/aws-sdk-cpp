/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInAlignment.h>
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
      namespace BurnInAlignmentMapper
      {

        static const int CENTERED_HASH = HashingUtils::HashString("CENTERED");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int SMART_HASH = HashingUtils::HashString("SMART");


        BurnInAlignment GetBurnInAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENTERED_HASH)
          {
            return BurnInAlignment::CENTERED;
          }
          else if (hashCode == LEFT_HASH)
          {
            return BurnInAlignment::LEFT;
          }
          else if (hashCode == SMART_HASH)
          {
            return BurnInAlignment::SMART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInAlignment>(hashCode);
          }

          return BurnInAlignment::NOT_SET;
        }

        Aws::String GetNameForBurnInAlignment(BurnInAlignment enumValue)
        {
          switch(enumValue)
          {
          case BurnInAlignment::CENTERED:
            return "CENTERED";
          case BurnInAlignment::LEFT:
            return "LEFT";
          case BurnInAlignment::SMART:
            return "SMART";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurnInAlignmentMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

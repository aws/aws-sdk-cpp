/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EbuTtDDestinationStyleControl.h>
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
      namespace EbuTtDDestinationStyleControlMapper
      {

        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");
        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        EbuTtDDestinationStyleControl GetEbuTtDDestinationStyleControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUDE_HASH)
          {
            return EbuTtDDestinationStyleControl::EXCLUDE;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return EbuTtDDestinationStyleControl::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbuTtDDestinationStyleControl>(hashCode);
          }

          return EbuTtDDestinationStyleControl::NOT_SET;
        }

        Aws::String GetNameForEbuTtDDestinationStyleControl(EbuTtDDestinationStyleControl enumValue)
        {
          switch(enumValue)
          {
          case EbuTtDDestinationStyleControl::EXCLUDE:
            return "EXCLUDE";
          case EbuTtDDestinationStyleControl::INCLUDE:
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

      } // namespace EbuTtDDestinationStyleControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

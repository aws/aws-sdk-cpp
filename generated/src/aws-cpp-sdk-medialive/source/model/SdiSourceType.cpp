/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SdiSourceType.h>
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
      namespace SdiSourceTypeMapper
      {

        static const int SINGLE_HASH = HashingUtils::HashString("SINGLE");
        static const int QUAD_HASH = HashingUtils::HashString("QUAD");


        SdiSourceType GetSdiSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_HASH)
          {
            return SdiSourceType::SINGLE;
          }
          else if (hashCode == QUAD_HASH)
          {
            return SdiSourceType::QUAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SdiSourceType>(hashCode);
          }

          return SdiSourceType::NOT_SET;
        }

        Aws::String GetNameForSdiSourceType(SdiSourceType enumValue)
        {
          switch(enumValue)
          {
          case SdiSourceType::NOT_SET:
            return {};
          case SdiSourceType::SINGLE:
            return "SINGLE";
          case SdiSourceType::QUAD:
            return "QUAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SdiSourceTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/PersonTrackingSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace PersonTrackingSortByMapper
      {

        static constexpr uint32_t INDEX_HASH = ConstExprHashingUtils::HashString("INDEX");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");


        PersonTrackingSortBy GetPersonTrackingSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEX_HASH)
          {
            return PersonTrackingSortBy::INDEX;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return PersonTrackingSortBy::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersonTrackingSortBy>(hashCode);
          }

          return PersonTrackingSortBy::NOT_SET;
        }

        Aws::String GetNameForPersonTrackingSortBy(PersonTrackingSortBy enumValue)
        {
          switch(enumValue)
          {
          case PersonTrackingSortBy::NOT_SET:
            return {};
          case PersonTrackingSortBy::INDEX:
            return "INDEX";
          case PersonTrackingSortBy::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersonTrackingSortByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws

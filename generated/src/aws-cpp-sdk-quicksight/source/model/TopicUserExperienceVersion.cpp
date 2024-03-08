/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicUserExperienceVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TopicUserExperienceVersionMapper
      {

        static const int LEGACY_HASH = HashingUtils::HashString("LEGACY");
        static const int NEW_READER_EXPERIENCE_HASH = HashingUtils::HashString("NEW_READER_EXPERIENCE");


        TopicUserExperienceVersion GetTopicUserExperienceVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEGACY_HASH)
          {
            return TopicUserExperienceVersion::LEGACY;
          }
          else if (hashCode == NEW_READER_EXPERIENCE_HASH)
          {
            return TopicUserExperienceVersion::NEW_READER_EXPERIENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicUserExperienceVersion>(hashCode);
          }

          return TopicUserExperienceVersion::NOT_SET;
        }

        Aws::String GetNameForTopicUserExperienceVersion(TopicUserExperienceVersion enumValue)
        {
          switch(enumValue)
          {
          case TopicUserExperienceVersion::NOT_SET:
            return {};
          case TopicUserExperienceVersion::LEGACY:
            return "LEGACY";
          case TopicUserExperienceVersion::NEW_READER_EXPERIENCE:
            return "NEW_READER_EXPERIENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicUserExperienceVersionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

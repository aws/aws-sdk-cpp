﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicFilterAttribute.h>
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
      namespace TopicFilterAttributeMapper
      {

        static const int QUICKSIGHT_USER_HASH = HashingUtils::HashString("QUICKSIGHT_USER");
        static const int QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_VIEWER_OR_OWNER");
        static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
        static const int QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
        static const int TOPIC_NAME_HASH = HashingUtils::HashString("TOPIC_NAME");


        TopicFilterAttribute GetTopicFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_USER_HASH)
          {
            return TopicFilterAttribute::QUICKSIGHT_USER;
          }
          else if (hashCode == QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return TopicFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return TopicFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == QUICKSIGHT_OWNER_HASH)
          {
            return TopicFilterAttribute::QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH)
          {
            return TopicFilterAttribute::DIRECT_QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH)
          {
            return TopicFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER;
          }
          else if (hashCode == TOPIC_NAME_HASH)
          {
            return TopicFilterAttribute::TOPIC_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicFilterAttribute>(hashCode);
          }

          return TopicFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForTopicFilterAttribute(TopicFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case TopicFilterAttribute::NOT_SET:
            return {};
          case TopicFilterAttribute::QUICKSIGHT_USER:
            return "QUICKSIGHT_USER";
          case TopicFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER:
            return "QUICKSIGHT_VIEWER_OR_OWNER";
          case TopicFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
            return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
          case TopicFilterAttribute::QUICKSIGHT_OWNER:
            return "QUICKSIGHT_OWNER";
          case TopicFilterAttribute::DIRECT_QUICKSIGHT_OWNER:
            return "DIRECT_QUICKSIGHT_OWNER";
          case TopicFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER:
            return "DIRECT_QUICKSIGHT_SOLE_OWNER";
          case TopicFilterAttribute::TOPIC_NAME:
            return "TOPIC_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

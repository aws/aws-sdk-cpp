/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/ChannelRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace ChannelRoleMapper
      {

        static const int ASKER_HASH = HashingUtils::HashString("ASKER");
        static const int EXPERT_HASH = HashingUtils::HashString("EXPERT");
        static const int MODERATOR_HASH = HashingUtils::HashString("MODERATOR");
        static const int SUPPORTREQUESTOR_HASH = HashingUtils::HashString("SUPPORTREQUESTOR");


        ChannelRole GetChannelRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASKER_HASH)
          {
            return ChannelRole::ASKER;
          }
          else if (hashCode == EXPERT_HASH)
          {
            return ChannelRole::EXPERT;
          }
          else if (hashCode == MODERATOR_HASH)
          {
            return ChannelRole::MODERATOR;
          }
          else if (hashCode == SUPPORTREQUESTOR_HASH)
          {
            return ChannelRole::SUPPORTREQUESTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelRole>(hashCode);
          }

          return ChannelRole::NOT_SET;
        }

        Aws::String GetNameForChannelRole(ChannelRole enumValue)
        {
          switch(enumValue)
          {
          case ChannelRole::NOT_SET:
            return {};
          case ChannelRole::ASKER:
            return "ASKER";
          case ChannelRole::EXPERT:
            return "EXPERT";
          case ChannelRole::MODERATOR:
            return "MODERATOR";
          case ChannelRole::SUPPORTREQUESTOR:
            return "SUPPORTREQUESTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelRoleMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws

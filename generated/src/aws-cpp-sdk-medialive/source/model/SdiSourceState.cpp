/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SdiSourceState.h>
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
      namespace SdiSourceStateMapper
      {

        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        SdiSourceState GetSdiSourceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return SdiSourceState::IDLE;
          }
          else if (hashCode == IN_USE_HASH)
          {
            return SdiSourceState::IN_USE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return SdiSourceState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SdiSourceState>(hashCode);
          }

          return SdiSourceState::NOT_SET;
        }

        Aws::String GetNameForSdiSourceState(SdiSourceState enumValue)
        {
          switch(enumValue)
          {
          case SdiSourceState::NOT_SET:
            return {};
          case SdiSourceState::IDLE:
            return "IDLE";
          case SdiSourceState::IN_USE:
            return "IN_USE";
          case SdiSourceState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SdiSourceStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

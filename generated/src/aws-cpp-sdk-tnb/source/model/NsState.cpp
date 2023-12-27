/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/NsState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace NsStateMapper
      {

        static const int INSTANTIATED_HASH = HashingUtils::HashString("INSTANTIATED");
        static const int NOT_INSTANTIATED_HASH = HashingUtils::HashString("NOT_INSTANTIATED");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int INSTANTIATE_IN_PROGRESS_HASH = HashingUtils::HashString("INSTANTIATE_IN_PROGRESS");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int TERMINATE_IN_PROGRESS_HASH = HashingUtils::HashString("TERMINATE_IN_PROGRESS");


        NsState GetNsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANTIATED_HASH)
          {
            return NsState::INSTANTIATED;
          }
          else if (hashCode == NOT_INSTANTIATED_HASH)
          {
            return NsState::NOT_INSTANTIATED;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return NsState::IMPAIRED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return NsState::STOPPED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NsState::DELETED;
          }
          else if (hashCode == INSTANTIATE_IN_PROGRESS_HASH)
          {
            return NsState::INSTANTIATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return NsState::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == TERMINATE_IN_PROGRESS_HASH)
          {
            return NsState::TERMINATE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NsState>(hashCode);
          }

          return NsState::NOT_SET;
        }

        Aws::String GetNameForNsState(NsState enumValue)
        {
          switch(enumValue)
          {
          case NsState::NOT_SET:
            return {};
          case NsState::INSTANTIATED:
            return "INSTANTIATED";
          case NsState::NOT_INSTANTIATED:
            return "NOT_INSTANTIATED";
          case NsState::IMPAIRED:
            return "IMPAIRED";
          case NsState::STOPPED:
            return "STOPPED";
          case NsState::DELETED:
            return "DELETED";
          case NsState::INSTANTIATE_IN_PROGRESS:
            return "INSTANTIATE_IN_PROGRESS";
          case NsState::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case NsState::TERMINATE_IN_PROGRESS:
            return "TERMINATE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NsStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws

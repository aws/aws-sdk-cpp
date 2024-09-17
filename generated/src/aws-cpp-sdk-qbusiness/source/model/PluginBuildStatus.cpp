/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PluginBuildStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace PluginBuildStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        PluginBuildStatus GetPluginBuildStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return PluginBuildStatus::READY;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return PluginBuildStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return PluginBuildStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return PluginBuildStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return PluginBuildStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return PluginBuildStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return PluginBuildStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PluginBuildStatus>(hashCode);
          }

          return PluginBuildStatus::NOT_SET;
        }

        Aws::String GetNameForPluginBuildStatus(PluginBuildStatus enumValue)
        {
          switch(enumValue)
          {
          case PluginBuildStatus::NOT_SET:
            return {};
          case PluginBuildStatus::READY:
            return "READY";
          case PluginBuildStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case PluginBuildStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case PluginBuildStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case PluginBuildStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case PluginBuildStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case PluginBuildStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PluginBuildStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

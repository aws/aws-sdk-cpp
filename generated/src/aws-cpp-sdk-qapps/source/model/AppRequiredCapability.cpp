/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/AppRequiredCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace AppRequiredCapabilityMapper
      {

        static const int FileUpload_HASH = HashingUtils::HashString("FileUpload");
        static const int CreatorMode_HASH = HashingUtils::HashString("CreatorMode");
        static const int RetrievalMode_HASH = HashingUtils::HashString("RetrievalMode");
        static const int PluginMode_HASH = HashingUtils::HashString("PluginMode");


        AppRequiredCapability GetAppRequiredCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FileUpload_HASH)
          {
            return AppRequiredCapability::FileUpload;
          }
          else if (hashCode == CreatorMode_HASH)
          {
            return AppRequiredCapability::CreatorMode;
          }
          else if (hashCode == RetrievalMode_HASH)
          {
            return AppRequiredCapability::RetrievalMode;
          }
          else if (hashCode == PluginMode_HASH)
          {
            return AppRequiredCapability::PluginMode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppRequiredCapability>(hashCode);
          }

          return AppRequiredCapability::NOT_SET;
        }

        Aws::String GetNameForAppRequiredCapability(AppRequiredCapability enumValue)
        {
          switch(enumValue)
          {
          case AppRequiredCapability::NOT_SET:
            return {};
          case AppRequiredCapability::FileUpload:
            return "FileUpload";
          case AppRequiredCapability::CreatorMode:
            return "CreatorMode";
          case AppRequiredCapability::RetrievalMode:
            return "RetrievalMode";
          case AppRequiredCapability::PluginMode:
            return "PluginMode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppRequiredCapabilityMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws

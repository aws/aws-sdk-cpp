/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMountHomeEFS.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AutoMountHomeEFSMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int DefaultAsDomain_HASH = HashingUtils::HashString("DefaultAsDomain");


        AutoMountHomeEFS GetAutoMountHomeEFSForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return AutoMountHomeEFS::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return AutoMountHomeEFS::Disabled;
          }
          else if (hashCode == DefaultAsDomain_HASH)
          {
            return AutoMountHomeEFS::DefaultAsDomain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMountHomeEFS>(hashCode);
          }

          return AutoMountHomeEFS::NOT_SET;
        }

        Aws::String GetNameForAutoMountHomeEFS(AutoMountHomeEFS enumValue)
        {
          switch(enumValue)
          {
          case AutoMountHomeEFS::NOT_SET:
            return {};
          case AutoMountHomeEFS::Enabled:
            return "Enabled";
          case AutoMountHomeEFS::Disabled:
            return "Disabled";
          case AutoMountHomeEFS::DefaultAsDomain:
            return "DefaultAsDomain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMountHomeEFSMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

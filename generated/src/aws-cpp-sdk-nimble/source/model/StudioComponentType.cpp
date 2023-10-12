/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace StudioComponentTypeMapper
      {

        static constexpr uint32_t ACTIVE_DIRECTORY_HASH = ConstExprHashingUtils::HashString("ACTIVE_DIRECTORY");
        static constexpr uint32_t SHARED_FILE_SYSTEM_HASH = ConstExprHashingUtils::HashString("SHARED_FILE_SYSTEM");
        static constexpr uint32_t COMPUTE_FARM_HASH = ConstExprHashingUtils::HashString("COMPUTE_FARM");
        static constexpr uint32_t LICENSE_SERVICE_HASH = ConstExprHashingUtils::HashString("LICENSE_SERVICE");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        StudioComponentType GetStudioComponentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_DIRECTORY_HASH)
          {
            return StudioComponentType::ACTIVE_DIRECTORY;
          }
          else if (hashCode == SHARED_FILE_SYSTEM_HASH)
          {
            return StudioComponentType::SHARED_FILE_SYSTEM;
          }
          else if (hashCode == COMPUTE_FARM_HASH)
          {
            return StudioComponentType::COMPUTE_FARM;
          }
          else if (hashCode == LICENSE_SERVICE_HASH)
          {
            return StudioComponentType::LICENSE_SERVICE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return StudioComponentType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioComponentType>(hashCode);
          }

          return StudioComponentType::NOT_SET;
        }

        Aws::String GetNameForStudioComponentType(StudioComponentType enumValue)
        {
          switch(enumValue)
          {
          case StudioComponentType::NOT_SET:
            return {};
          case StudioComponentType::ACTIVE_DIRECTORY:
            return "ACTIVE_DIRECTORY";
          case StudioComponentType::SHARED_FILE_SYSTEM:
            return "SHARED_FILE_SYSTEM";
          case StudioComponentType::COMPUTE_FARM:
            return "COMPUTE_FARM";
          case StudioComponentType::LICENSE_SERVICE:
            return "LICENSE_SERVICE";
          case StudioComponentType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioComponentTypeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws

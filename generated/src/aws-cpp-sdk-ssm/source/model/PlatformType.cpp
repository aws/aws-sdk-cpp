/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PlatformType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PlatformTypeMapper
      {

        static constexpr uint32_t Windows_HASH = ConstExprHashingUtils::HashString("Windows");
        static constexpr uint32_t Linux_HASH = ConstExprHashingUtils::HashString("Linux");
        static constexpr uint32_t MacOS_HASH = ConstExprHashingUtils::HashString("MacOS");


        PlatformType GetPlatformTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Windows_HASH)
          {
            return PlatformType::Windows;
          }
          else if (hashCode == Linux_HASH)
          {
            return PlatformType::Linux;
          }
          else if (hashCode == MacOS_HASH)
          {
            return PlatformType::MacOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlatformType>(hashCode);
          }

          return PlatformType::NOT_SET;
        }

        Aws::String GetNameForPlatformType(PlatformType enumValue)
        {
          switch(enumValue)
          {
          case PlatformType::NOT_SET:
            return {};
          case PlatformType::Windows:
            return "Windows";
          case PlatformType::Linux:
            return "Linux";
          case PlatformType::MacOS:
            return "MacOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InterfaceTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace InterfaceTypeEnumMapper
      {

        static const int interface_HASH = HashingUtils::HashString("interface");
        static const int efa_HASH = HashingUtils::HashString("efa");
        static const int efa_only_HASH = HashingUtils::HashString("efa-only");


        InterfaceTypeEnum GetInterfaceTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == interface_HASH)
          {
            return InterfaceTypeEnum::interface;
          }
          else if (hashCode == efa_HASH)
          {
            return InterfaceTypeEnum::efa;
          }
          else if (hashCode == efa_only_HASH)
          {
            return InterfaceTypeEnum::efa_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterfaceTypeEnum>(hashCode);
          }

          return InterfaceTypeEnum::NOT_SET;
        }

        Aws::String GetNameForInterfaceTypeEnum(InterfaceTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case InterfaceTypeEnum::NOT_SET:
            return {};
          case InterfaceTypeEnum::interface:
            return "interface";
          case InterfaceTypeEnum::efa:
            return "efa";
          case InterfaceTypeEnum::efa_only:
            return "efa-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InterfaceTypeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws

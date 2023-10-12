/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/NamespaceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace NamespaceFilterNameMapper
      {

        static constexpr uint32_t TYPE_HASH = ConstExprHashingUtils::HashString("TYPE");
        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t HTTP_NAME_HASH = ConstExprHashingUtils::HashString("HTTP_NAME");


        NamespaceFilterName GetNamespaceFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TYPE_HASH)
          {
            return NamespaceFilterName::TYPE;
          }
          else if (hashCode == NAME_HASH)
          {
            return NamespaceFilterName::NAME;
          }
          else if (hashCode == HTTP_NAME_HASH)
          {
            return NamespaceFilterName::HTTP_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceFilterName>(hashCode);
          }

          return NamespaceFilterName::NOT_SET;
        }

        Aws::String GetNameForNamespaceFilterName(NamespaceFilterName enumValue)
        {
          switch(enumValue)
          {
          case NamespaceFilterName::NOT_SET:
            return {};
          case NamespaceFilterName::TYPE:
            return "TYPE";
          case NamespaceFilterName::NAME:
            return "NAME";
          case NamespaceFilterName::HTTP_NAME:
            return "HTTP_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceFilterNameMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ResettableElementName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace ResettableElementNameMapper
      {

        static constexpr uint32_t FullyQualifiedDomainName_HASH = ConstExprHashingUtils::HashString("FullyQualifiedDomainName");
        static constexpr uint32_t Regions_HASH = ConstExprHashingUtils::HashString("Regions");
        static constexpr uint32_t ResourcePath_HASH = ConstExprHashingUtils::HashString("ResourcePath");
        static constexpr uint32_t ChildHealthChecks_HASH = ConstExprHashingUtils::HashString("ChildHealthChecks");


        ResettableElementName GetResettableElementNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullyQualifiedDomainName_HASH)
          {
            return ResettableElementName::FullyQualifiedDomainName;
          }
          else if (hashCode == Regions_HASH)
          {
            return ResettableElementName::Regions;
          }
          else if (hashCode == ResourcePath_HASH)
          {
            return ResettableElementName::ResourcePath;
          }
          else if (hashCode == ChildHealthChecks_HASH)
          {
            return ResettableElementName::ChildHealthChecks;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResettableElementName>(hashCode);
          }

          return ResettableElementName::NOT_SET;
        }

        Aws::String GetNameForResettableElementName(ResettableElementName enumValue)
        {
          switch(enumValue)
          {
          case ResettableElementName::NOT_SET:
            return {};
          case ResettableElementName::FullyQualifiedDomainName:
            return "FullyQualifiedDomainName";
          case ResettableElementName::Regions:
            return "Regions";
          case ResettableElementName::ResourcePath:
            return "ResourcePath";
          case ResettableElementName::ChildHealthChecks:
            return "ChildHealthChecks";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResettableElementNameMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws

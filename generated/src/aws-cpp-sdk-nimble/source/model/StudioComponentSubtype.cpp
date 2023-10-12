/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentSubtype.h>
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
      namespace StudioComponentSubtypeMapper
      {

        static constexpr uint32_t AWS_MANAGED_MICROSOFT_AD_HASH = ConstExprHashingUtils::HashString("AWS_MANAGED_MICROSOFT_AD");
        static constexpr uint32_t AMAZON_FSX_FOR_WINDOWS_HASH = ConstExprHashingUtils::HashString("AMAZON_FSX_FOR_WINDOWS");
        static constexpr uint32_t AMAZON_FSX_FOR_LUSTRE_HASH = ConstExprHashingUtils::HashString("AMAZON_FSX_FOR_LUSTRE");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        StudioComponentSubtype GetStudioComponentSubtypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_MANAGED_MICROSOFT_AD_HASH)
          {
            return StudioComponentSubtype::AWS_MANAGED_MICROSOFT_AD;
          }
          else if (hashCode == AMAZON_FSX_FOR_WINDOWS_HASH)
          {
            return StudioComponentSubtype::AMAZON_FSX_FOR_WINDOWS;
          }
          else if (hashCode == AMAZON_FSX_FOR_LUSTRE_HASH)
          {
            return StudioComponentSubtype::AMAZON_FSX_FOR_LUSTRE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return StudioComponentSubtype::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioComponentSubtype>(hashCode);
          }

          return StudioComponentSubtype::NOT_SET;
        }

        Aws::String GetNameForStudioComponentSubtype(StudioComponentSubtype enumValue)
        {
          switch(enumValue)
          {
          case StudioComponentSubtype::NOT_SET:
            return {};
          case StudioComponentSubtype::AWS_MANAGED_MICROSOFT_AD:
            return "AWS_MANAGED_MICROSOFT_AD";
          case StudioComponentSubtype::AMAZON_FSX_FOR_WINDOWS:
            return "AMAZON_FSX_FOR_WINDOWS";
          case StudioComponentSubtype::AMAZON_FSX_FOR_LUSTRE:
            return "AMAZON_FSX_FOR_LUSTRE";
          case StudioComponentSubtype::CUSTOM:
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

      } // namespace StudioComponentSubtypeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws

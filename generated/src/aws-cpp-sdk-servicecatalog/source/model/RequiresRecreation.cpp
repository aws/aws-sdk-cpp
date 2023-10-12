/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/RequiresRecreation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace RequiresRecreationMapper
      {

        static constexpr uint32_t NEVER_HASH = ConstExprHashingUtils::HashString("NEVER");
        static constexpr uint32_t CONDITIONALLY_HASH = ConstExprHashingUtils::HashString("CONDITIONALLY");
        static constexpr uint32_t ALWAYS_HASH = ConstExprHashingUtils::HashString("ALWAYS");


        RequiresRecreation GetRequiresRecreationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEVER_HASH)
          {
            return RequiresRecreation::NEVER;
          }
          else if (hashCode == CONDITIONALLY_HASH)
          {
            return RequiresRecreation::CONDITIONALLY;
          }
          else if (hashCode == ALWAYS_HASH)
          {
            return RequiresRecreation::ALWAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequiresRecreation>(hashCode);
          }

          return RequiresRecreation::NOT_SET;
        }

        Aws::String GetNameForRequiresRecreation(RequiresRecreation enumValue)
        {
          switch(enumValue)
          {
          case RequiresRecreation::NOT_SET:
            return {};
          case RequiresRecreation::NEVER:
            return "NEVER";
          case RequiresRecreation::CONDITIONALLY:
            return "CONDITIONALLY";
          case RequiresRecreation::ALWAYS:
            return "ALWAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequiresRecreationMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws

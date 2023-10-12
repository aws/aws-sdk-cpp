/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Edition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace EditionMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t ENTERPRISE_HASH = ConstExprHashingUtils::HashString("ENTERPRISE");
        static constexpr uint32_t ENTERPRISE_AND_Q_HASH = ConstExprHashingUtils::HashString("ENTERPRISE_AND_Q");


        Edition GetEditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return Edition::STANDARD;
          }
          else if (hashCode == ENTERPRISE_HASH)
          {
            return Edition::ENTERPRISE;
          }
          else if (hashCode == ENTERPRISE_AND_Q_HASH)
          {
            return Edition::ENTERPRISE_AND_Q;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Edition>(hashCode);
          }

          return Edition::NOT_SET;
        }

        Aws::String GetNameForEdition(Edition enumValue)
        {
          switch(enumValue)
          {
          case Edition::NOT_SET:
            return {};
          case Edition::STANDARD:
            return "STANDARD";
          case Edition::ENTERPRISE:
            return "ENTERPRISE";
          case Edition::ENTERPRISE_AND_Q:
            return "ENTERPRISE_AND_Q";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EditionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

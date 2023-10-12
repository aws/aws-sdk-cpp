/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IdentityType.h>
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
      namespace IdentityTypeMapper
      {

        static constexpr uint32_t IAM_HASH = ConstExprHashingUtils::HashString("IAM");
        static constexpr uint32_t QUICKSIGHT_HASH = ConstExprHashingUtils::HashString("QUICKSIGHT");
        static constexpr uint32_t IAM_IDENTITY_CENTER_HASH = ConstExprHashingUtils::HashString("IAM_IDENTITY_CENTER");


        IdentityType GetIdentityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return IdentityType::IAM;
          }
          else if (hashCode == QUICKSIGHT_HASH)
          {
            return IdentityType::QUICKSIGHT;
          }
          else if (hashCode == IAM_IDENTITY_CENTER_HASH)
          {
            return IdentityType::IAM_IDENTITY_CENTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityType>(hashCode);
          }

          return IdentityType::NOT_SET;
        }

        Aws::String GetNameForIdentityType(IdentityType enumValue)
        {
          switch(enumValue)
          {
          case IdentityType::NOT_SET:
            return {};
          case IdentityType::IAM:
            return "IAM";
          case IdentityType::QUICKSIGHT:
            return "QUICKSIGHT";
          case IdentityType::IAM_IDENTITY_CENTER:
            return "IAM_IDENTITY_CENTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

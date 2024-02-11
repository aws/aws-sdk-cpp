/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace LensTypeMapper
      {

        static const int AWS_OFFICIAL_HASH = HashingUtils::HashString("AWS_OFFICIAL");
        static const int CUSTOM_SHARED_HASH = HashingUtils::HashString("CUSTOM_SHARED");
        static const int CUSTOM_SELF_HASH = HashingUtils::HashString("CUSTOM_SELF");


        LensType GetLensTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_OFFICIAL_HASH)
          {
            return LensType::AWS_OFFICIAL;
          }
          else if (hashCode == CUSTOM_SHARED_HASH)
          {
            return LensType::CUSTOM_SHARED;
          }
          else if (hashCode == CUSTOM_SELF_HASH)
          {
            return LensType::CUSTOM_SELF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LensType>(hashCode);
          }

          return LensType::NOT_SET;
        }

        Aws::String GetNameForLensType(LensType enumValue)
        {
          switch(enumValue)
          {
          case LensType::NOT_SET:
            return {};
          case LensType::AWS_OFFICIAL:
            return "AWS_OFFICIAL";
          case LensType::CUSTOM_SHARED:
            return "CUSTOM_SHARED";
          case LensType::CUSTOM_SELF:
            return "CUSTOM_SELF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LensTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensStatusType.h>
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
      namespace LensStatusTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");


        LensStatusType GetLensStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return LensStatusType::ALL;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return LensStatusType::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return LensStatusType::PUBLISHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LensStatusType>(hashCode);
          }

          return LensStatusType::NOT_SET;
        }

        Aws::String GetNameForLensStatusType(LensStatusType enumValue)
        {
          switch(enumValue)
          {
          case LensStatusType::NOT_SET:
            return {};
          case LensStatusType::ALL:
            return "ALL";
          case LensStatusType::DRAFT:
            return "DRAFT";
          case LensStatusType::PUBLISHED:
            return "PUBLISHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LensStatusTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws

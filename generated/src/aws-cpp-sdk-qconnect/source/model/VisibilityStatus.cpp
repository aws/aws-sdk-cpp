/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/VisibilityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace VisibilityStatusMapper
      {

        static const int SAVED_HASH = HashingUtils::HashString("SAVED");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");


        VisibilityStatus GetVisibilityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAVED_HASH)
          {
            return VisibilityStatus::SAVED;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return VisibilityStatus::PUBLISHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisibilityStatus>(hashCode);
          }

          return VisibilityStatus::NOT_SET;
        }

        Aws::String GetNameForVisibilityStatus(VisibilityStatus enumValue)
        {
          switch(enumValue)
          {
          case VisibilityStatus::NOT_SET:
            return {};
          case VisibilityStatus::SAVED:
            return "SAVED";
          case VisibilityStatus::PUBLISHED:
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

      } // namespace VisibilityStatusMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws

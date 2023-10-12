/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/UploadBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace UploadBehaviorMapper
      {

        static constexpr uint32_t UPLOAD_ON_TERMINATE_HASH = ConstExprHashingUtils::HashString("UPLOAD_ON_TERMINATE");
        static constexpr uint32_t UPLOAD_ROLLING_AUTO_REMOVE_HASH = ConstExprHashingUtils::HashString("UPLOAD_ROLLING_AUTO_REMOVE");


        UploadBehavior GetUploadBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPLOAD_ON_TERMINATE_HASH)
          {
            return UploadBehavior::UPLOAD_ON_TERMINATE;
          }
          else if (hashCode == UPLOAD_ROLLING_AUTO_REMOVE_HASH)
          {
            return UploadBehavior::UPLOAD_ROLLING_AUTO_REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadBehavior>(hashCode);
          }

          return UploadBehavior::NOT_SET;
        }

        Aws::String GetNameForUploadBehavior(UploadBehavior enumValue)
        {
          switch(enumValue)
          {
          case UploadBehavior::NOT_SET:
            return {};
          case UploadBehavior::UPLOAD_ON_TERMINATE:
            return "UPLOAD_ON_TERMINATE";
          case UploadBehavior::UPLOAD_ROLLING_AUTO_REMOVE:
            return "UPLOAD_ROLLING_AUTO_REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UploadBehaviorMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws

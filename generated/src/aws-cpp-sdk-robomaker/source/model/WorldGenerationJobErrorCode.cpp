/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldGenerationJobErrorCode.h>
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
      namespace WorldGenerationJobErrorCodeMapper
      {

        static constexpr uint32_t InternalServiceError_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
        static constexpr uint32_t LimitExceeded_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
        static constexpr uint32_t ResourceNotFound_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");
        static constexpr uint32_t RequestThrottled_HASH = ConstExprHashingUtils::HashString("RequestThrottled");
        static constexpr uint32_t InvalidInput_HASH = ConstExprHashingUtils::HashString("InvalidInput");
        static constexpr uint32_t AllWorldGenerationFailed_HASH = ConstExprHashingUtils::HashString("AllWorldGenerationFailed");


        WorldGenerationJobErrorCode GetWorldGenerationJobErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalServiceError_HASH)
          {
            return WorldGenerationJobErrorCode::InternalServiceError;
          }
          else if (hashCode == LimitExceeded_HASH)
          {
            return WorldGenerationJobErrorCode::LimitExceeded;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return WorldGenerationJobErrorCode::ResourceNotFound;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return WorldGenerationJobErrorCode::RequestThrottled;
          }
          else if (hashCode == InvalidInput_HASH)
          {
            return WorldGenerationJobErrorCode::InvalidInput;
          }
          else if (hashCode == AllWorldGenerationFailed_HASH)
          {
            return WorldGenerationJobErrorCode::AllWorldGenerationFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorldGenerationJobErrorCode>(hashCode);
          }

          return WorldGenerationJobErrorCode::NOT_SET;
        }

        Aws::String GetNameForWorldGenerationJobErrorCode(WorldGenerationJobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case WorldGenerationJobErrorCode::NOT_SET:
            return {};
          case WorldGenerationJobErrorCode::InternalServiceError:
            return "InternalServiceError";
          case WorldGenerationJobErrorCode::LimitExceeded:
            return "LimitExceeded";
          case WorldGenerationJobErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          case WorldGenerationJobErrorCode::RequestThrottled:
            return "RequestThrottled";
          case WorldGenerationJobErrorCode::InvalidInput:
            return "InvalidInput";
          case WorldGenerationJobErrorCode::AllWorldGenerationFailed:
            return "AllWorldGenerationFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorldGenerationJobErrorCodeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UnprocessedErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace UnprocessedErrorCodeMapper
      {

        static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("INVALID_INPUT");
        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NOT_FOUND");
        static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LIMIT_EXCEEDED");


        UnprocessedErrorCode GetUnprocessedErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_INPUT_HASH)
          {
            return UnprocessedErrorCode::INVALID_INPUT;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return UnprocessedErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return UnprocessedErrorCode::NOT_FOUND;
          }
          else if (hashCode == LIMIT_EXCEEDED_HASH)
          {
            return UnprocessedErrorCode::LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnprocessedErrorCode>(hashCode);
          }

          return UnprocessedErrorCode::NOT_SET;
        }

        Aws::String GetNameForUnprocessedErrorCode(UnprocessedErrorCode enumValue)
        {
          switch(enumValue)
          {
          case UnprocessedErrorCode::NOT_SET:
            return {};
          case UnprocessedErrorCode::INVALID_INPUT:
            return "INVALID_INPUT";
          case UnprocessedErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case UnprocessedErrorCode::NOT_FOUND:
            return "NOT_FOUND";
          case UnprocessedErrorCode::LIMIT_EXCEEDED:
            return "LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnprocessedErrorCodeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int InvalidRequest_HASH = HashingUtils::HashString("InvalidRequest");
        static const int ResourceInactive_HASH = HashingUtils::HashString("ResourceInactive");
        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalError_HASH)
          {
            return ErrorCode::InternalError;
          }
          else if (hashCode == InvalidRequest_HASH)
          {
            return ErrorCode::InvalidRequest;
          }
          else if (hashCode == ResourceInactive_HASH)
          {
            return ErrorCode::ResourceInactive;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return ErrorCode::ResourceNotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::InternalError:
            return "InternalError";
          case ErrorCode::InvalidRequest:
            return "InvalidRequest";
          case ErrorCode::ResourceInactive:
            return "ResourceInactive";
          case ErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

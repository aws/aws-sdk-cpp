/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsV2UnprocessedFindingErrorCode.h>
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
      namespace BatchUpdateFindingsV2UnprocessedFindingErrorCodeMapper
      {

        static const int ResourceNotFoundException_HASH = HashingUtils::HashString("ResourceNotFoundException");
        static const int ValidationException_HASH = HashingUtils::HashString("ValidationException");
        static const int InternalServerException_HASH = HashingUtils::HashString("InternalServerException");
        static const int ConflictException_HASH = HashingUtils::HashString("ConflictException");


        BatchUpdateFindingsV2UnprocessedFindingErrorCode GetBatchUpdateFindingsV2UnprocessedFindingErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFoundException_HASH)
          {
            return BatchUpdateFindingsV2UnprocessedFindingErrorCode::ResourceNotFoundException;
          }
          else if (hashCode == ValidationException_HASH)
          {
            return BatchUpdateFindingsV2UnprocessedFindingErrorCode::ValidationException;
          }
          else if (hashCode == InternalServerException_HASH)
          {
            return BatchUpdateFindingsV2UnprocessedFindingErrorCode::InternalServerException;
          }
          else if (hashCode == ConflictException_HASH)
          {
            return BatchUpdateFindingsV2UnprocessedFindingErrorCode::ConflictException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchUpdateFindingsV2UnprocessedFindingErrorCode>(hashCode);
          }

          return BatchUpdateFindingsV2UnprocessedFindingErrorCode::NOT_SET;
        }

        Aws::String GetNameForBatchUpdateFindingsV2UnprocessedFindingErrorCode(BatchUpdateFindingsV2UnprocessedFindingErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BatchUpdateFindingsV2UnprocessedFindingErrorCode::NOT_SET:
            return {};
          case BatchUpdateFindingsV2UnprocessedFindingErrorCode::ResourceNotFoundException:
            return "ResourceNotFoundException";
          case BatchUpdateFindingsV2UnprocessedFindingErrorCode::ValidationException:
            return "ValidationException";
          case BatchUpdateFindingsV2UnprocessedFindingErrorCode::InternalServerException:
            return "InternalServerException";
          case BatchUpdateFindingsV2UnprocessedFindingErrorCode::ConflictException:
            return "ConflictException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchUpdateFindingsV2UnprocessedFindingErrorCodeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

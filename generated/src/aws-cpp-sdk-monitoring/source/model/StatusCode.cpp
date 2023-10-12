/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/StatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace StatusCodeMapper
      {

        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");
        static constexpr uint32_t InternalError_HASH = ConstExprHashingUtils::HashString("InternalError");
        static constexpr uint32_t PartialData_HASH = ConstExprHashingUtils::HashString("PartialData");
        static constexpr uint32_t Forbidden_HASH = ConstExprHashingUtils::HashString("Forbidden");


        StatusCode GetStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Complete_HASH)
          {
            return StatusCode::Complete;
          }
          else if (hashCode == InternalError_HASH)
          {
            return StatusCode::InternalError;
          }
          else if (hashCode == PartialData_HASH)
          {
            return StatusCode::PartialData;
          }
          else if (hashCode == Forbidden_HASH)
          {
            return StatusCode::Forbidden;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusCode>(hashCode);
          }

          return StatusCode::NOT_SET;
        }

        Aws::String GetNameForStatusCode(StatusCode enumValue)
        {
          switch(enumValue)
          {
          case StatusCode::NOT_SET:
            return {};
          case StatusCode::Complete:
            return "Complete";
          case StatusCode::InternalError:
            return "InternalError";
          case StatusCode::PartialData:
            return "PartialData";
          case StatusCode::Forbidden:
            return "Forbidden";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusCodeMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws

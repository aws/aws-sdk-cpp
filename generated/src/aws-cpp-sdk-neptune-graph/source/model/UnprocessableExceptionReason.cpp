/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/UnprocessableExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace UnprocessableExceptionReasonMapper
      {

        static const int QUERY_TIMEOUT_HASH = HashingUtils::HashString("QUERY_TIMEOUT");
        static const int INTERNAL_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("INTERNAL_LIMIT_EXCEEDED");
        static const int MEMORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MEMORY_LIMIT_EXCEEDED");
        static const int STORAGE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("STORAGE_LIMIT_EXCEEDED");
        static const int PARTITION_FULL_HASH = HashingUtils::HashString("PARTITION_FULL");


        UnprocessableExceptionReason GetUnprocessableExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_TIMEOUT_HASH)
          {
            return UnprocessableExceptionReason::QUERY_TIMEOUT;
          }
          else if (hashCode == INTERNAL_LIMIT_EXCEEDED_HASH)
          {
            return UnprocessableExceptionReason::INTERNAL_LIMIT_EXCEEDED;
          }
          else if (hashCode == MEMORY_LIMIT_EXCEEDED_HASH)
          {
            return UnprocessableExceptionReason::MEMORY_LIMIT_EXCEEDED;
          }
          else if (hashCode == STORAGE_LIMIT_EXCEEDED_HASH)
          {
            return UnprocessableExceptionReason::STORAGE_LIMIT_EXCEEDED;
          }
          else if (hashCode == PARTITION_FULL_HASH)
          {
            return UnprocessableExceptionReason::PARTITION_FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnprocessableExceptionReason>(hashCode);
          }

          return UnprocessableExceptionReason::NOT_SET;
        }

        Aws::String GetNameForUnprocessableExceptionReason(UnprocessableExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case UnprocessableExceptionReason::NOT_SET:
            return {};
          case UnprocessableExceptionReason::QUERY_TIMEOUT:
            return "QUERY_TIMEOUT";
          case UnprocessableExceptionReason::INTERNAL_LIMIT_EXCEEDED:
            return "INTERNAL_LIMIT_EXCEEDED";
          case UnprocessableExceptionReason::MEMORY_LIMIT_EXCEEDED:
            return "MEMORY_LIMIT_EXCEEDED";
          case UnprocessableExceptionReason::STORAGE_LIMIT_EXCEEDED:
            return "STORAGE_LIMIT_EXCEEDED";
          case UnprocessableExceptionReason::PARTITION_FULL:
            return "PARTITION_FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnprocessableExceptionReasonMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws

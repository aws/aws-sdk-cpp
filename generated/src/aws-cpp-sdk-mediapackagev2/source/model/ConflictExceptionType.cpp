/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ConflictExceptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace ConflictExceptionTypeMapper
      {

        static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("RESOURCE_IN_USE");
        static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("RESOURCE_ALREADY_EXISTS");
        static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IDEMPOTENT_PARAMETER_MISMATCH");
        static const int CONFLICTING_OPERATION_HASH = HashingUtils::HashString("CONFLICTING_OPERATION");


        ConflictExceptionType GetConflictExceptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_IN_USE_HASH)
          {
            return ConflictExceptionType::RESOURCE_IN_USE;
          }
          else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
          {
            return ConflictExceptionType::RESOURCE_ALREADY_EXISTS;
          }
          else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
          {
            return ConflictExceptionType::IDEMPOTENT_PARAMETER_MISMATCH;
          }
          else if (hashCode == CONFLICTING_OPERATION_HASH)
          {
            return ConflictExceptionType::CONFLICTING_OPERATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictExceptionType>(hashCode);
          }

          return ConflictExceptionType::NOT_SET;
        }

        Aws::String GetNameForConflictExceptionType(ConflictExceptionType enumValue)
        {
          switch(enumValue)
          {
          case ConflictExceptionType::NOT_SET:
            return {};
          case ConflictExceptionType::RESOURCE_IN_USE:
            return "RESOURCE_IN_USE";
          case ConflictExceptionType::RESOURCE_ALREADY_EXISTS:
            return "RESOURCE_ALREADY_EXISTS";
          case ConflictExceptionType::IDEMPOTENT_PARAMETER_MISMATCH:
            return "IDEMPOTENT_PARAMETER_MISMATCH";
          case ConflictExceptionType::CONFLICTING_OPERATION:
            return "CONFLICTING_OPERATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictExceptionTypeMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

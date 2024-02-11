/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchainQuery
  {
    namespace Model
    {
      namespace ErrorTypeMapper
      {

        static const int VALIDATION_EXCEPTION_HASH = HashingUtils::HashString("VALIDATION_EXCEPTION");
        static const int RESOURCE_NOT_FOUND_EXCEPTION_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND_EXCEPTION");


        ErrorType GetErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_EXCEPTION_HASH)
          {
            return ErrorType::VALIDATION_EXCEPTION;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_EXCEPTION_HASH)
          {
            return ErrorType::RESOURCE_NOT_FOUND_EXCEPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorType>(hashCode);
          }

          return ErrorType::NOT_SET;
        }

        Aws::String GetNameForErrorType(ErrorType enumValue)
        {
          switch(enumValue)
          {
          case ErrorType::NOT_SET:
            return {};
          case ErrorType::VALIDATION_EXCEPTION:
            return "VALIDATION_EXCEPTION";
          case ErrorType::RESOURCE_NOT_FOUND_EXCEPTION:
            return "RESOURCE_NOT_FOUND_EXCEPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorTypeMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws

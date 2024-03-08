/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/VerificationError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace VerificationErrorMapper
      {

        static const int SERVICE_ERROR_HASH = HashingUtils::HashString("SERVICE_ERROR");
        static const int DNS_SERVER_ERROR_HASH = HashingUtils::HashString("DNS_SERVER_ERROR");
        static const int HOST_NOT_FOUND_HASH = HashingUtils::HashString("HOST_NOT_FOUND");
        static const int TYPE_NOT_FOUND_HASH = HashingUtils::HashString("TYPE_NOT_FOUND");
        static const int INVALID_VALUE_HASH = HashingUtils::HashString("INVALID_VALUE");


        VerificationError GetVerificationErrorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_ERROR_HASH)
          {
            return VerificationError::SERVICE_ERROR;
          }
          else if (hashCode == DNS_SERVER_ERROR_HASH)
          {
            return VerificationError::DNS_SERVER_ERROR;
          }
          else if (hashCode == HOST_NOT_FOUND_HASH)
          {
            return VerificationError::HOST_NOT_FOUND;
          }
          else if (hashCode == TYPE_NOT_FOUND_HASH)
          {
            return VerificationError::TYPE_NOT_FOUND;
          }
          else if (hashCode == INVALID_VALUE_HASH)
          {
            return VerificationError::INVALID_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerificationError>(hashCode);
          }

          return VerificationError::NOT_SET;
        }

        Aws::String GetNameForVerificationError(VerificationError enumValue)
        {
          switch(enumValue)
          {
          case VerificationError::NOT_SET:
            return {};
          case VerificationError::SERVICE_ERROR:
            return "SERVICE_ERROR";
          case VerificationError::DNS_SERVER_ERROR:
            return "DNS_SERVER_ERROR";
          case VerificationError::HOST_NOT_FOUND:
            return "HOST_NOT_FOUND";
          case VerificationError::TYPE_NOT_FOUND:
            return "TYPE_NOT_FOUND";
          case VerificationError::INVALID_VALUE:
            return "INVALID_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerificationErrorMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

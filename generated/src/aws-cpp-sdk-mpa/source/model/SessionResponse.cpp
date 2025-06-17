/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/SessionResponse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace SessionResponseMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int NO_RESPONSE_HASH = HashingUtils::HashString("NO_RESPONSE");


        SessionResponse GetSessionResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return SessionResponse::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return SessionResponse::REJECTED;
          }
          else if (hashCode == NO_RESPONSE_HASH)
          {
            return SessionResponse::NO_RESPONSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionResponse>(hashCode);
          }

          return SessionResponse::NOT_SET;
        }

        Aws::String GetNameForSessionResponse(SessionResponse enumValue)
        {
          switch(enumValue)
          {
          case SessionResponse::NOT_SET:
            return {};
          case SessionResponse::APPROVED:
            return "APPROVED";
          case SessionResponse::REJECTED:
            return "REJECTED";
          case SessionResponse::NO_RESPONSE:
            return "NO_RESPONSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionResponseMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/IdentityStatus.h>
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
      namespace IdentityStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");


        IdentityStatus GetIdentityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return IdentityStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return IdentityStatus::ACCEPTED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return IdentityStatus::REJECTED;
          }
          else if (hashCode == INVALID_HASH)
          {
            return IdentityStatus::INVALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityStatus>(hashCode);
          }

          return IdentityStatus::NOT_SET;
        }

        Aws::String GetNameForIdentityStatus(IdentityStatus enumValue)
        {
          switch(enumValue)
          {
          case IdentityStatus::NOT_SET:
            return {};
          case IdentityStatus::PENDING:
            return "PENDING";
          case IdentityStatus::ACCEPTED:
            return "ACCEPTED";
          case IdentityStatus::REJECTED:
            return "REJECTED";
          case IdentityStatus::INVALID:
            return "INVALID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityStatusMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws

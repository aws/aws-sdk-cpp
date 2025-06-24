/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/IdentitySourceStatus.h>
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
      namespace IdentitySourceStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        IdentitySourceStatus GetIdentitySourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return IdentitySourceStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IdentitySourceStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IdentitySourceStatus::DELETING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return IdentitySourceStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentitySourceStatus>(hashCode);
          }

          return IdentitySourceStatus::NOT_SET;
        }

        Aws::String GetNameForIdentitySourceStatus(IdentitySourceStatus enumValue)
        {
          switch(enumValue)
          {
          case IdentitySourceStatus::NOT_SET:
            return {};
          case IdentitySourceStatus::CREATING:
            return "CREATING";
          case IdentitySourceStatus::ACTIVE:
            return "ACTIVE";
          case IdentitySourceStatus::DELETING:
            return "DELETING";
          case IdentitySourceStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentitySourceStatusMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws

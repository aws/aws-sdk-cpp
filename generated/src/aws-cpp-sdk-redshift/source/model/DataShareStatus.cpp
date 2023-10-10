/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace DataShareStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_AUTHORIZATION_HASH = HashingUtils::HashString("PENDING_AUTHORIZATION");
        static const int AUTHORIZED_HASH = HashingUtils::HashString("AUTHORIZED");
        static const int DEAUTHORIZED_HASH = HashingUtils::HashString("DEAUTHORIZED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");


        DataShareStatus GetDataShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DataShareStatus::ACTIVE;
          }
          else if (hashCode == PENDING_AUTHORIZATION_HASH)
          {
            return DataShareStatus::PENDING_AUTHORIZATION;
          }
          else if (hashCode == AUTHORIZED_HASH)
          {
            return DataShareStatus::AUTHORIZED;
          }
          else if (hashCode == DEAUTHORIZED_HASH)
          {
            return DataShareStatus::DEAUTHORIZED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return DataShareStatus::REJECTED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DataShareStatus::AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataShareStatus>(hashCode);
          }

          return DataShareStatus::NOT_SET;
        }

        Aws::String GetNameForDataShareStatus(DataShareStatus enumValue)
        {
          switch(enumValue)
          {
          case DataShareStatus::NOT_SET:
            return {};
          case DataShareStatus::ACTIVE:
            return "ACTIVE";
          case DataShareStatus::PENDING_AUTHORIZATION:
            return "PENDING_AUTHORIZATION";
          case DataShareStatus::AUTHORIZED:
            return "AUTHORIZED";
          case DataShareStatus::DEAUTHORIZED:
            return "DEAUTHORIZED";
          case DataShareStatus::REJECTED:
            return "REJECTED";
          case DataShareStatus::AVAILABLE:
            return "AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataShareStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws

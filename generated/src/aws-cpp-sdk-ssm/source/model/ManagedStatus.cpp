/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ManagedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ManagedStatusMapper
      {

        static const int All_HASH = HashingUtils::HashString("All");
        static const int Managed_HASH = HashingUtils::HashString("Managed");
        static const int Unmanaged_HASH = HashingUtils::HashString("Unmanaged");


        ManagedStatus GetManagedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return ManagedStatus::All;
          }
          else if (hashCode == Managed_HASH)
          {
            return ManagedStatus::Managed;
          }
          else if (hashCode == Unmanaged_HASH)
          {
            return ManagedStatus::Unmanaged;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedStatus>(hashCode);
          }

          return ManagedStatus::NOT_SET;
        }

        Aws::String GetNameForManagedStatus(ManagedStatus enumValue)
        {
          switch(enumValue)
          {
          case ManagedStatus::NOT_SET:
            return {};
          case ManagedStatus::All:
            return "All";
          case ManagedStatus::Managed:
            return "Managed";
          case ManagedStatus::Unmanaged:
            return "Unmanaged";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

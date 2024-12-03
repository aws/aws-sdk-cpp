/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/NamespaceRegistrationStatus.h>
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
      namespace NamespaceRegistrationStatusMapper
      {

        static const int Registering_HASH = HashingUtils::HashString("Registering");
        static const int Deregistering_HASH = HashingUtils::HashString("Deregistering");


        NamespaceRegistrationStatus GetNamespaceRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Registering_HASH)
          {
            return NamespaceRegistrationStatus::Registering;
          }
          else if (hashCode == Deregistering_HASH)
          {
            return NamespaceRegistrationStatus::Deregistering;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceRegistrationStatus>(hashCode);
          }

          return NamespaceRegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForNamespaceRegistrationStatus(NamespaceRegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case NamespaceRegistrationStatus::NOT_SET:
            return {};
          case NamespaceRegistrationStatus::Registering:
            return "Registering";
          case NamespaceRegistrationStatus::Deregistering:
            return "Deregistering";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceRegistrationStatusMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws

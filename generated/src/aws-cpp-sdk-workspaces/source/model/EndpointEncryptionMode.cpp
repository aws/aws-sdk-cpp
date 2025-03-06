/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/EndpointEncryptionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace EndpointEncryptionModeMapper
      {

        static const int STANDARD_TLS_HASH = HashingUtils::HashString("STANDARD_TLS");
        static const int FIPS_VALIDATED_HASH = HashingUtils::HashString("FIPS_VALIDATED");


        EndpointEncryptionMode GetEndpointEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_TLS_HASH)
          {
            return EndpointEncryptionMode::STANDARD_TLS;
          }
          else if (hashCode == FIPS_VALIDATED_HASH)
          {
            return EndpointEncryptionMode::FIPS_VALIDATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointEncryptionMode>(hashCode);
          }

          return EndpointEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForEndpointEncryptionMode(EndpointEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case EndpointEncryptionMode::NOT_SET:
            return {};
          case EndpointEncryptionMode::STANDARD_TLS:
            return "STANDARD_TLS";
          case EndpointEncryptionMode::FIPS_VALIDATED:
            return "FIPS_VALIDATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointEncryptionModeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

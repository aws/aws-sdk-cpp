/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/AvailabilityProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace AvailabilityProviderTypeMapper
      {

        static const int EWS_HASH = HashingUtils::HashString("EWS");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        AvailabilityProviderType GetAvailabilityProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EWS_HASH)
          {
            return AvailabilityProviderType::EWS;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return AvailabilityProviderType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvailabilityProviderType>(hashCode);
          }

          return AvailabilityProviderType::NOT_SET;
        }

        Aws::String GetNameForAvailabilityProviderType(AvailabilityProviderType enumValue)
        {
          switch(enumValue)
          {
          case AvailabilityProviderType::NOT_SET:
            return {};
          case AvailabilityProviderType::EWS:
            return "EWS";
          case AvailabilityProviderType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AvailabilityProviderTypeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/RegistrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TaxSettings
  {
    namespace Model
    {
      namespace RegistrationTypeMapper
      {

        static const int Intra_EU_HASH = HashingUtils::HashString("Intra-EU");
        static const int Local_HASH = HashingUtils::HashString("Local");


        RegistrationType GetRegistrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Intra_EU_HASH)
          {
            return RegistrationType::Intra_EU;
          }
          else if (hashCode == Local_HASH)
          {
            return RegistrationType::Local;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationType>(hashCode);
          }

          return RegistrationType::NOT_SET;
        }

        Aws::String GetNameForRegistrationType(RegistrationType enumValue)
        {
          switch(enumValue)
          {
          case RegistrationType::NOT_SET:
            return {};
          case RegistrationType::Intra_EU:
            return "Intra-EU";
          case RegistrationType::Local:
            return "Local";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws

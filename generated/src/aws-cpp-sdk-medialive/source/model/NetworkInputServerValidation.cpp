/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NetworkInputServerValidation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace NetworkInputServerValidationMapper
      {

        static const int CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME_HASH = HashingUtils::HashString("CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME");
        static const int CHECK_CRYPTOGRAPHY_ONLY_HASH = HashingUtils::HashString("CHECK_CRYPTOGRAPHY_ONLY");


        NetworkInputServerValidation GetNetworkInputServerValidationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME_HASH)
          {
            return NetworkInputServerValidation::CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME;
          }
          else if (hashCode == CHECK_CRYPTOGRAPHY_ONLY_HASH)
          {
            return NetworkInputServerValidation::CHECK_CRYPTOGRAPHY_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInputServerValidation>(hashCode);
          }

          return NetworkInputServerValidation::NOT_SET;
        }

        Aws::String GetNameForNetworkInputServerValidation(NetworkInputServerValidation enumValue)
        {
          switch(enumValue)
          {
          case NetworkInputServerValidation::CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME:
            return "CHECK_CRYPTOGRAPHY_AND_VALIDATE_NAME";
          case NetworkInputServerValidation::CHECK_CRYPTOGRAPHY_ONLY:
            return "CHECK_CRYPTOGRAPHY_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInputServerValidationMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

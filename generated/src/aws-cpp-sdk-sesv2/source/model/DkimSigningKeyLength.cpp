/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimSigningKeyLength.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace DkimSigningKeyLengthMapper
      {

        static const int RSA_1024_BIT_HASH = HashingUtils::HashString("RSA_1024_BIT");
        static const int RSA_2048_BIT_HASH = HashingUtils::HashString("RSA_2048_BIT");


        DkimSigningKeyLength GetDkimSigningKeyLengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_1024_BIT_HASH)
          {
            return DkimSigningKeyLength::RSA_1024_BIT;
          }
          else if (hashCode == RSA_2048_BIT_HASH)
          {
            return DkimSigningKeyLength::RSA_2048_BIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DkimSigningKeyLength>(hashCode);
          }

          return DkimSigningKeyLength::NOT_SET;
        }

        Aws::String GetNameForDkimSigningKeyLength(DkimSigningKeyLength enumValue)
        {
          switch(enumValue)
          {
          case DkimSigningKeyLength::NOT_SET:
            return {};
          case DkimSigningKeyLength::RSA_1024_BIT:
            return "RSA_1024_BIT";
          case DkimSigningKeyLength::RSA_2048_BIT:
            return "RSA_2048_BIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DkimSigningKeyLengthMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws

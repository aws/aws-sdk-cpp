/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CmafEncryptionMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace CmafEncryptionMethodMapper
      {

        static const int CENC_HASH = HashingUtils::HashString("CENC");
        static const int CBCS_HASH = HashingUtils::HashString("CBCS");


        CmafEncryptionMethod GetCmafEncryptionMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENC_HASH)
          {
            return CmafEncryptionMethod::CENC;
          }
          else if (hashCode == CBCS_HASH)
          {
            return CmafEncryptionMethod::CBCS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafEncryptionMethod>(hashCode);
          }

          return CmafEncryptionMethod::NOT_SET;
        }

        Aws::String GetNameForCmafEncryptionMethod(CmafEncryptionMethod enumValue)
        {
          switch(enumValue)
          {
          case CmafEncryptionMethod::NOT_SET:
            return {};
          case CmafEncryptionMethod::CENC:
            return "CENC";
          case CmafEncryptionMethod::CBCS:
            return "CBCS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafEncryptionMethodMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

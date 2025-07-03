/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/IsmEncryptionMethod.h>
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
      namespace IsmEncryptionMethodMapper
      {

        static const int CENC_HASH = HashingUtils::HashString("CENC");


        IsmEncryptionMethod GetIsmEncryptionMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENC_HASH)
          {
            return IsmEncryptionMethod::CENC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsmEncryptionMethod>(hashCode);
          }

          return IsmEncryptionMethod::NOT_SET;
        }

        Aws::String GetNameForIsmEncryptionMethod(IsmEncryptionMethod enumValue)
        {
          switch(enumValue)
          {
          case IsmEncryptionMethod::NOT_SET:
            return {};
          case IsmEncryptionMethod::CENC:
            return "CENC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsmEncryptionMethodMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

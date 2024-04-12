/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ETagAlgorithmFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ETagAlgorithmFamilyMapper
      {

        static const int MD5up_HASH = HashingUtils::HashString("MD5up");
        static const int SHA256up_HASH = HashingUtils::HashString("SHA256up");
        static const int SHA512up_HASH = HashingUtils::HashString("SHA512up");


        ETagAlgorithmFamily GetETagAlgorithmFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MD5up_HASH)
          {
            return ETagAlgorithmFamily::MD5up;
          }
          else if (hashCode == SHA256up_HASH)
          {
            return ETagAlgorithmFamily::SHA256up;
          }
          else if (hashCode == SHA512up_HASH)
          {
            return ETagAlgorithmFamily::SHA512up;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ETagAlgorithmFamily>(hashCode);
          }

          return ETagAlgorithmFamily::NOT_SET;
        }

        Aws::String GetNameForETagAlgorithmFamily(ETagAlgorithmFamily enumValue)
        {
          switch(enumValue)
          {
          case ETagAlgorithmFamily::NOT_SET:
            return {};
          case ETagAlgorithmFamily::MD5up:
            return "MD5up";
          case ETagAlgorithmFamily::SHA256up:
            return "SHA256up";
          case ETagAlgorithmFamily::SHA512up:
            return "SHA512up";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ETagAlgorithmFamilyMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws

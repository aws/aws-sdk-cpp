/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/ChecksumType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SagemakerEdgeManager
  {
    namespace Model
    {
      namespace ChecksumTypeMapper
      {

        static const int SHA1_HASH = HashingUtils::HashString("SHA1");


        ChecksumType GetChecksumTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA1_HASH)
          {
            return ChecksumType::SHA1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChecksumType>(hashCode);
          }

          return ChecksumType::NOT_SET;
        }

        Aws::String GetNameForChecksumType(ChecksumType enumValue)
        {
          switch(enumValue)
          {
          case ChecksumType::NOT_SET:
            return {};
          case ChecksumType::SHA1:
            return "SHA1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChecksumTypeMapper
    } // namespace Model
  } // namespace SagemakerEdgeManager
} // namespace Aws

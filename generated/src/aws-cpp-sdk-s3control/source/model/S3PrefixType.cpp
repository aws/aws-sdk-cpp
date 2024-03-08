/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3PrefixType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3PrefixTypeMapper
      {

        static const int Object_HASH = HashingUtils::HashString("Object");


        S3PrefixType GetS3PrefixTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Object_HASH)
          {
            return S3PrefixType::Object;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3PrefixType>(hashCode);
          }

          return S3PrefixType::NOT_SET;
        }

        Aws::String GetNameForS3PrefixType(S3PrefixType enumValue)
        {
          switch(enumValue)
          {
          case S3PrefixType::NOT_SET:
            return {};
          case S3PrefixType::Object:
            return "Object";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3PrefixTypeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

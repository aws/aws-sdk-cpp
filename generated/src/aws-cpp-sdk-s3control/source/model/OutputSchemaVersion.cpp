/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/OutputSchemaVersion.h>
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
      namespace OutputSchemaVersionMapper
      {

        static const int V_1_HASH = HashingUtils::HashString("V_1");


        OutputSchemaVersion GetOutputSchemaVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V_1_HASH)
          {
            return OutputSchemaVersion::V_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputSchemaVersion>(hashCode);
          }

          return OutputSchemaVersion::NOT_SET;
        }

        Aws::String GetNameForOutputSchemaVersion(OutputSchemaVersion enumValue)
        {
          switch(enumValue)
          {
          case OutputSchemaVersion::V_1:
            return "V_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputSchemaVersionMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

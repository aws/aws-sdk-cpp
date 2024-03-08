/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetStatusMessageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace DatasetStatusMessageCodeMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int SERVICE_ERROR_HASH = HashingUtils::HashString("SERVICE_ERROR");
        static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");


        DatasetStatusMessageCode GetDatasetStatusMessageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return DatasetStatusMessageCode::SUCCESS;
          }
          else if (hashCode == SERVICE_ERROR_HASH)
          {
            return DatasetStatusMessageCode::SERVICE_ERROR;
          }
          else if (hashCode == CLIENT_ERROR_HASH)
          {
            return DatasetStatusMessageCode::CLIENT_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetStatusMessageCode>(hashCode);
          }

          return DatasetStatusMessageCode::NOT_SET;
        }

        Aws::String GetNameForDatasetStatusMessageCode(DatasetStatusMessageCode enumValue)
        {
          switch(enumValue)
          {
          case DatasetStatusMessageCode::NOT_SET:
            return {};
          case DatasetStatusMessageCode::SUCCESS:
            return "SUCCESS";
          case DatasetStatusMessageCode::SERVICE_ERROR:
            return "SERVICE_ERROR";
          case DatasetStatusMessageCode::CLIENT_ERROR:
            return "CLIENT_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetStatusMessageCodeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws

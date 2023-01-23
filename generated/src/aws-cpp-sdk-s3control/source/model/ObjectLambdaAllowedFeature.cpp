/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaAllowedFeature.h>
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
      namespace ObjectLambdaAllowedFeatureMapper
      {

        static const int GetObject_Range_HASH = HashingUtils::HashString("GetObject-Range");
        static const int GetObject_PartNumber_HASH = HashingUtils::HashString("GetObject-PartNumber");
        static const int HeadObject_Range_HASH = HashingUtils::HashString("HeadObject-Range");
        static const int HeadObject_PartNumber_HASH = HashingUtils::HashString("HeadObject-PartNumber");


        ObjectLambdaAllowedFeature GetObjectLambdaAllowedFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GetObject_Range_HASH)
          {
            return ObjectLambdaAllowedFeature::GetObject_Range;
          }
          else if (hashCode == GetObject_PartNumber_HASH)
          {
            return ObjectLambdaAllowedFeature::GetObject_PartNumber;
          }
          else if (hashCode == HeadObject_Range_HASH)
          {
            return ObjectLambdaAllowedFeature::HeadObject_Range;
          }
          else if (hashCode == HeadObject_PartNumber_HASH)
          {
            return ObjectLambdaAllowedFeature::HeadObject_PartNumber;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectLambdaAllowedFeature>(hashCode);
          }

          return ObjectLambdaAllowedFeature::NOT_SET;
        }

        Aws::String GetNameForObjectLambdaAllowedFeature(ObjectLambdaAllowedFeature enumValue)
        {
          switch(enumValue)
          {
          case ObjectLambdaAllowedFeature::GetObject_Range:
            return "GetObject-Range";
          case ObjectLambdaAllowedFeature::GetObject_PartNumber:
            return "GetObject-PartNumber";
          case ObjectLambdaAllowedFeature::HeadObject_Range:
            return "HeadObject-Range";
          case ObjectLambdaAllowedFeature::HeadObject_PartNumber:
            return "HeadObject-PartNumber";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectLambdaAllowedFeatureMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

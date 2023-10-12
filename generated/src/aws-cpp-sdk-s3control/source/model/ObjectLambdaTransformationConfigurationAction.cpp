/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaTransformationConfigurationAction.h>
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
      namespace ObjectLambdaTransformationConfigurationActionMapper
      {

        static constexpr uint32_t GetObject_HASH = ConstExprHashingUtils::HashString("GetObject");
        static constexpr uint32_t HeadObject_HASH = ConstExprHashingUtils::HashString("HeadObject");
        static constexpr uint32_t ListObjects_HASH = ConstExprHashingUtils::HashString("ListObjects");
        static constexpr uint32_t ListObjectsV2_HASH = ConstExprHashingUtils::HashString("ListObjectsV2");


        ObjectLambdaTransformationConfigurationAction GetObjectLambdaTransformationConfigurationActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GetObject_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::GetObject;
          }
          else if (hashCode == HeadObject_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::HeadObject;
          }
          else if (hashCode == ListObjects_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::ListObjects;
          }
          else if (hashCode == ListObjectsV2_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::ListObjectsV2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectLambdaTransformationConfigurationAction>(hashCode);
          }

          return ObjectLambdaTransformationConfigurationAction::NOT_SET;
        }

        Aws::String GetNameForObjectLambdaTransformationConfigurationAction(ObjectLambdaTransformationConfigurationAction enumValue)
        {
          switch(enumValue)
          {
          case ObjectLambdaTransformationConfigurationAction::NOT_SET:
            return {};
          case ObjectLambdaTransformationConfigurationAction::GetObject:
            return "GetObject";
          case ObjectLambdaTransformationConfigurationAction::HeadObject:
            return "HeadObject";
          case ObjectLambdaTransformationConfigurationAction::ListObjects:
            return "ListObjects";
          case ObjectLambdaTransformationConfigurationAction::ListObjectsV2:
            return "ListObjectsV2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectLambdaTransformationConfigurationActionMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

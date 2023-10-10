/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaAccessPointAliasStatus.h>
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
      namespace ObjectLambdaAccessPointAliasStatusMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int READY_HASH = HashingUtils::HashString("READY");


        ObjectLambdaAccessPointAliasStatus GetObjectLambdaAccessPointAliasStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return ObjectLambdaAccessPointAliasStatus::PROVISIONING;
          }
          else if (hashCode == READY_HASH)
          {
            return ObjectLambdaAccessPointAliasStatus::READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectLambdaAccessPointAliasStatus>(hashCode);
          }

          return ObjectLambdaAccessPointAliasStatus::NOT_SET;
        }

        Aws::String GetNameForObjectLambdaAccessPointAliasStatus(ObjectLambdaAccessPointAliasStatus enumValue)
        {
          switch(enumValue)
          {
          case ObjectLambdaAccessPointAliasStatus::NOT_SET:
            return {};
          case ObjectLambdaAccessPointAliasStatus::PROVISIONING:
            return "PROVISIONING";
          case ObjectLambdaAccessPointAliasStatus::READY:
            return "READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectLambdaAccessPointAliasStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

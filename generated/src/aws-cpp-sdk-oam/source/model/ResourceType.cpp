/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OAM
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int AWS_CloudWatch_Metric_HASH = HashingUtils::HashString("AWS::CloudWatch::Metric");
        static const int AWS_Logs_LogGroup_HASH = HashingUtils::HashString("AWS::Logs::LogGroup");
        static const int AWS_XRay_Trace_HASH = HashingUtils::HashString("AWS::XRay::Trace");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_CloudWatch_Metric_HASH)
          {
            return ResourceType::AWS_CloudWatch_Metric;
          }
          else if (hashCode == AWS_Logs_LogGroup_HASH)
          {
            return ResourceType::AWS_Logs_LogGroup;
          }
          else if (hashCode == AWS_XRay_Trace_HASH)
          {
            return ResourceType::AWS_XRay_Trace;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_CloudWatch_Metric:
            return "AWS::CloudWatch::Metric";
          case ResourceType::AWS_Logs_LogGroup:
            return "AWS::Logs::LogGroup";
          case ResourceType::AWS_XRay_Trace:
            return "AWS::XRay::Trace";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace OAM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int AWS_EC2_Instance_HASH = HashingUtils::HashString("AWS::EC2::Instance");
        static const int AWS_IoT_Thing_HASH = HashingUtils::HashString("AWS::IoT::Thing");
        static const int AWS_SSM_ManagedInstance_HASH = HashingUtils::HashString("AWS::SSM::ManagedInstance");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_Instance_HASH)
          {
            return SourceType::AWS_EC2_Instance;
          }
          else if (hashCode == AWS_IoT_Thing_HASH)
          {
            return SourceType::AWS_IoT_Thing;
          }
          else if (hashCode == AWS_SSM_ManagedInstance_HASH)
          {
            return SourceType::AWS_SSM_ManagedInstance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::NOT_SET:
            return {};
          case SourceType::AWS_EC2_Instance:
            return "AWS::EC2::Instance";
          case SourceType::AWS_IoT_Thing:
            return "AWS::IoT::Thing";
          case SourceType::AWS_SSM_ManagedInstance:
            return "AWS::SSM::ManagedInstance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

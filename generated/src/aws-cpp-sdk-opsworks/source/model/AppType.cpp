﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/AppType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace AppTypeMapper
      {

        static const int aws_flow_ruby_HASH = HashingUtils::HashString("aws-flow-ruby");
        static const int java_HASH = HashingUtils::HashString("java");
        static const int rails_HASH = HashingUtils::HashString("rails");
        static const int php_HASH = HashingUtils::HashString("php");
        static const int nodejs_HASH = HashingUtils::HashString("nodejs");
        static const int static__HASH = HashingUtils::HashString("static");
        static const int other_HASH = HashingUtils::HashString("other");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_flow_ruby_HASH)
          {
            return AppType::aws_flow_ruby;
          }
          else if (hashCode == java_HASH)
          {
            return AppType::java;
          }
          else if (hashCode == rails_HASH)
          {
            return AppType::rails;
          }
          else if (hashCode == php_HASH)
          {
            return AppType::php;
          }
          else if (hashCode == nodejs_HASH)
          {
            return AppType::nodejs;
          }
          else if (hashCode == static__HASH)
          {
            return AppType::static_;
          }
          else if (hashCode == other_HASH)
          {
            return AppType::other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppType>(hashCode);
          }

          return AppType::NOT_SET;
        }

        Aws::String GetNameForAppType(AppType enumValue)
        {
          switch(enumValue)
          {
          case AppType::NOT_SET:
            return {};
          case AppType::aws_flow_ruby:
            return "aws-flow-ruby";
          case AppType::java:
            return "java";
          case AppType::rails:
            return "rails";
          case AppType::php:
            return "php";
          case AppType::nodejs:
            return "nodejs";
          case AppType::static_:
            return "static";
          case AppType::other:
            return "other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppTypeMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppNetworkAccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppNetworkAccessTypeMapper
      {

        static const int PublicInternetOnly_HASH = HashingUtils::HashString("PublicInternetOnly");
        static const int VpcOnly_HASH = HashingUtils::HashString("VpcOnly");


        AppNetworkAccessType GetAppNetworkAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PublicInternetOnly_HASH)
          {
            return AppNetworkAccessType::PublicInternetOnly;
          }
          else if (hashCode == VpcOnly_HASH)
          {
            return AppNetworkAccessType::VpcOnly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppNetworkAccessType>(hashCode);
          }

          return AppNetworkAccessType::NOT_SET;
        }

        Aws::String GetNameForAppNetworkAccessType(AppNetworkAccessType enumValue)
        {
          switch(enumValue)
          {
          case AppNetworkAccessType::PublicInternetOnly:
            return "PublicInternetOnly";
          case AppNetworkAccessType::VpcOnly:
            return "VpcOnly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppNetworkAccessTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

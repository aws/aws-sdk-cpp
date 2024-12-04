/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PartnerAppAuthType.h>
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
      namespace PartnerAppAuthTypeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");


        PartnerAppAuthType GetPartnerAppAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return PartnerAppAuthType::IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartnerAppAuthType>(hashCode);
          }

          return PartnerAppAuthType::NOT_SET;
        }

        Aws::String GetNameForPartnerAppAuthType(PartnerAppAuthType enumValue)
        {
          switch(enumValue)
          {
          case PartnerAppAuthType::NOT_SET:
            return {};
          case PartnerAppAuthType::IAM:
            return "IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartnerAppAuthTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

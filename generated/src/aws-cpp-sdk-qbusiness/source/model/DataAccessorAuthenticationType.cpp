/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataAccessorAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace DataAccessorAuthenticationTypeMapper
      {

        static const int AWS_IAM_IDC_TTI_HASH = HashingUtils::HashString("AWS_IAM_IDC_TTI");
        static const int AWS_IAM_IDC_AUTH_CODE_HASH = HashingUtils::HashString("AWS_IAM_IDC_AUTH_CODE");


        DataAccessorAuthenticationType GetDataAccessorAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_IAM_IDC_TTI_HASH)
          {
            return DataAccessorAuthenticationType::AWS_IAM_IDC_TTI;
          }
          else if (hashCode == AWS_IAM_IDC_AUTH_CODE_HASH)
          {
            return DataAccessorAuthenticationType::AWS_IAM_IDC_AUTH_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataAccessorAuthenticationType>(hashCode);
          }

          return DataAccessorAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForDataAccessorAuthenticationType(DataAccessorAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case DataAccessorAuthenticationType::NOT_SET:
            return {};
          case DataAccessorAuthenticationType::AWS_IAM_IDC_TTI:
            return "AWS_IAM_IDC_TTI";
          case DataAccessorAuthenticationType::AWS_IAM_IDC_AUTH_CODE:
            return "AWS_IAM_IDC_AUTH_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataAccessorAuthenticationTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AWSServicePrincipal.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace AWSServicePrincipalMapper
      {

        static const int application_opensearchservice_amazonaws_com_HASH = HashingUtils::HashString("application.opensearchservice.amazonaws.com");


        AWSServicePrincipal GetAWSServicePrincipalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == application_opensearchservice_amazonaws_com_HASH)
          {
            return AWSServicePrincipal::application_opensearchservice_amazonaws_com;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AWSServicePrincipal>(hashCode);
          }

          return AWSServicePrincipal::NOT_SET;
        }

        Aws::String GetNameForAWSServicePrincipal(AWSServicePrincipal enumValue)
        {
          switch(enumValue)
          {
          case AWSServicePrincipal::NOT_SET:
            return {};
          case AWSServicePrincipal::application_opensearchservice_amazonaws_com:
            return "application.opensearchservice.amazonaws.com";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AWSServicePrincipalMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

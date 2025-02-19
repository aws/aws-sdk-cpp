/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/EnabledAnalysisType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace EnabledAnalysisTypeMapper
      {

        static const int TLS_SNI_HASH = HashingUtils::HashString("TLS_SNI");
        static const int HTTP_HOST_HASH = HashingUtils::HashString("HTTP_HOST");


        EnabledAnalysisType GetEnabledAnalysisTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS_SNI_HASH)
          {
            return EnabledAnalysisType::TLS_SNI;
          }
          else if (hashCode == HTTP_HOST_HASH)
          {
            return EnabledAnalysisType::HTTP_HOST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnabledAnalysisType>(hashCode);
          }

          return EnabledAnalysisType::NOT_SET;
        }

        Aws::String GetNameForEnabledAnalysisType(EnabledAnalysisType enumValue)
        {
          switch(enumValue)
          {
          case EnabledAnalysisType::NOT_SET:
            return {};
          case EnabledAnalysisType::TLS_SNI:
            return "TLS_SNI";
          case EnabledAnalysisType::HTTP_HOST:
            return "HTTP_HOST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnabledAnalysisTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws

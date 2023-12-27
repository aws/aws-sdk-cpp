﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ApplicationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ApplicationTypeMapper
      {

        static const int HANA_HASH = HashingUtils::HashString("HANA");
        static const int SAP_ABAP_HASH = HashingUtils::HashString("SAP_ABAP");


        ApplicationType GetApplicationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HANA_HASH)
          {
            return ApplicationType::HANA;
          }
          else if (hashCode == SAP_ABAP_HASH)
          {
            return ApplicationType::SAP_ABAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationType>(hashCode);
          }

          return ApplicationType::NOT_SET;
        }

        Aws::String GetNameForApplicationType(ApplicationType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationType::NOT_SET:
            return {};
          case ApplicationType::HANA:
            return "HANA";
          case ApplicationType::SAP_ABAP:
            return "SAP_ABAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ComponentType.h>
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
      namespace ComponentTypeMapper
      {

        static const int HANA_HASH = HashingUtils::HashString("HANA");
        static const int HANA_NODE_HASH = HashingUtils::HashString("HANA_NODE");
        static const int ABAP_HASH = HashingUtils::HashString("ABAP");
        static const int ASCS_HASH = HashingUtils::HashString("ASCS");
        static const int DIALOG_HASH = HashingUtils::HashString("DIALOG");
        static const int WEBDISP_HASH = HashingUtils::HashString("WEBDISP");
        static const int WD_HASH = HashingUtils::HashString("WD");
        static const int ERS_HASH = HashingUtils::HashString("ERS");


        ComponentType GetComponentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HANA_HASH)
          {
            return ComponentType::HANA;
          }
          else if (hashCode == HANA_NODE_HASH)
          {
            return ComponentType::HANA_NODE;
          }
          else if (hashCode == ABAP_HASH)
          {
            return ComponentType::ABAP;
          }
          else if (hashCode == ASCS_HASH)
          {
            return ComponentType::ASCS;
          }
          else if (hashCode == DIALOG_HASH)
          {
            return ComponentType::DIALOG;
          }
          else if (hashCode == WEBDISP_HASH)
          {
            return ComponentType::WEBDISP;
          }
          else if (hashCode == WD_HASH)
          {
            return ComponentType::WD;
          }
          else if (hashCode == ERS_HASH)
          {
            return ComponentType::ERS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentType>(hashCode);
          }

          return ComponentType::NOT_SET;
        }

        Aws::String GetNameForComponentType(ComponentType enumValue)
        {
          switch(enumValue)
          {
          case ComponentType::NOT_SET:
            return {};
          case ComponentType::HANA:
            return "HANA";
          case ComponentType::HANA_NODE:
            return "HANA_NODE";
          case ComponentType::ABAP:
            return "ABAP";
          case ComponentType::ASCS:
            return "ASCS";
          case ComponentType::DIALOG:
            return "DIALOG";
          case ComponentType::WEBDISP:
            return "WEBDISP";
          case ComponentType::WD:
            return "WD";
          case ComponentType::ERS:
            return "ERS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

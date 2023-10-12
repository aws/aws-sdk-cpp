/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/OperationFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace OperationFilterNameMapper
      {

        static constexpr uint32_t NAMESPACE_ID_HASH = ConstExprHashingUtils::HashString("NAMESPACE_ID");
        static constexpr uint32_t SERVICE_ID_HASH = ConstExprHashingUtils::HashString("SERVICE_ID");
        static constexpr uint32_t STATUS_HASH = ConstExprHashingUtils::HashString("STATUS");
        static constexpr uint32_t TYPE_HASH = ConstExprHashingUtils::HashString("TYPE");
        static constexpr uint32_t UPDATE_DATE_HASH = ConstExprHashingUtils::HashString("UPDATE_DATE");


        OperationFilterName GetOperationFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAMESPACE_ID_HASH)
          {
            return OperationFilterName::NAMESPACE_ID;
          }
          else if (hashCode == SERVICE_ID_HASH)
          {
            return OperationFilterName::SERVICE_ID;
          }
          else if (hashCode == STATUS_HASH)
          {
            return OperationFilterName::STATUS;
          }
          else if (hashCode == TYPE_HASH)
          {
            return OperationFilterName::TYPE;
          }
          else if (hashCode == UPDATE_DATE_HASH)
          {
            return OperationFilterName::UPDATE_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationFilterName>(hashCode);
          }

          return OperationFilterName::NOT_SET;
        }

        Aws::String GetNameForOperationFilterName(OperationFilterName enumValue)
        {
          switch(enumValue)
          {
          case OperationFilterName::NOT_SET:
            return {};
          case OperationFilterName::NAMESPACE_ID:
            return "NAMESPACE_ID";
          case OperationFilterName::SERVICE_ID:
            return "SERVICE_ID";
          case OperationFilterName::STATUS:
            return "STATUS";
          case OperationFilterName::TYPE:
            return "TYPE";
          case OperationFilterName::UPDATE_DATE:
            return "UPDATE_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationFilterNameMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws

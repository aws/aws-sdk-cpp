/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/OperationStatus.h>
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
      namespace OperationStatusMapper
      {

        static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPROGRESS_HASH)
          {
            return OperationStatus::INPROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return OperationStatus::SUCCESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return OperationStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationStatus>(hashCode);
          }

          return OperationStatus::NOT_SET;
        }

        Aws::String GetNameForOperationStatus(OperationStatus enumValue)
        {
          switch(enumValue)
          {
          case OperationStatus::INPROGRESS:
            return "INPROGRESS";
          case OperationStatus::SUCCESS:
            return "SUCCESS";
          case OperationStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

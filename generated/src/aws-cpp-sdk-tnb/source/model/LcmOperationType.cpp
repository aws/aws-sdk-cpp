/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/LcmOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace LcmOperationTypeMapper
      {

        static const int INSTANTIATE_HASH = HashingUtils::HashString("INSTANTIATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");


        LcmOperationType GetLcmOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANTIATE_HASH)
          {
            return LcmOperationType::INSTANTIATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return LcmOperationType::UPDATE;
          }
          else if (hashCode == TERMINATE_HASH)
          {
            return LcmOperationType::TERMINATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LcmOperationType>(hashCode);
          }

          return LcmOperationType::NOT_SET;
        }

        Aws::String GetNameForLcmOperationType(LcmOperationType enumValue)
        {
          switch(enumValue)
          {
          case LcmOperationType::NOT_SET:
            return {};
          case LcmOperationType::INSTANTIATE:
            return "INSTANTIATE";
          case LcmOperationType::UPDATE:
            return "UPDATE";
          case LcmOperationType::TERMINATE:
            return "TERMINATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LcmOperationTypeMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws

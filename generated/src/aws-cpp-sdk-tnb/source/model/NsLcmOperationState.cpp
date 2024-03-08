/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/NsLcmOperationState.h>
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
      namespace NsLcmOperationStateMapper
      {

        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        NsLcmOperationState GetNsLcmOperationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESSING_HASH)
          {
            return NsLcmOperationState::PROCESSING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return NsLcmOperationState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NsLcmOperationState::FAILED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return NsLcmOperationState::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return NsLcmOperationState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NsLcmOperationState>(hashCode);
          }

          return NsLcmOperationState::NOT_SET;
        }

        Aws::String GetNameForNsLcmOperationState(NsLcmOperationState enumValue)
        {
          switch(enumValue)
          {
          case NsLcmOperationState::NOT_SET:
            return {};
          case NsLcmOperationState::PROCESSING:
            return "PROCESSING";
          case NsLcmOperationState::COMPLETED:
            return "COMPLETED";
          case NsLcmOperationState::FAILED:
            return "FAILED";
          case NsLcmOperationState::CANCELLING:
            return "CANCELLING";
          case NsLcmOperationState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NsLcmOperationStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws

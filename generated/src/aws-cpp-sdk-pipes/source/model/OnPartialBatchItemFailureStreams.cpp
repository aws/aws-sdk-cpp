/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/OnPartialBatchItemFailureStreams.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace OnPartialBatchItemFailureStreamsMapper
      {

        static const int AUTOMATIC_BISECT_HASH = HashingUtils::HashString("AUTOMATIC_BISECT");


        OnPartialBatchItemFailureStreams GetOnPartialBatchItemFailureStreamsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_BISECT_HASH)
          {
            return OnPartialBatchItemFailureStreams::AUTOMATIC_BISECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnPartialBatchItemFailureStreams>(hashCode);
          }

          return OnPartialBatchItemFailureStreams::NOT_SET;
        }

        Aws::String GetNameForOnPartialBatchItemFailureStreams(OnPartialBatchItemFailureStreams enumValue)
        {
          switch(enumValue)
          {
          case OnPartialBatchItemFailureStreams::AUTOMATIC_BISECT:
            return "AUTOMATIC_BISECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnPartialBatchItemFailureStreamsMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws

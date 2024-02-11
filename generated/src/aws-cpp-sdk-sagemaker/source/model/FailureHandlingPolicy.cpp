/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FailureHandlingPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace FailureHandlingPolicyMapper
      {

        static const int ROLLBACK_ON_FAILURE_HASH = HashingUtils::HashString("ROLLBACK_ON_FAILURE");
        static const int DO_NOTHING_HASH = HashingUtils::HashString("DO_NOTHING");


        FailureHandlingPolicy GetFailureHandlingPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROLLBACK_ON_FAILURE_HASH)
          {
            return FailureHandlingPolicy::ROLLBACK_ON_FAILURE;
          }
          else if (hashCode == DO_NOTHING_HASH)
          {
            return FailureHandlingPolicy::DO_NOTHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureHandlingPolicy>(hashCode);
          }

          return FailureHandlingPolicy::NOT_SET;
        }

        Aws::String GetNameForFailureHandlingPolicy(FailureHandlingPolicy enumValue)
        {
          switch(enumValue)
          {
          case FailureHandlingPolicy::NOT_SET:
            return {};
          case FailureHandlingPolicy::ROLLBACK_ON_FAILURE:
            return "ROLLBACK_ON_FAILURE";
          case FailureHandlingPolicy::DO_NOTHING:
            return "DO_NOTHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureHandlingPolicyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

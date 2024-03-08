/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AssessmentInvoker.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace AssessmentInvokerMapper
      {

        static const int User_HASH = HashingUtils::HashString("User");
        static const int System_HASH = HashingUtils::HashString("System");


        AssessmentInvoker GetAssessmentInvokerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == User_HASH)
          {
            return AssessmentInvoker::User;
          }
          else if (hashCode == System_HASH)
          {
            return AssessmentInvoker::System;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentInvoker>(hashCode);
          }

          return AssessmentInvoker::NOT_SET;
        }

        Aws::String GetNameForAssessmentInvoker(AssessmentInvoker enumValue)
        {
          switch(enumValue)
          {
          case AssessmentInvoker::NOT_SET:
            return {};
          case AssessmentInvoker::User:
            return "User";
          case AssessmentInvoker::System:
            return "System";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentInvokerMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws

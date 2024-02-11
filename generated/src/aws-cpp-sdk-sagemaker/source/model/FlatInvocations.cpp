/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FlatInvocations.h>
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
      namespace FlatInvocationsMapper
      {

        static const int Continue_HASH = HashingUtils::HashString("Continue");
        static const int Stop_HASH = HashingUtils::HashString("Stop");


        FlatInvocations GetFlatInvocationsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Continue_HASH)
          {
            return FlatInvocations::Continue;
          }
          else if (hashCode == Stop_HASH)
          {
            return FlatInvocations::Stop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlatInvocations>(hashCode);
          }

          return FlatInvocations::NOT_SET;
        }

        Aws::String GetNameForFlatInvocations(FlatInvocations enumValue)
        {
          switch(enumValue)
          {
          case FlatInvocations::NOT_SET:
            return {};
          case FlatInvocations::Continue:
            return "Continue";
          case FlatInvocations::Stop:
            return "Stop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlatInvocationsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

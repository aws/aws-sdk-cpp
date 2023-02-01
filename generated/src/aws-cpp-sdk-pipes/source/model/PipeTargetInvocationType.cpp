/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetInvocationType.h>
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
      namespace PipeTargetInvocationTypeMapper
      {

        static const int REQUEST_RESPONSE_HASH = HashingUtils::HashString("REQUEST_RESPONSE");
        static const int FIRE_AND_FORGET_HASH = HashingUtils::HashString("FIRE_AND_FORGET");


        PipeTargetInvocationType GetPipeTargetInvocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUEST_RESPONSE_HASH)
          {
            return PipeTargetInvocationType::REQUEST_RESPONSE;
          }
          else if (hashCode == FIRE_AND_FORGET_HASH)
          {
            return PipeTargetInvocationType::FIRE_AND_FORGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipeTargetInvocationType>(hashCode);
          }

          return PipeTargetInvocationType::NOT_SET;
        }

        Aws::String GetNameForPipeTargetInvocationType(PipeTargetInvocationType enumValue)
        {
          switch(enumValue)
          {
          case PipeTargetInvocationType::REQUEST_RESPONSE:
            return "REQUEST_RESPONSE";
          case PipeTargetInvocationType::FIRE_AND_FORGET:
            return "FIRE_AND_FORGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipeTargetInvocationTypeMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/InputType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace InputTypeMapper
      {

        static const int REAL_TIME_HASH = HashingUtils::HashString("REAL_TIME");
        static const int POST_CALL_HASH = HashingUtils::HashString("POST_CALL");


        InputType GetInputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REAL_TIME_HASH)
          {
            return InputType::REAL_TIME;
          }
          else if (hashCode == POST_CALL_HASH)
          {
            return InputType::POST_CALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputType>(hashCode);
          }

          return InputType::NOT_SET;
        }

        Aws::String GetNameForInputType(InputType enumValue)
        {
          switch(enumValue)
          {
          case InputType::REAL_TIME:
            return "REAL_TIME";
          case InputType::POST_CALL:
            return "POST_CALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputTypeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws

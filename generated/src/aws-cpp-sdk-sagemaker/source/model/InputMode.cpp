/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InputMode.h>
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
      namespace InputModeMapper
      {

        static const int Pipe_HASH = HashingUtils::HashString("Pipe");
        static const int File_HASH = HashingUtils::HashString("File");


        InputMode GetInputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pipe_HASH)
          {
            return InputMode::Pipe;
          }
          else if (hashCode == File_HASH)
          {
            return InputMode::File;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputMode>(hashCode);
          }

          return InputMode::NOT_SET;
        }

        Aws::String GetNameForInputMode(InputMode enumValue)
        {
          switch(enumValue)
          {
          case InputMode::NOT_SET:
            return {};
          case InputMode::Pipe:
            return "Pipe";
          case InputMode::File:
            return "File";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

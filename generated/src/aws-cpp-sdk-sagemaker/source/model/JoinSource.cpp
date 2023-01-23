/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/JoinSource.h>
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
      namespace JoinSourceMapper
      {

        static const int Input_HASH = HashingUtils::HashString("Input");
        static const int None_HASH = HashingUtils::HashString("None");


        JoinSource GetJoinSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Input_HASH)
          {
            return JoinSource::Input;
          }
          else if (hashCode == None_HASH)
          {
            return JoinSource::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JoinSource>(hashCode);
          }

          return JoinSource::NOT_SET;
        }

        Aws::String GetNameForJoinSource(JoinSource enumValue)
        {
          switch(enumValue)
          {
          case JoinSource::Input:
            return "Input";
          case JoinSource::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JoinSourceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

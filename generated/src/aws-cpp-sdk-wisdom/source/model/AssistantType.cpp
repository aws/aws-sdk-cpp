/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/AssistantType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace AssistantTypeMapper
      {

        static const int AGENT_HASH = HashingUtils::HashString("AGENT");


        AssistantType GetAssistantTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_HASH)
          {
            return AssistantType::AGENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssistantType>(hashCode);
          }

          return AssistantType::NOT_SET;
        }

        Aws::String GetNameForAssistantType(AssistantType enumValue)
        {
          switch(enumValue)
          {
          case AssistantType::NOT_SET:
            return {};
          case AssistantType::AGENT:
            return "AGENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssistantTypeMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws

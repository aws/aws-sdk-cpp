/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AssistantCapabilityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace AssistantCapabilityTypeMapper
      {

        static const int V1_HASH = HashingUtils::HashString("V1");
        static const int V2_HASH = HashingUtils::HashString("V2");


        AssistantCapabilityType GetAssistantCapabilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_HASH)
          {
            return AssistantCapabilityType::V1;
          }
          else if (hashCode == V2_HASH)
          {
            return AssistantCapabilityType::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssistantCapabilityType>(hashCode);
          }

          return AssistantCapabilityType::NOT_SET;
        }

        Aws::String GetNameForAssistantCapabilityType(AssistantCapabilityType enumValue)
        {
          switch(enumValue)
          {
          case AssistantCapabilityType::NOT_SET:
            return {};
          case AssistantCapabilityType::V1:
            return "V1";
          case AssistantCapabilityType::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssistantCapabilityTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws

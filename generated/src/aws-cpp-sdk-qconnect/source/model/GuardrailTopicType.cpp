/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GuardrailTopicType.h>
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
      namespace GuardrailTopicTypeMapper
      {

        static const int DENY_HASH = HashingUtils::HashString("DENY");


        GuardrailTopicType GetGuardrailTopicTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DENY_HASH)
          {
            return GuardrailTopicType::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailTopicType>(hashCode);
          }

          return GuardrailTopicType::NOT_SET;
        }

        Aws::String GetNameForGuardrailTopicType(GuardrailTopicType enumValue)
        {
          switch(enumValue)
          {
          case GuardrailTopicType::NOT_SET:
            return {};
          case GuardrailTopicType::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailTopicTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws

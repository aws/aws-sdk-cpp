/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/ContextType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace ContextTypeMapper
      {

        static const int CAUSAL_HASH = HashingUtils::HashString("CAUSAL");
        static const int CONTEXTUAL_HASH = HashingUtils::HashString("CONTEXTUAL");


        ContextType GetContextTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAUSAL_HASH)
          {
            return ContextType::CAUSAL;
          }
          else if (hashCode == CONTEXTUAL_HASH)
          {
            return ContextType::CONTEXTUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContextType>(hashCode);
          }

          return ContextType::NOT_SET;
        }

        Aws::String GetNameForContextType(ContextType enumValue)
        {
          switch(enumValue)
          {
          case ContextType::NOT_SET:
            return {};
          case ContextType::CAUSAL:
            return "CAUSAL";
          case ContextType::CONTEXTUAL:
            return "CONTEXTUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContextTypeMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws

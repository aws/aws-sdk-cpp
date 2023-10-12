/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ChildPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace ChildPolicyMapper
      {

        static constexpr uint32_t TERMINATE_HASH = ConstExprHashingUtils::HashString("TERMINATE");
        static constexpr uint32_t REQUEST_CANCEL_HASH = ConstExprHashingUtils::HashString("REQUEST_CANCEL");
        static constexpr uint32_t ABANDON_HASH = ConstExprHashingUtils::HashString("ABANDON");


        ChildPolicy GetChildPolicyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERMINATE_HASH)
          {
            return ChildPolicy::TERMINATE;
          }
          else if (hashCode == REQUEST_CANCEL_HASH)
          {
            return ChildPolicy::REQUEST_CANCEL;
          }
          else if (hashCode == ABANDON_HASH)
          {
            return ChildPolicy::ABANDON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChildPolicy>(hashCode);
          }

          return ChildPolicy::NOT_SET;
        }

        Aws::String GetNameForChildPolicy(ChildPolicy enumValue)
        {
          switch(enumValue)
          {
          case ChildPolicy::NOT_SET:
            return {};
          case ChildPolicy::TERMINATE:
            return "TERMINATE";
          case ChildPolicy::REQUEST_CANCEL:
            return "REQUEST_CANCEL";
          case ChildPolicy::ABANDON:
            return "ABANDON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChildPolicyMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws

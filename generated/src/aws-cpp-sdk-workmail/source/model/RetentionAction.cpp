/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/RetentionAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace RetentionActionMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t PERMANENTLY_DELETE_HASH = ConstExprHashingUtils::HashString("PERMANENTLY_DELETE");


        RetentionAction GetRetentionActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return RetentionAction::NONE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return RetentionAction::DELETE_;
          }
          else if (hashCode == PERMANENTLY_DELETE_HASH)
          {
            return RetentionAction::PERMANENTLY_DELETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionAction>(hashCode);
          }

          return RetentionAction::NOT_SET;
        }

        Aws::String GetNameForRetentionAction(RetentionAction enumValue)
        {
          switch(enumValue)
          {
          case RetentionAction::NOT_SET:
            return {};
          case RetentionAction::NONE:
            return "NONE";
          case RetentionAction::DELETE_:
            return "DELETE";
          case RetentionAction::PERMANENTLY_DELETE:
            return "PERMANENTLY_DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionActionMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws

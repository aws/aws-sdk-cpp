/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/SubmissionMutationKind.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace SubmissionMutationKindMapper
      {

        static const int edit_HASH = HashingUtils::HashString("edit");
        static const int delete__HASH = HashingUtils::HashString("delete");
        static const int add_HASH = HashingUtils::HashString("add");


        SubmissionMutationKind GetSubmissionMutationKindForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == edit_HASH)
          {
            return SubmissionMutationKind::edit;
          }
          else if (hashCode == delete__HASH)
          {
            return SubmissionMutationKind::delete_;
          }
          else if (hashCode == add_HASH)
          {
            return SubmissionMutationKind::add;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubmissionMutationKind>(hashCode);
          }

          return SubmissionMutationKind::NOT_SET;
        }

        Aws::String GetNameForSubmissionMutationKind(SubmissionMutationKind enumValue)
        {
          switch(enumValue)
          {
          case SubmissionMutationKind::NOT_SET:
            return {};
          case SubmissionMutationKind::edit:
            return "edit";
          case SubmissionMutationKind::delete_:
            return "delete";
          case SubmissionMutationKind::add:
            return "add";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubmissionMutationKindMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws

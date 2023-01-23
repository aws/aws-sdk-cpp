/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/HITAccessActions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace HITAccessActionsMapper
      {

        static const int Accept_HASH = HashingUtils::HashString("Accept");
        static const int PreviewAndAccept_HASH = HashingUtils::HashString("PreviewAndAccept");
        static const int DiscoverPreviewAndAccept_HASH = HashingUtils::HashString("DiscoverPreviewAndAccept");


        HITAccessActions GetHITAccessActionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accept_HASH)
          {
            return HITAccessActions::Accept;
          }
          else if (hashCode == PreviewAndAccept_HASH)
          {
            return HITAccessActions::PreviewAndAccept;
          }
          else if (hashCode == DiscoverPreviewAndAccept_HASH)
          {
            return HITAccessActions::DiscoverPreviewAndAccept;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HITAccessActions>(hashCode);
          }

          return HITAccessActions::NOT_SET;
        }

        Aws::String GetNameForHITAccessActions(HITAccessActions enumValue)
        {
          switch(enumValue)
          {
          case HITAccessActions::Accept:
            return "Accept";
          case HITAccessActions::PreviewAndAccept:
            return "PreviewAndAccept";
          case HITAccessActions::DiscoverPreviewAndAccept:
            return "DiscoverPreviewAndAccept";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HITAccessActionsMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws

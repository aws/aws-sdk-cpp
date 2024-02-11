/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportFailureAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AssetBundleImportFailureActionMapper
      {

        static const int DO_NOTHING_HASH = HashingUtils::HashString("DO_NOTHING");
        static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");


        AssetBundleImportFailureAction GetAssetBundleImportFailureActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOTHING_HASH)
          {
            return AssetBundleImportFailureAction::DO_NOTHING;
          }
          else if (hashCode == ROLLBACK_HASH)
          {
            return AssetBundleImportFailureAction::ROLLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleImportFailureAction>(hashCode);
          }

          return AssetBundleImportFailureAction::NOT_SET;
        }

        Aws::String GetNameForAssetBundleImportFailureAction(AssetBundleImportFailureAction enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleImportFailureAction::NOT_SET:
            return {};
          case AssetBundleImportFailureAction::DO_NOTHING:
            return "DO_NOTHING";
          case AssetBundleImportFailureAction::ROLLBACK:
            return "ROLLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleImportFailureActionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

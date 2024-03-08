/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SharingModel.h>
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
      namespace SharingModelMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int NAMESPACE_HASH = HashingUtils::HashString("NAMESPACE");


        SharingModel GetSharingModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return SharingModel::ACCOUNT;
          }
          else if (hashCode == NAMESPACE_HASH)
          {
            return SharingModel::NAMESPACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharingModel>(hashCode);
          }

          return SharingModel::NOT_SET;
        }

        Aws::String GetNameForSharingModel(SharingModel enumValue)
        {
          switch(enumValue)
          {
          case SharingModel::NOT_SET:
            return {};
          case SharingModel::ACCOUNT:
            return "ACCOUNT";
          case SharingModel::NAMESPACE:
            return "NAMESPACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharingModelMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

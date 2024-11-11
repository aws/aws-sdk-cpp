/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageScopeOperationEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace PackageScopeOperationEnumMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int OVERRIDE_HASH = HashingUtils::HashString("OVERRIDE");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        PackageScopeOperationEnum GetPackageScopeOperationEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return PackageScopeOperationEnum::ADD;
          }
          else if (hashCode == OVERRIDE_HASH)
          {
            return PackageScopeOperationEnum::OVERRIDE;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return PackageScopeOperationEnum::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageScopeOperationEnum>(hashCode);
          }

          return PackageScopeOperationEnum::NOT_SET;
        }

        Aws::String GetNameForPackageScopeOperationEnum(PackageScopeOperationEnum enumValue)
        {
          switch(enumValue)
          {
          case PackageScopeOperationEnum::NOT_SET:
            return {};
          case PackageScopeOperationEnum::ADD:
            return "ADD";
          case PackageScopeOperationEnum::OVERRIDE:
            return "OVERRIDE";
          case PackageScopeOperationEnum::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageScopeOperationEnumMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

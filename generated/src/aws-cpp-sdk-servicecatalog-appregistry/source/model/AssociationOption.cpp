/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/AssociationOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRegistry
  {
    namespace Model
    {
      namespace AssociationOptionMapper
      {

        static const int APPLY_APPLICATION_TAG_HASH = HashingUtils::HashString("APPLY_APPLICATION_TAG");
        static const int SKIP_APPLICATION_TAG_HASH = HashingUtils::HashString("SKIP_APPLICATION_TAG");


        AssociationOption GetAssociationOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLY_APPLICATION_TAG_HASH)
          {
            return AssociationOption::APPLY_APPLICATION_TAG;
          }
          else if (hashCode == SKIP_APPLICATION_TAG_HASH)
          {
            return AssociationOption::SKIP_APPLICATION_TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationOption>(hashCode);
          }

          return AssociationOption::NOT_SET;
        }

        Aws::String GetNameForAssociationOption(AssociationOption enumValue)
        {
          switch(enumValue)
          {
          case AssociationOption::NOT_SET:
            return {};
          case AssociationOption::APPLY_APPLICATION_TAG:
            return "APPLY_APPLICATION_TAG";
          case AssociationOption::SKIP_APPLICATION_TAG:
            return "SKIP_APPLICATION_TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationOptionMapper
    } // namespace Model
  } // namespace AppRegistry
} // namespace Aws

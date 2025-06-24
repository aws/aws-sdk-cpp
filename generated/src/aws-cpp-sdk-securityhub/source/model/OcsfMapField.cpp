/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfMapField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace OcsfMapFieldMapper
      {

        static const int resources_tags_HASH = HashingUtils::HashString("resources.tags");


        OcsfMapField GetOcsfMapFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resources_tags_HASH)
          {
            return OcsfMapField::resources_tags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfMapField>(hashCode);
          }

          return OcsfMapField::NOT_SET;
        }

        Aws::String GetNameForOcsfMapField(OcsfMapField enumValue)
        {
          switch(enumValue)
          {
          case OcsfMapField::NOT_SET:
            return {};
          case OcsfMapField::resources_tags:
            return "resources.tags";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OcsfMapFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws

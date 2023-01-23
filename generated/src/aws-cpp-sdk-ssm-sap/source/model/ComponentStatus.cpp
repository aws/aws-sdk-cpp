/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ComponentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ComponentStatusMapper
      {

        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");


        ComponentStatus GetComponentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return ComponentStatus::ACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentStatus>(hashCode);
          }

          return ComponentStatus::NOT_SET;
        }

        Aws::String GetNameForComponentStatus(ComponentStatus enumValue)
        {
          switch(enumValue)
          {
          case ComponentStatus::ACTIVATED:
            return "ACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws

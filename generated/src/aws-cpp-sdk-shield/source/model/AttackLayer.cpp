/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackLayer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace AttackLayerMapper
      {

        static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        AttackLayer GetAttackLayerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NETWORK_HASH)
          {
            return AttackLayer::NETWORK;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return AttackLayer::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttackLayer>(hashCode);
          }

          return AttackLayer::NOT_SET;
        }

        Aws::String GetNameForAttackLayer(AttackLayer enumValue)
        {
          switch(enumValue)
          {
          case AttackLayer::NETWORK:
            return "NETWORK";
          case AttackLayer::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttackLayerMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws

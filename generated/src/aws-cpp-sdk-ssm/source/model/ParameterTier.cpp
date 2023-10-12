/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ParameterTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ParameterTierMapper
      {

        static constexpr uint32_t Standard_HASH = ConstExprHashingUtils::HashString("Standard");
        static constexpr uint32_t Advanced_HASH = ConstExprHashingUtils::HashString("Advanced");
        static constexpr uint32_t Intelligent_Tiering_HASH = ConstExprHashingUtils::HashString("Intelligent-Tiering");


        ParameterTier GetParameterTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return ParameterTier::Standard;
          }
          else if (hashCode == Advanced_HASH)
          {
            return ParameterTier::Advanced;
          }
          else if (hashCode == Intelligent_Tiering_HASH)
          {
            return ParameterTier::Intelligent_Tiering;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterTier>(hashCode);
          }

          return ParameterTier::NOT_SET;
        }

        Aws::String GetNameForParameterTier(ParameterTier enumValue)
        {
          switch(enumValue)
          {
          case ParameterTier::NOT_SET:
            return {};
          case ParameterTier::Standard:
            return "Standard";
          case ParameterTier::Advanced:
            return "Advanced";
          case ParameterTier::Intelligent_Tiering:
            return "Intelligent-Tiering";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTierMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

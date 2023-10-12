/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/Engine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace EngineMapper
      {

        static constexpr uint32_t standard_HASH = ConstExprHashingUtils::HashString("standard");
        static constexpr uint32_t neural_HASH = ConstExprHashingUtils::HashString("neural");


        Engine GetEngineForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return Engine::standard;
          }
          else if (hashCode == neural_HASH)
          {
            return Engine::neural;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Engine>(hashCode);
          }

          return Engine::NOT_SET;
        }

        Aws::String GetNameForEngine(Engine enumValue)
        {
          switch(enumValue)
          {
          case Engine::NOT_SET:
            return {};
          case Engine::standard:
            return "standard";
          case Engine::neural:
            return "neural";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngineMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws

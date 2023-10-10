/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/FiberOpticCableType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace FiberOpticCableTypeMapper
      {

        static const int SINGLE_MODE_HASH = HashingUtils::HashString("SINGLE_MODE");
        static const int MULTI_MODE_HASH = HashingUtils::HashString("MULTI_MODE");


        FiberOpticCableType GetFiberOpticCableTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_MODE_HASH)
          {
            return FiberOpticCableType::SINGLE_MODE;
          }
          else if (hashCode == MULTI_MODE_HASH)
          {
            return FiberOpticCableType::MULTI_MODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FiberOpticCableType>(hashCode);
          }

          return FiberOpticCableType::NOT_SET;
        }

        Aws::String GetNameForFiberOpticCableType(FiberOpticCableType enumValue)
        {
          switch(enumValue)
          {
          case FiberOpticCableType::NOT_SET:
            return {};
          case FiberOpticCableType::SINGLE_MODE:
            return "SINGLE_MODE";
          case FiberOpticCableType::MULTI_MODE:
            return "MULTI_MODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FiberOpticCableTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws

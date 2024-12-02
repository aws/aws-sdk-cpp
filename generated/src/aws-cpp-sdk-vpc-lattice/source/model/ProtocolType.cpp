/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ProtocolType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace ProtocolTypeMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");


        ProtocolType GetProtocolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return ProtocolType::TCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtocolType>(hashCode);
          }

          return ProtocolType::NOT_SET;
        }

        Aws::String GetNameForProtocolType(ProtocolType enumValue)
        {
          switch(enumValue)
          {
          case ProtocolType::NOT_SET:
            return {};
          case ProtocolType::TCP:
            return "TCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws

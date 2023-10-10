/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetGroupProtocol.h>
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
      namespace TargetGroupProtocolMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");


        TargetGroupProtocol GetTargetGroupProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return TargetGroupProtocol::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return TargetGroupProtocol::HTTPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetGroupProtocol>(hashCode);
          }

          return TargetGroupProtocol::NOT_SET;
        }

        Aws::String GetNameForTargetGroupProtocol(TargetGroupProtocol enumValue)
        {
          switch(enumValue)
          {
          case TargetGroupProtocol::NOT_SET:
            return {};
          case TargetGroupProtocol::HTTP:
            return "HTTP";
          case TargetGroupProtocol::HTTPS:
            return "HTTPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetGroupProtocolMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws

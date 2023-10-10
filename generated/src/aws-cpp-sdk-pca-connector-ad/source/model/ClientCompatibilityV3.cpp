/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ClientCompatibilityV3.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ClientCompatibilityV3Mapper
      {

        static const int WINDOWS_SERVER_2008_HASH = HashingUtils::HashString("WINDOWS_SERVER_2008");
        static const int WINDOWS_SERVER_2008_R2_HASH = HashingUtils::HashString("WINDOWS_SERVER_2008_R2");
        static const int WINDOWS_SERVER_2012_HASH = HashingUtils::HashString("WINDOWS_SERVER_2012");
        static const int WINDOWS_SERVER_2012_R2_HASH = HashingUtils::HashString("WINDOWS_SERVER_2012_R2");
        static const int WINDOWS_SERVER_2016_HASH = HashingUtils::HashString("WINDOWS_SERVER_2016");


        ClientCompatibilityV3 GetClientCompatibilityV3ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_SERVER_2008_HASH)
          {
            return ClientCompatibilityV3::WINDOWS_SERVER_2008;
          }
          else if (hashCode == WINDOWS_SERVER_2008_R2_HASH)
          {
            return ClientCompatibilityV3::WINDOWS_SERVER_2008_R2;
          }
          else if (hashCode == WINDOWS_SERVER_2012_HASH)
          {
            return ClientCompatibilityV3::WINDOWS_SERVER_2012;
          }
          else if (hashCode == WINDOWS_SERVER_2012_R2_HASH)
          {
            return ClientCompatibilityV3::WINDOWS_SERVER_2012_R2;
          }
          else if (hashCode == WINDOWS_SERVER_2016_HASH)
          {
            return ClientCompatibilityV3::WINDOWS_SERVER_2016;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientCompatibilityV3>(hashCode);
          }

          return ClientCompatibilityV3::NOT_SET;
        }

        Aws::String GetNameForClientCompatibilityV3(ClientCompatibilityV3 enumValue)
        {
          switch(enumValue)
          {
          case ClientCompatibilityV3::NOT_SET:
            return {};
          case ClientCompatibilityV3::WINDOWS_SERVER_2008:
            return "WINDOWS_SERVER_2008";
          case ClientCompatibilityV3::WINDOWS_SERVER_2008_R2:
            return "WINDOWS_SERVER_2008_R2";
          case ClientCompatibilityV3::WINDOWS_SERVER_2012:
            return "WINDOWS_SERVER_2012";
          case ClientCompatibilityV3::WINDOWS_SERVER_2012_R2:
            return "WINDOWS_SERVER_2012_R2";
          case ClientCompatibilityV3::WINDOWS_SERVER_2016:
            return "WINDOWS_SERVER_2016";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientCompatibilityV3Mapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws

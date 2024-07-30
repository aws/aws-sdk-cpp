/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolNetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace UpdateSolNetworkTypeMapper
      {

        static const int MODIFY_VNF_INFORMATION_HASH = HashingUtils::HashString("MODIFY_VNF_INFORMATION");
        static const int UPDATE_NS_HASH = HashingUtils::HashString("UPDATE_NS");


        UpdateSolNetworkType GetUpdateSolNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MODIFY_VNF_INFORMATION_HASH)
          {
            return UpdateSolNetworkType::MODIFY_VNF_INFORMATION;
          }
          else if (hashCode == UPDATE_NS_HASH)
          {
            return UpdateSolNetworkType::UPDATE_NS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateSolNetworkType>(hashCode);
          }

          return UpdateSolNetworkType::NOT_SET;
        }

        Aws::String GetNameForUpdateSolNetworkType(UpdateSolNetworkType enumValue)
        {
          switch(enumValue)
          {
          case UpdateSolNetworkType::NOT_SET:
            return {};
          case UpdateSolNetworkType::MODIFY_VNF_INFORMATION:
            return "MODIFY_VNF_INFORMATION";
          case UpdateSolNetworkType::UPDATE_NS:
            return "UPDATE_NS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateSolNetworkTypeMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws

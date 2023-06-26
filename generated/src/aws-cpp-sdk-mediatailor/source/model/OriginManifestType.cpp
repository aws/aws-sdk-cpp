/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/OriginManifestType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace OriginManifestTypeMapper
      {

        static const int SINGLE_PERIOD_HASH = HashingUtils::HashString("SINGLE_PERIOD");
        static const int MULTI_PERIOD_HASH = HashingUtils::HashString("MULTI_PERIOD");


        OriginManifestType GetOriginManifestTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_PERIOD_HASH)
          {
            return OriginManifestType::SINGLE_PERIOD;
          }
          else if (hashCode == MULTI_PERIOD_HASH)
          {
            return OriginManifestType::MULTI_PERIOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginManifestType>(hashCode);
          }

          return OriginManifestType::NOT_SET;
        }

        Aws::String GetNameForOriginManifestType(OriginManifestType enumValue)
        {
          switch(enumValue)
          {
          case OriginManifestType::SINGLE_PERIOD:
            return "SINGLE_PERIOD";
          case OriginManifestType::MULTI_PERIOD:
            return "MULTI_PERIOD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginManifestTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws

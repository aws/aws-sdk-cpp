﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafInitializationVectorInManifest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmafInitializationVectorInManifestMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        CmafInitializationVectorInManifest GetCmafInitializationVectorInManifestForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return CmafInitializationVectorInManifest::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return CmafInitializationVectorInManifest::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafInitializationVectorInManifest>(hashCode);
          }

          return CmafInitializationVectorInManifest::NOT_SET;
        }

        Aws::String GetNameForCmafInitializationVectorInManifest(CmafInitializationVectorInManifest enumValue)
        {
          switch(enumValue)
          {
          case CmafInitializationVectorInManifest::NOT_SET:
            return {};
          case CmafInitializationVectorInManifest::INCLUDE:
            return "INCLUDE";
          case CmafInitializationVectorInManifest::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafInitializationVectorInManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

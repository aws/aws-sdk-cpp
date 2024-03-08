/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ElevationReference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace ElevationReferenceMapper
      {

        static const int AGL_HASH = HashingUtils::HashString("AGL");
        static const int AMSL_HASH = HashingUtils::HashString("AMSL");


        ElevationReference GetElevationReferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGL_HASH)
          {
            return ElevationReference::AGL;
          }
          else if (hashCode == AMSL_HASH)
          {
            return ElevationReference::AMSL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElevationReference>(hashCode);
          }

          return ElevationReference::NOT_SET;
        }

        Aws::String GetNameForElevationReference(ElevationReference enumValue)
        {
          switch(enumValue)
          {
          case ElevationReference::NOT_SET:
            return {};
          case ElevationReference::AGL:
            return "AGL";
          case ElevationReference::AMSL:
            return "AMSL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ElevationReferenceMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws

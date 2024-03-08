/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/Accelerators.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace AcceleratorsMapper
      {

        static const int GPU_HASH = HashingUtils::HashString("GPU");


        Accelerators GetAcceleratorsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GPU_HASH)
          {
            return Accelerators::GPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Accelerators>(hashCode);
          }

          return Accelerators::NOT_SET;
        }

        Aws::String GetNameForAccelerators(Accelerators enumValue)
        {
          switch(enumValue)
          {
          case Accelerators::NOT_SET:
            return {};
          case Accelerators::GPU:
            return "GPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceleratorsMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws

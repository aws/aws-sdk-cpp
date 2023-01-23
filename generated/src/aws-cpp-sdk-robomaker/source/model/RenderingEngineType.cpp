/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RenderingEngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace RenderingEngineTypeMapper
      {

        static const int OGRE_HASH = HashingUtils::HashString("OGRE");


        RenderingEngineType GetRenderingEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OGRE_HASH)
          {
            return RenderingEngineType::OGRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenderingEngineType>(hashCode);
          }

          return RenderingEngineType::NOT_SET;
        }

        Aws::String GetNameForRenderingEngineType(RenderingEngineType enumValue)
        {
          switch(enumValue)
          {
          case RenderingEngineType::OGRE:
            return "OGRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenderingEngineTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws

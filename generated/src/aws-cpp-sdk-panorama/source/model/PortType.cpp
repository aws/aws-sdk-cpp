/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PortType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace PortTypeMapper
      {

        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int INT32_HASH = HashingUtils::HashString("INT32");
        static const int FLOAT32_HASH = HashingUtils::HashString("FLOAT32");
        static const int MEDIA_HASH = HashingUtils::HashString("MEDIA");


        PortType GetPortTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOOLEAN_HASH)
          {
            return PortType::BOOLEAN;
          }
          else if (hashCode == STRING_HASH)
          {
            return PortType::STRING;
          }
          else if (hashCode == INT32_HASH)
          {
            return PortType::INT32;
          }
          else if (hashCode == FLOAT32_HASH)
          {
            return PortType::FLOAT32;
          }
          else if (hashCode == MEDIA_HASH)
          {
            return PortType::MEDIA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortType>(hashCode);
          }

          return PortType::NOT_SET;
        }

        Aws::String GetNameForPortType(PortType enumValue)
        {
          switch(enumValue)
          {
          case PortType::NOT_SET:
            return {};
          case PortType::BOOLEAN:
            return "BOOLEAN";
          case PortType::STRING:
            return "STRING";
          case PortType::INT32:
            return "INT32";
          case PortType::FLOAT32:
            return "FLOAT32";
          case PortType::MEDIA:
            return "MEDIA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PortTypeMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws

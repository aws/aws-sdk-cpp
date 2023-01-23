/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace EngineTypeMapper
      {

        static const int ACTIVEMQ_HASH = HashingUtils::HashString("ACTIVEMQ");
        static const int RABBITMQ_HASH = HashingUtils::HashString("RABBITMQ");


        EngineType GetEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVEMQ_HASH)
          {
            return EngineType::ACTIVEMQ;
          }
          else if (hashCode == RABBITMQ_HASH)
          {
            return EngineType::RABBITMQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngineType>(hashCode);
          }

          return EngineType::NOT_SET;
        }

        Aws::String GetNameForEngineType(EngineType enumValue)
        {
          switch(enumValue)
          {
          case EngineType::ACTIVEMQ:
            return "ACTIVEMQ";
          case EngineType::RABBITMQ:
            return "RABBITMQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngineTypeMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws

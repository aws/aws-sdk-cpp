/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShareStatusForProducer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace DataShareStatusForProducerMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int AUTHORIZED_HASH = HashingUtils::HashString("AUTHORIZED");
        static const int PENDING_AUTHORIZATION_HASH = HashingUtils::HashString("PENDING_AUTHORIZATION");
        static const int DEAUTHORIZED_HASH = HashingUtils::HashString("DEAUTHORIZED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        DataShareStatusForProducer GetDataShareStatusForProducerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DataShareStatusForProducer::ACTIVE;
          }
          else if (hashCode == AUTHORIZED_HASH)
          {
            return DataShareStatusForProducer::AUTHORIZED;
          }
          else if (hashCode == PENDING_AUTHORIZATION_HASH)
          {
            return DataShareStatusForProducer::PENDING_AUTHORIZATION;
          }
          else if (hashCode == DEAUTHORIZED_HASH)
          {
            return DataShareStatusForProducer::DEAUTHORIZED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return DataShareStatusForProducer::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataShareStatusForProducer>(hashCode);
          }

          return DataShareStatusForProducer::NOT_SET;
        }

        Aws::String GetNameForDataShareStatusForProducer(DataShareStatusForProducer enumValue)
        {
          switch(enumValue)
          {
          case DataShareStatusForProducer::NOT_SET:
            return {};
          case DataShareStatusForProducer::ACTIVE:
            return "ACTIVE";
          case DataShareStatusForProducer::AUTHORIZED:
            return "AUTHORIZED";
          case DataShareStatusForProducer::PENDING_AUTHORIZATION:
            return "PENDING_AUTHORIZATION";
          case DataShareStatusForProducer::DEAUTHORIZED:
            return "DEAUTHORIZED";
          case DataShareStatusForProducer::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataShareStatusForProducerMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws

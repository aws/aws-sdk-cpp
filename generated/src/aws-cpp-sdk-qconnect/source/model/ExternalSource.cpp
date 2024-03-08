/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ExternalSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace ExternalSourceMapper
      {

        static const int AMAZON_CONNECT_HASH = HashingUtils::HashString("AMAZON_CONNECT");


        ExternalSource GetExternalSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_CONNECT_HASH)
          {
            return ExternalSource::AMAZON_CONNECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalSource>(hashCode);
          }

          return ExternalSource::NOT_SET;
        }

        Aws::String GetNameForExternalSource(ExternalSource enumValue)
        {
          switch(enumValue)
          {
          case ExternalSource::NOT_SET:
            return {};
          case ExternalSource::AMAZON_CONNECT:
            return "AMAZON_CONNECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExternalSourceMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws

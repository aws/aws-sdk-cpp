/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ContentAssociationType.h>
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
      namespace ContentAssociationTypeMapper
      {

        static const int AMAZON_CONNECT_GUIDE_HASH = HashingUtils::HashString("AMAZON_CONNECT_GUIDE");


        ContentAssociationType GetContentAssociationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_CONNECT_GUIDE_HASH)
          {
            return ContentAssociationType::AMAZON_CONNECT_GUIDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentAssociationType>(hashCode);
          }

          return ContentAssociationType::NOT_SET;
        }

        Aws::String GetNameForContentAssociationType(ContentAssociationType enumValue)
        {
          switch(enumValue)
          {
          case ContentAssociationType::NOT_SET:
            return {};
          case ContentAssociationType::AMAZON_CONNECT_GUIDE:
            return "AMAZON_CONNECT_GUIDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentAssociationTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws

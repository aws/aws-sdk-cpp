﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentMetadataEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentMetadataEnumMapper
      {

        static const int DocumentReviews_HASH = HashingUtils::HashString("DocumentReviews");


        DocumentMetadataEnum GetDocumentMetadataEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DocumentReviews_HASH)
          {
            return DocumentMetadataEnum::DocumentReviews;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentMetadataEnum>(hashCode);
          }

          return DocumentMetadataEnum::NOT_SET;
        }

        Aws::String GetNameForDocumentMetadataEnum(DocumentMetadataEnum enumValue)
        {
          switch(enumValue)
          {
          case DocumentMetadataEnum::DocumentReviews:
            return "DocumentReviews";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentMetadataEnumMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

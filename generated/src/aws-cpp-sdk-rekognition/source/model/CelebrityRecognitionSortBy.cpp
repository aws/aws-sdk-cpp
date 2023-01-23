/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CelebrityRecognitionSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace CelebrityRecognitionSortByMapper
      {

        static const int ID_HASH = HashingUtils::HashString("ID");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");


        CelebrityRecognitionSortBy GetCelebrityRecognitionSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ID_HASH)
          {
            return CelebrityRecognitionSortBy::ID;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return CelebrityRecognitionSortBy::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CelebrityRecognitionSortBy>(hashCode);
          }

          return CelebrityRecognitionSortBy::NOT_SET;
        }

        Aws::String GetNameForCelebrityRecognitionSortBy(CelebrityRecognitionSortBy enumValue)
        {
          switch(enumValue)
          {
          case CelebrityRecognitionSortBy::ID:
            return "ID";
          case CelebrityRecognitionSortBy::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CelebrityRecognitionSortByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws

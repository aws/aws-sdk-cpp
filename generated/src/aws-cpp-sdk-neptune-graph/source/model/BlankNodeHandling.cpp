/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/BlankNodeHandling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace BlankNodeHandlingMapper
      {

        static const int convertToIri_HASH = HashingUtils::HashString("convertToIri");


        BlankNodeHandling GetBlankNodeHandlingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == convertToIri_HASH)
          {
            return BlankNodeHandling::convertToIri;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlankNodeHandling>(hashCode);
          }

          return BlankNodeHandling::NOT_SET;
        }

        Aws::String GetNameForBlankNodeHandling(BlankNodeHandling enumValue)
        {
          switch(enumValue)
          {
          case BlankNodeHandling::NOT_SET:
            return {};
          case BlankNodeHandling::convertToIri:
            return "convertToIri";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlankNodeHandlingMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws

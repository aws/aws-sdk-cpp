/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/MultiValueHandlingType.h>
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
      namespace MultiValueHandlingTypeMapper
      {

        static const int TO_LIST_HASH = HashingUtils::HashString("TO_LIST");
        static const int PICK_FIRST_HASH = HashingUtils::HashString("PICK_FIRST");


        MultiValueHandlingType GetMultiValueHandlingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TO_LIST_HASH)
          {
            return MultiValueHandlingType::TO_LIST;
          }
          else if (hashCode == PICK_FIRST_HASH)
          {
            return MultiValueHandlingType::PICK_FIRST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultiValueHandlingType>(hashCode);
          }

          return MultiValueHandlingType::NOT_SET;
        }

        Aws::String GetNameForMultiValueHandlingType(MultiValueHandlingType enumValue)
        {
          switch(enumValue)
          {
          case MultiValueHandlingType::NOT_SET:
            return {};
          case MultiValueHandlingType::TO_LIST:
            return "TO_LIST";
          case MultiValueHandlingType::PICK_FIRST:
            return "PICK_FIRST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MultiValueHandlingTypeMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws

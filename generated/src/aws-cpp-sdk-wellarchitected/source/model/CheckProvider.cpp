/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CheckProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace CheckProviderMapper
      {

        static const int TRUSTED_ADVISOR_HASH = HashingUtils::HashString("TRUSTED_ADVISOR");


        CheckProvider GetCheckProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUSTED_ADVISOR_HASH)
          {
            return CheckProvider::TRUSTED_ADVISOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckProvider>(hashCode);
          }

          return CheckProvider::NOT_SET;
        }

        Aws::String GetNameForCheckProvider(CheckProvider enumValue)
        {
          switch(enumValue)
          {
          case CheckProvider::TRUSTED_ADVISOR:
            return "TRUSTED_ADVISOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CheckProviderMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws

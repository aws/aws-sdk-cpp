/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Commitment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CommitmentMapper
      {

        static const int ONE_YEAR_HASH = HashingUtils::HashString("ONE_YEAR");


        Commitment GetCommitmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_YEAR_HASH)
          {
            return Commitment::ONE_YEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Commitment>(hashCode);
          }

          return Commitment::NOT_SET;
        }

        Aws::String GetNameForCommitment(Commitment enumValue)
        {
          switch(enumValue)
          {
          case Commitment::ONE_YEAR:
            return "ONE_YEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommitmentMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

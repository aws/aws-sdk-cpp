/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/EncoderProfile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace EncoderProfileMapper
      {

        static const int main_HASH = HashingUtils::HashString("main");
        static const int high_HASH = HashingUtils::HashString("high");


        EncoderProfile GetEncoderProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == main_HASH)
          {
            return EncoderProfile::main;
          }
          else if (hashCode == high_HASH)
          {
            return EncoderProfile::high;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncoderProfile>(hashCode);
          }

          return EncoderProfile::NOT_SET;
        }

        Aws::String GetNameForEncoderProfile(EncoderProfile enumValue)
        {
          switch(enumValue)
          {
          case EncoderProfile::NOT_SET:
            return {};
          case EncoderProfile::main:
            return "main";
          case EncoderProfile::high:
            return "high";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncoderProfileMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ParametersFilterKey.h>
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
      namespace ParametersFilterKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int Type_HASH = HashingUtils::HashString("Type");
        static const int KeyId_HASH = HashingUtils::HashString("KeyId");


        ParametersFilterKey GetParametersFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ParametersFilterKey::Name;
          }
          else if (hashCode == Type_HASH)
          {
            return ParametersFilterKey::Type;
          }
          else if (hashCode == KeyId_HASH)
          {
            return ParametersFilterKey::KeyId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParametersFilterKey>(hashCode);
          }

          return ParametersFilterKey::NOT_SET;
        }

        Aws::String GetNameForParametersFilterKey(ParametersFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ParametersFilterKey::NOT_SET:
            return {};
          case ParametersFilterKey::Name:
            return "Name";
          case ParametersFilterKey::Type:
            return "Type";
          case ParametersFilterKey::KeyId:
            return "KeyId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParametersFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws

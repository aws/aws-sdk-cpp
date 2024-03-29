﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AutoMLSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        AutoMLSortBy GetAutoMLSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AutoMLSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return AutoMLSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return AutoMLSortBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLSortBy>(hashCode);
          }

          return AutoMLSortBy::NOT_SET;
        }

        Aws::String GetNameForAutoMLSortBy(AutoMLSortBy enumValue)
        {
          switch(enumValue)
          {
          case AutoMLSortBy::NOT_SET:
            return {};
          case AutoMLSortBy::Name:
            return "Name";
          case AutoMLSortBy::CreationTime:
            return "CreationTime";
          case AutoMLSortBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

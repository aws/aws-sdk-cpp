/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Application.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ApplicationMapper
      {

        static const int Microsoft_Office_2016_HASH = HashingUtils::HashString("Microsoft_Office_2016");
        static const int Microsoft_Office_2019_HASH = HashingUtils::HashString("Microsoft_Office_2019");


        Application GetApplicationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Microsoft_Office_2016_HASH)
          {
            return Application::Microsoft_Office_2016;
          }
          else if (hashCode == Microsoft_Office_2019_HASH)
          {
            return Application::Microsoft_Office_2019;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Application>(hashCode);
          }

          return Application::NOT_SET;
        }

        Aws::String GetNameForApplication(Application enumValue)
        {
          switch(enumValue)
          {
          case Application::Microsoft_Office_2016:
            return "Microsoft_Office_2016";
          case Application::Microsoft_Office_2019:
            return "Microsoft_Office_2019";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

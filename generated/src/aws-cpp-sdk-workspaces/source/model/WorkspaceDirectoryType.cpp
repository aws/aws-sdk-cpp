/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceDirectoryType.h>
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
      namespace WorkspaceDirectoryTypeMapper
      {

        static const int SIMPLE_AD_HASH = HashingUtils::HashString("SIMPLE_AD");
        static const int AD_CONNECTOR_HASH = HashingUtils::HashString("AD_CONNECTOR");
        static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
        static const int AWS_IAM_IDENTITY_CENTER_HASH = HashingUtils::HashString("AWS_IAM_IDENTITY_CENTER");


        WorkspaceDirectoryType GetWorkspaceDirectoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIMPLE_AD_HASH)
          {
            return WorkspaceDirectoryType::SIMPLE_AD;
          }
          else if (hashCode == AD_CONNECTOR_HASH)
          {
            return WorkspaceDirectoryType::AD_CONNECTOR;
          }
          else if (hashCode == CUSTOMER_MANAGED_HASH)
          {
            return WorkspaceDirectoryType::CUSTOMER_MANAGED;
          }
          else if (hashCode == AWS_IAM_IDENTITY_CENTER_HASH)
          {
            return WorkspaceDirectoryType::AWS_IAM_IDENTITY_CENTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceDirectoryType>(hashCode);
          }

          return WorkspaceDirectoryType::NOT_SET;
        }

        Aws::String GetNameForWorkspaceDirectoryType(WorkspaceDirectoryType enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceDirectoryType::NOT_SET:
            return {};
          case WorkspaceDirectoryType::SIMPLE_AD:
            return "SIMPLE_AD";
          case WorkspaceDirectoryType::AD_CONNECTOR:
            return "AD_CONNECTOR";
          case WorkspaceDirectoryType::CUSTOMER_MANAGED:
            return "CUSTOMER_MANAGED";
          case WorkspaceDirectoryType::AWS_IAM_IDENTITY_CENTER:
            return "AWS_IAM_IDENTITY_CENTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceDirectoryTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

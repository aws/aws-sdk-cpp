/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AssociationErrorCode.h>
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
      namespace AssociationErrorCodeMapper
      {

        static const int ValidationError_InsufficientDiskSpace_HASH = HashingUtils::HashString("ValidationError.InsufficientDiskSpace");
        static const int ValidationError_InsufficientMemory_HASH = HashingUtils::HashString("ValidationError.InsufficientMemory");
        static const int ValidationError_UnsupportedOperatingSystem_HASH = HashingUtils::HashString("ValidationError.UnsupportedOperatingSystem");
        static const int DeploymentError_InternalServerError_HASH = HashingUtils::HashString("DeploymentError.InternalServerError");
        static const int DeploymentError_WorkspaceUnreachable_HASH = HashingUtils::HashString("DeploymentError.WorkspaceUnreachable");


        AssociationErrorCode GetAssociationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ValidationError_InsufficientDiskSpace_HASH)
          {
            return AssociationErrorCode::ValidationError_InsufficientDiskSpace;
          }
          else if (hashCode == ValidationError_InsufficientMemory_HASH)
          {
            return AssociationErrorCode::ValidationError_InsufficientMemory;
          }
          else if (hashCode == ValidationError_UnsupportedOperatingSystem_HASH)
          {
            return AssociationErrorCode::ValidationError_UnsupportedOperatingSystem;
          }
          else if (hashCode == DeploymentError_InternalServerError_HASH)
          {
            return AssociationErrorCode::DeploymentError_InternalServerError;
          }
          else if (hashCode == DeploymentError_WorkspaceUnreachable_HASH)
          {
            return AssociationErrorCode::DeploymentError_WorkspaceUnreachable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationErrorCode>(hashCode);
          }

          return AssociationErrorCode::NOT_SET;
        }

        Aws::String GetNameForAssociationErrorCode(AssociationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case AssociationErrorCode::NOT_SET:
            return {};
          case AssociationErrorCode::ValidationError_InsufficientDiskSpace:
            return "ValidationError.InsufficientDiskSpace";
          case AssociationErrorCode::ValidationError_InsufficientMemory:
            return "ValidationError.InsufficientMemory";
          case AssociationErrorCode::ValidationError_UnsupportedOperatingSystem:
            return "ValidationError.UnsupportedOperatingSystem";
          case AssociationErrorCode::DeploymentError_InternalServerError:
            return "DeploymentError.InternalServerError";
          case AssociationErrorCode::DeploymentError_WorkspaceUnreachable:
            return "DeploymentError.WorkspaceUnreachable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationErrorCodeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws

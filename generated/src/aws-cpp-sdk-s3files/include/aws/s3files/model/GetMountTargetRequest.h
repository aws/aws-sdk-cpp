/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3Files_EXPORTS.h>

#include <utility>

namespace Aws {
namespace S3Files {
namespace Model {

/**
 */
class GetMountTargetRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API GetMountTargetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMountTarget"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the mount target to retrieve information for.</p>
   */
  inline const Aws::String& GetMountTargetId() const { return m_mountTargetId; }
  inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }
  template <typename MountTargetIdT = Aws::String>
  void SetMountTargetId(MountTargetIdT&& value) {
    m_mountTargetIdHasBeenSet = true;
    m_mountTargetId = std::forward<MountTargetIdT>(value);
  }
  template <typename MountTargetIdT = Aws::String>
  GetMountTargetRequest& WithMountTargetId(MountTargetIdT&& value) {
    SetMountTargetId(std::forward<MountTargetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mountTargetId;
  bool m_mountTargetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

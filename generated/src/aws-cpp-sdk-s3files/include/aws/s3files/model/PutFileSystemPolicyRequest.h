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
class PutFileSystemPolicyRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API PutFileSystemPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutFileSystemPolicy"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the S3 File System to apply the
   * resource policy to.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  PutFileSystemPolicyRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON-formatted resource policy to apply to the file system. The policy
   * defines the permissions for accessing the file system. The policy must be a
   * valid JSON document that follows IAM policy syntax.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  PutFileSystemPolicyRequest& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileSystemId;

  Aws::String m_policy;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_policyHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

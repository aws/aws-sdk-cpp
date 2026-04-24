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
namespace Http {
class URI;
}  // namespace Http
namespace S3Files {
namespace Model {

/**
 */
class ListMountTargetsRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API ListMountTargetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMountTargets"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  AWS_S3FILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Optional filter to list only mount targets associated with the specified S3
   * File System ID or Amazon Resource Name (ARN). If provided, only mount targets
   * for this file system will be returned in the response.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  ListMountTargetsRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to list only mount targets associated with the specified
   * access point ID or Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
  inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
  template <typename AccessPointIdT = Aws::String>
  void SetAccessPointId(AccessPointIdT&& value) {
    m_accessPointIdHasBeenSet = true;
    m_accessPointId = std::forward<AccessPointIdT>(value);
  }
  template <typename AccessPointIdT = Aws::String>
  ListMountTargetsRequest& WithAccessPointId(AccessPointIdT&& value) {
    SetAccessPointId(std::forward<AccessPointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of mount targets to return in a single response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMountTargetsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned from a previous call to continue listing mount
   * targets.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMountTargetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileSystemId;

  Aws::String m_accessPointId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_accessPointIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

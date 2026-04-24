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
class GetAccessPointRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API GetAccessPointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAccessPoint"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the access point to retrieve
   * information for.</p>
   */
  inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
  inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
  template <typename AccessPointIdT = Aws::String>
  void SetAccessPointId(AccessPointIdT&& value) {
    m_accessPointIdHasBeenSet = true;
    m_accessPointId = std::forward<AccessPointIdT>(value);
  }
  template <typename AccessPointIdT = Aws::String>
  GetAccessPointRequest& WithAccessPointId(AccessPointIdT&& value) {
    SetAccessPointId(std::forward<AccessPointIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessPointId;
  bool m_accessPointIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

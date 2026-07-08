/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/SSM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SSM {
namespace Model {

/**
 */
class DeleteCloudConnectorRequest : public SSMRequest {
 public:
  AWS_SSM_API DeleteCloudConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteCloudConnector"; }

  AWS_SSM_API Aws::String SerializePayload() const override;

  AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the cloud connector to delete.</p>
   */
  inline const Aws::String& GetCloudConnectorId() const { return m_cloudConnectorId; }
  inline bool CloudConnectorIdHasBeenSet() const { return m_cloudConnectorIdHasBeenSet; }
  template <typename CloudConnectorIdT = Aws::String>
  void SetCloudConnectorId(CloudConnectorIdT&& value) {
    m_cloudConnectorIdHasBeenSet = true;
    m_cloudConnectorId = std::forward<CloudConnectorIdT>(value);
  }
  template <typename CloudConnectorIdT = Aws::String>
  DeleteCloudConnectorRequest& WithCloudConnectorId(CloudConnectorIdT&& value) {
    SetCloudConnectorId(std::forward<CloudConnectorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudConnectorId;
  bool m_cloudConnectorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws

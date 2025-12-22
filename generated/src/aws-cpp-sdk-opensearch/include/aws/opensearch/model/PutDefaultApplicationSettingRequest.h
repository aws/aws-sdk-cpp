/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 */
class PutDefaultApplicationSettingRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API PutDefaultApplicationSettingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutDefaultApplicationSetting"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  PutDefaultApplicationSettingRequest& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to set the specified ARN as the default application. Set to false
   * to clear the default application.</p>
   */
  inline bool GetSetAsDefault() const { return m_setAsDefault; }
  inline bool SetAsDefaultHasBeenSet() const { return m_setAsDefaultHasBeenSet; }
  inline void SetSetAsDefault(bool value) {
    m_setAsDefaultHasBeenSet = true;
    m_setAsDefault = value;
  }
  inline PutDefaultApplicationSettingRequest& WithSetAsDefault(bool value) {
    SetSetAsDefault(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationArn;

  bool m_setAsDefault{false};
  bool m_applicationArnHasBeenSet = false;
  bool m_setAsDefaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws

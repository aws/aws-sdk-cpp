﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QBusiness {
namespace Model {

/**
 */
class GetChatResponseConfigurationRequest : public QBusinessRequest {
 public:
  AWS_QBUSINESS_API GetChatResponseConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetChatResponseConfiguration"; }

  AWS_QBUSINESS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Amazon Q Business application containing the
   * chat response configuration to retrieve.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetChatResponseConfigurationRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the chat response configuration to retrieve from the
   * specified application.</p>
   */
  inline const Aws::String& GetChatResponseConfigurationId() const { return m_chatResponseConfigurationId; }
  inline bool ChatResponseConfigurationIdHasBeenSet() const { return m_chatResponseConfigurationIdHasBeenSet; }
  template <typename ChatResponseConfigurationIdT = Aws::String>
  void SetChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) {
    m_chatResponseConfigurationIdHasBeenSet = true;
    m_chatResponseConfigurationId = std::forward<ChatResponseConfigurationIdT>(value);
  }
  template <typename ChatResponseConfigurationIdT = Aws::String>
  GetChatResponseConfigurationRequest& WithChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) {
    SetChatResponseConfigurationId(std::forward<ChatResponseConfigurationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;
  bool m_applicationIdHasBeenSet = false;

  Aws::String m_chatResponseConfigurationId;
  bool m_chatResponseConfigurationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws

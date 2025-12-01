/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/RetrievalConfiguration.h>

#include <utility>

namespace Aws {
namespace QConnect {
namespace Model {

/**
 */
class RetrieveRequest : public QConnectRequest {
 public:
  AWS_QCONNECT_API RetrieveRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Retrieve"; }

  AWS_QCONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect assistant for content
   * retrieval.</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  RetrieveRequest& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the content retrieval operation.</p>
   */
  inline const RetrievalConfiguration& GetRetrievalConfiguration() const { return m_retrievalConfiguration; }
  inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
  template <typename RetrievalConfigurationT = RetrievalConfiguration>
  void SetRetrievalConfiguration(RetrievalConfigurationT&& value) {
    m_retrievalConfigurationHasBeenSet = true;
    m_retrievalConfiguration = std::forward<RetrievalConfigurationT>(value);
  }
  template <typename RetrievalConfigurationT = RetrievalConfiguration>
  RetrieveRequest& WithRetrievalConfiguration(RetrievalConfigurationT&& value) {
    SetRetrievalConfiguration(std::forward<RetrievalConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query for content retrieval.</p>
   */
  inline const Aws::String& GetRetrievalQuery() const { return m_retrievalQuery; }
  inline bool RetrievalQueryHasBeenSet() const { return m_retrievalQueryHasBeenSet; }
  template <typename RetrievalQueryT = Aws::String>
  void SetRetrievalQuery(RetrievalQueryT&& value) {
    m_retrievalQueryHasBeenSet = true;
    m_retrievalQuery = std::forward<RetrievalQueryT>(value);
  }
  template <typename RetrievalQueryT = Aws::String>
  RetrieveRequest& WithRetrievalQuery(RetrievalQueryT&& value) {
    SetRetrievalQuery(std::forward<RetrievalQueryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assistantId;
  bool m_assistantIdHasBeenSet = false;

  RetrievalConfiguration m_retrievalConfiguration;
  bool m_retrievalConfigurationHasBeenSet = false;

  Aws::String m_retrievalQuery;
  bool m_retrievalQueryHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws

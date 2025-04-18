/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/SessionDataNamespace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/RuntimeSessionData.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateSessionDataRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateSessionDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSessionData"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    UpdateSessionDataRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    UpdateSessionDataRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace into which the session data is stored. Supported namespaces
     * are: Custom</p>
     */
    inline SessionDataNamespace GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(SessionDataNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline UpdateSessionDataRequest& WithNamespace(SessionDataNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data stored on the Amazon Q in Connect Session.</p>
     */
    inline const Aws::Vector<RuntimeSessionData>& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Vector<RuntimeSessionData>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Vector<RuntimeSessionData>>
    UpdateSessionDataRequest& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataT = RuntimeSessionData>
    UpdateSessionDataRequest& AddData(DataT&& value) { m_dataHasBeenSet = true; m_data.emplace_back(std::forward<DataT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    SessionDataNamespace m_namespace{SessionDataNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<RuntimeSessionData> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws

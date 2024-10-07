/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/SessionDataNamespace.h>
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
    AWS_QCONNECT_API UpdateSessionDataRequest();

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
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline UpdateSessionDataRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline UpdateSessionDataRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline UpdateSessionDataRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data stored on the Amazon Q in Connect Session.</p>
     */
    inline const Aws::Vector<RuntimeSessionData>& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Vector<RuntimeSessionData>& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Vector<RuntimeSessionData>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline UpdateSessionDataRequest& WithData(const Aws::Vector<RuntimeSessionData>& value) { SetData(value); return *this;}
    inline UpdateSessionDataRequest& WithData(Aws::Vector<RuntimeSessionData>&& value) { SetData(std::move(value)); return *this;}
    inline UpdateSessionDataRequest& AddData(const RuntimeSessionData& value) { m_dataHasBeenSet = true; m_data.push_back(value); return *this; }
    inline UpdateSessionDataRequest& AddData(RuntimeSessionData&& value) { m_dataHasBeenSet = true; m_data.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The namespace into which the session data is stored. Supported namespaces
     * are: Custom</p>
     */
    inline const SessionDataNamespace& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const SessionDataNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(SessionDataNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline UpdateSessionDataRequest& WithNamespace(const SessionDataNamespace& value) { SetNamespace(value); return *this;}
    inline UpdateSessionDataRequest& WithNamespace(SessionDataNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline UpdateSessionDataRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UpdateSessionDataRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UpdateSessionDataRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::Vector<RuntimeSessionData> m_data;
    bool m_dataHasBeenSet = false;

    SessionDataNamespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws

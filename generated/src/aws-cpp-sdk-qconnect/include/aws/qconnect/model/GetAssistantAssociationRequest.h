/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class GetAssistantAssociationRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API GetAssistantAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssistantAssociation"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the assistant association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantAssociationId() const { return m_assistantAssociationId; }
    inline bool AssistantAssociationIdHasBeenSet() const { return m_assistantAssociationIdHasBeenSet; }
    template<typename AssistantAssociationIdT = Aws::String>
    void SetAssistantAssociationId(AssistantAssociationIdT&& value) { m_assistantAssociationIdHasBeenSet = true; m_assistantAssociationId = std::forward<AssistantAssociationIdT>(value); }
    template<typename AssistantAssociationIdT = Aws::String>
    GetAssistantAssociationRequest& WithAssistantAssociationId(AssistantAssociationIdT&& value) { SetAssistantAssociationId(std::forward<AssistantAssociationIdT>(value)); return *this;}
    ///@}

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
    GetAssistantAssociationRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantAssociationId;
    bool m_assistantAssociationIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws

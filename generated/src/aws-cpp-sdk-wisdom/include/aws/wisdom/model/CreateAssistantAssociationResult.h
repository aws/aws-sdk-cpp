/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/AssistantAssociationData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectWisdomService
{
namespace Model
{
  class CreateAssistantAssociationResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API CreateAssistantAssociationResult() = default;
    AWS_CONNECTWISDOMSERVICE_API CreateAssistantAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateAssistantAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assistant association.</p>
     */
    inline const AssistantAssociationData& GetAssistantAssociation() const { return m_assistantAssociation; }
    template<typename AssistantAssociationT = AssistantAssociationData>
    void SetAssistantAssociation(AssistantAssociationT&& value) { m_assistantAssociationHasBeenSet = true; m_assistantAssociation = std::forward<AssistantAssociationT>(value); }
    template<typename AssistantAssociationT = AssistantAssociationData>
    CreateAssistantAssociationResult& WithAssistantAssociation(AssistantAssociationT&& value) { SetAssistantAssociation(std::forward<AssistantAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssistantAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssistantAssociationData m_assistantAssociation;
    bool m_assistantAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws

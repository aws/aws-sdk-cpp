/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SsmSap
{
namespace Model
{
  class UpdateApplicationSettingsResult
  {
  public:
    AWS_SSMSAP_API UpdateApplicationSettingsResult() = default;
    AWS_SSMSAP_API UpdateApplicationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API UpdateApplicationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The update message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UpdateApplicationSettingsResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the operations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperationIds() const { return m_operationIds; }
    template<typename OperationIdsT = Aws::Vector<Aws::String>>
    void SetOperationIds(OperationIdsT&& value) { m_operationIdsHasBeenSet = true; m_operationIds = std::forward<OperationIdsT>(value); }
    template<typename OperationIdsT = Aws::Vector<Aws::String>>
    UpdateApplicationSettingsResult& WithOperationIds(OperationIdsT&& value) { SetOperationIds(std::forward<OperationIdsT>(value)); return *this;}
    template<typename OperationIdsT = Aws::String>
    UpdateApplicationSettingsResult& AddOperationIds(OperationIdsT&& value) { m_operationIdsHasBeenSet = true; m_operationIds.emplace_back(std::forward<OperationIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApplicationSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_operationIds;
    bool m_operationIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

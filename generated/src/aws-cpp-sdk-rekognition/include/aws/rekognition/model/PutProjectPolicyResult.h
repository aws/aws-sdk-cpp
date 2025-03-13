/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class PutProjectPolicyResult
  {
  public:
    AWS_REKOGNITION_API PutProjectPolicyResult() = default;
    AWS_REKOGNITION_API PutProjectPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API PutProjectPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the project policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const { return m_policyRevisionId; }
    template<typename PolicyRevisionIdT = Aws::String>
    void SetPolicyRevisionId(PolicyRevisionIdT&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::forward<PolicyRevisionIdT>(value); }
    template<typename PolicyRevisionIdT = Aws::String>
    PutProjectPolicyResult& WithPolicyRevisionId(PolicyRevisionIdT&& value) { SetPolicyRevisionId(std::forward<PolicyRevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutProjectPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

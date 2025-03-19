/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationDescription.h>
#include <aws/ssm/model/FailedCreateAssociation.h>
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
namespace SSM
{
namespace Model
{
  class CreateAssociationBatchResult
  {
  public:
    AWS_SSM_API CreateAssociationBatchResult() = default;
    AWS_SSM_API CreateAssociationBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateAssociationBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline const Aws::Vector<AssociationDescription>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<AssociationDescription>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<AssociationDescription>>
    CreateAssociationBatchResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = AssociationDescription>
    CreateAssociationBatchResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associations that failed.</p>
     */
    inline const Aws::Vector<FailedCreateAssociation>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<FailedCreateAssociation>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<FailedCreateAssociation>>
    CreateAssociationBatchResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = FailedCreateAssociation>
    CreateAssociationBatchResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssociationBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationDescription> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<FailedCreateAssociation> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/UnprocessedStandardsControlAssociationUpdate.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchUpdateStandardsControlAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsResult() = default;
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard couldn't be updated. </p>
     */
    inline const Aws::Vector<UnprocessedStandardsControlAssociationUpdate>& GetUnprocessedAssociationUpdates() const { return m_unprocessedAssociationUpdates; }
    template<typename UnprocessedAssociationUpdatesT = Aws::Vector<UnprocessedStandardsControlAssociationUpdate>>
    void SetUnprocessedAssociationUpdates(UnprocessedAssociationUpdatesT&& value) { m_unprocessedAssociationUpdatesHasBeenSet = true; m_unprocessedAssociationUpdates = std::forward<UnprocessedAssociationUpdatesT>(value); }
    template<typename UnprocessedAssociationUpdatesT = Aws::Vector<UnprocessedStandardsControlAssociationUpdate>>
    BatchUpdateStandardsControlAssociationsResult& WithUnprocessedAssociationUpdates(UnprocessedAssociationUpdatesT&& value) { SetUnprocessedAssociationUpdates(std::forward<UnprocessedAssociationUpdatesT>(value)); return *this;}
    template<typename UnprocessedAssociationUpdatesT = UnprocessedStandardsControlAssociationUpdate>
    BatchUpdateStandardsControlAssociationsResult& AddUnprocessedAssociationUpdates(UnprocessedAssociationUpdatesT&& value) { m_unprocessedAssociationUpdatesHasBeenSet = true; m_unprocessedAssociationUpdates.emplace_back(std::forward<UnprocessedAssociationUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateStandardsControlAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnprocessedStandardsControlAssociationUpdate> m_unprocessedAssociationUpdates;
    bool m_unprocessedAssociationUpdatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

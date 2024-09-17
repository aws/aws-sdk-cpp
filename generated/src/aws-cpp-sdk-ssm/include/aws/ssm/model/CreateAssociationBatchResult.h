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
    AWS_SSM_API CreateAssociationBatchResult();
    AWS_SSM_API CreateAssociationBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateAssociationBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline const Aws::Vector<AssociationDescription>& GetSuccessful() const{ return m_successful; }
    inline void SetSuccessful(const Aws::Vector<AssociationDescription>& value) { m_successful = value; }
    inline void SetSuccessful(Aws::Vector<AssociationDescription>&& value) { m_successful = std::move(value); }
    inline CreateAssociationBatchResult& WithSuccessful(const Aws::Vector<AssociationDescription>& value) { SetSuccessful(value); return *this;}
    inline CreateAssociationBatchResult& WithSuccessful(Aws::Vector<AssociationDescription>&& value) { SetSuccessful(std::move(value)); return *this;}
    inline CreateAssociationBatchResult& AddSuccessful(const AssociationDescription& value) { m_successful.push_back(value); return *this; }
    inline CreateAssociationBatchResult& AddSuccessful(AssociationDescription&& value) { m_successful.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associations that failed.</p>
     */
    inline const Aws::Vector<FailedCreateAssociation>& GetFailed() const{ return m_failed; }
    inline void SetFailed(const Aws::Vector<FailedCreateAssociation>& value) { m_failed = value; }
    inline void SetFailed(Aws::Vector<FailedCreateAssociation>&& value) { m_failed = std::move(value); }
    inline CreateAssociationBatchResult& WithFailed(const Aws::Vector<FailedCreateAssociation>& value) { SetFailed(value); return *this;}
    inline CreateAssociationBatchResult& WithFailed(Aws::Vector<FailedCreateAssociation>&& value) { SetFailed(std::move(value)); return *this;}
    inline CreateAssociationBatchResult& AddFailed(const FailedCreateAssociation& value) { m_failed.push_back(value); return *this; }
    inline CreateAssociationBatchResult& AddFailed(FailedCreateAssociation&& value) { m_failed.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAssociationBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAssociationBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAssociationBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationDescription> m_successful;

    Aws::Vector<FailedCreateAssociation> m_failed;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

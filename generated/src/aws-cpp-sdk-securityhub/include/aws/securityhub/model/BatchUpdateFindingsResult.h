﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/securityhub/model/BatchUpdateFindingsUnprocessedFinding.h>
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
  class BatchUpdateFindingsResult
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsResult();
    AWS_SECURITYHUB_API BatchUpdateFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchUpdateFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of findings that were updated successfully.</p>
     */
    inline const Aws::Vector<AwsSecurityFindingIdentifier>& GetProcessedFindings() const{ return m_processedFindings; }
    inline void SetProcessedFindings(const Aws::Vector<AwsSecurityFindingIdentifier>& value) { m_processedFindings = value; }
    inline void SetProcessedFindings(Aws::Vector<AwsSecurityFindingIdentifier>&& value) { m_processedFindings = std::move(value); }
    inline BatchUpdateFindingsResult& WithProcessedFindings(const Aws::Vector<AwsSecurityFindingIdentifier>& value) { SetProcessedFindings(value); return *this;}
    inline BatchUpdateFindingsResult& WithProcessedFindings(Aws::Vector<AwsSecurityFindingIdentifier>&& value) { SetProcessedFindings(std::move(value)); return *this;}
    inline BatchUpdateFindingsResult& AddProcessedFindings(const AwsSecurityFindingIdentifier& value) { m_processedFindings.push_back(value); return *this; }
    inline BatchUpdateFindingsResult& AddProcessedFindings(AwsSecurityFindingIdentifier&& value) { m_processedFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of findings that were not updated.</p>
     */
    inline const Aws::Vector<BatchUpdateFindingsUnprocessedFinding>& GetUnprocessedFindings() const{ return m_unprocessedFindings; }
    inline void SetUnprocessedFindings(const Aws::Vector<BatchUpdateFindingsUnprocessedFinding>& value) { m_unprocessedFindings = value; }
    inline void SetUnprocessedFindings(Aws::Vector<BatchUpdateFindingsUnprocessedFinding>&& value) { m_unprocessedFindings = std::move(value); }
    inline BatchUpdateFindingsResult& WithUnprocessedFindings(const Aws::Vector<BatchUpdateFindingsUnprocessedFinding>& value) { SetUnprocessedFindings(value); return *this;}
    inline BatchUpdateFindingsResult& WithUnprocessedFindings(Aws::Vector<BatchUpdateFindingsUnprocessedFinding>&& value) { SetUnprocessedFindings(std::move(value)); return *this;}
    inline BatchUpdateFindingsResult& AddUnprocessedFindings(const BatchUpdateFindingsUnprocessedFinding& value) { m_unprocessedFindings.push_back(value); return *this; }
    inline BatchUpdateFindingsResult& AddUnprocessedFindings(BatchUpdateFindingsUnprocessedFinding&& value) { m_unprocessedFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AwsSecurityFindingIdentifier> m_processedFindings;

    Aws::Vector<BatchUpdateFindingsUnprocessedFinding> m_unprocessedFindings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

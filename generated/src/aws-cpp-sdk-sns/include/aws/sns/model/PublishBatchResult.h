/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/PublishBatchResultEntry.h>
#include <aws/sns/model/BatchResultErrorEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  class PublishBatchResult
  {
  public:
    AWS_SNS_API PublishBatchResult();
    AWS_SNS_API PublishBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API PublishBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline const Aws::Vector<PublishBatchResultEntry>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline void SetSuccessful(const Aws::Vector<PublishBatchResultEntry>& value) { m_successful = value; }

    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline void SetSuccessful(Aws::Vector<PublishBatchResultEntry>&& value) { m_successful = std::move(value); }

    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline PublishBatchResult& WithSuccessful(const Aws::Vector<PublishBatchResultEntry>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline PublishBatchResult& WithSuccessful(Aws::Vector<PublishBatchResultEntry>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline PublishBatchResult& AddSuccessful(const PublishBatchResultEntry& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>A list of successful <code>PublishBatch</code> responses.</p>
     */
    inline PublishBatchResult& AddSuccessful(PublishBatchResultEntry&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const{ return m_failed; }

    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline void SetFailed(const Aws::Vector<BatchResultErrorEntry>& value) { m_failed = value; }

    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline void SetFailed(Aws::Vector<BatchResultErrorEntry>&& value) { m_failed = std::move(value); }

    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline PublishBatchResult& WithFailed(const Aws::Vector<BatchResultErrorEntry>& value) { SetFailed(value); return *this;}

    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline PublishBatchResult& WithFailed(Aws::Vector<BatchResultErrorEntry>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline PublishBatchResult& AddFailed(const BatchResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>A list of failed <code>PublishBatch</code> responses. </p>
     */
    inline PublishBatchResult& AddFailed(BatchResultErrorEntry&& value) { m_failed.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PublishBatchResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PublishBatchResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PublishBatchResultEntry> m_successful;

    Aws::Vector<BatchResultErrorEntry> m_failed;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws

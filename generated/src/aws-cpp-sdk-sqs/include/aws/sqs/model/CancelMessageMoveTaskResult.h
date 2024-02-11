/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
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
namespace SQS
{
namespace Model
{
  class CancelMessageMoveTaskResult
  {
  public:
    AWS_SQS_API CancelMessageMoveTaskResult();
    AWS_SQS_API CancelMessageMoveTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SQS_API CancelMessageMoveTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The approximate number of messages already moved to the destination
     * queue.</p>
     */
    inline long long GetApproximateNumberOfMessagesMoved() const{ return m_approximateNumberOfMessagesMoved; }

    /**
     * <p>The approximate number of messages already moved to the destination
     * queue.</p>
     */
    inline void SetApproximateNumberOfMessagesMoved(long long value) { m_approximateNumberOfMessagesMoved = value; }

    /**
     * <p>The approximate number of messages already moved to the destination
     * queue.</p>
     */
    inline CancelMessageMoveTaskResult& WithApproximateNumberOfMessagesMoved(long long value) { SetApproximateNumberOfMessagesMoved(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelMessageMoveTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelMessageMoveTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelMessageMoveTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CancelMessageMoveTaskResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelMessageMoveTaskResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    long long m_approximateNumberOfMessagesMoved;

    Aws::String m_requestId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws

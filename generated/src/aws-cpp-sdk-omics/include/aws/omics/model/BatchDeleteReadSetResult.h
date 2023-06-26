/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetBatchError.h>
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
namespace Omics
{
namespace Model
{
  class BatchDeleteReadSetResult
  {
  public:
    AWS_OMICS_API BatchDeleteReadSetResult();
    AWS_OMICS_API BatchDeleteReadSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API BatchDeleteReadSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline const Aws::Vector<ReadSetBatchError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline void SetErrors(const Aws::Vector<ReadSetBatchError>& value) { m_errors = value; }

    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline void SetErrors(Aws::Vector<ReadSetBatchError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline BatchDeleteReadSetResult& WithErrors(const Aws::Vector<ReadSetBatchError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline BatchDeleteReadSetResult& WithErrors(Aws::Vector<ReadSetBatchError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline BatchDeleteReadSetResult& AddErrors(const ReadSetBatchError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Errors returned by individual delete operations.</p>
     */
    inline BatchDeleteReadSetResult& AddErrors(ReadSetBatchError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDeleteReadSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDeleteReadSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDeleteReadSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ReadSetBatchError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

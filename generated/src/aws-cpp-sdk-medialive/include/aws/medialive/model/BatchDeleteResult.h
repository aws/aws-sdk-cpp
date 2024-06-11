﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BatchFailedResultModel.h>
#include <aws/medialive/model/BatchSuccessfulResultModel.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for BatchDeleteResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDeleteResponse">AWS
   * API Reference</a></p>
   */
  class BatchDeleteResult
  {
  public:
    AWS_MEDIALIVE_API BatchDeleteResult();
    AWS_MEDIALIVE_API BatchDeleteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API BatchDeleteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of failed operations
     */
    inline const Aws::Vector<BatchFailedResultModel>& GetFailed() const{ return m_failed; }
    inline void SetFailed(const Aws::Vector<BatchFailedResultModel>& value) { m_failed = value; }
    inline void SetFailed(Aws::Vector<BatchFailedResultModel>&& value) { m_failed = std::move(value); }
    inline BatchDeleteResult& WithFailed(const Aws::Vector<BatchFailedResultModel>& value) { SetFailed(value); return *this;}
    inline BatchDeleteResult& WithFailed(Aws::Vector<BatchFailedResultModel>&& value) { SetFailed(std::move(value)); return *this;}
    inline BatchDeleteResult& AddFailed(const BatchFailedResultModel& value) { m_failed.push_back(value); return *this; }
    inline BatchDeleteResult& AddFailed(BatchFailedResultModel&& value) { m_failed.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of successful operations
     */
    inline const Aws::Vector<BatchSuccessfulResultModel>& GetSuccessful() const{ return m_successful; }
    inline void SetSuccessful(const Aws::Vector<BatchSuccessfulResultModel>& value) { m_successful = value; }
    inline void SetSuccessful(Aws::Vector<BatchSuccessfulResultModel>&& value) { m_successful = std::move(value); }
    inline BatchDeleteResult& WithSuccessful(const Aws::Vector<BatchSuccessfulResultModel>& value) { SetSuccessful(value); return *this;}
    inline BatchDeleteResult& WithSuccessful(Aws::Vector<BatchSuccessfulResultModel>&& value) { SetSuccessful(std::move(value)); return *this;}
    inline BatchDeleteResult& AddSuccessful(const BatchSuccessfulResultModel& value) { m_successful.push_back(value); return *this; }
    inline BatchDeleteResult& AddSuccessful(BatchSuccessfulResultModel&& value) { m_successful.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchFailedResultModel> m_failed;

    Aws::Vector<BatchSuccessfulResultModel> m_successful;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

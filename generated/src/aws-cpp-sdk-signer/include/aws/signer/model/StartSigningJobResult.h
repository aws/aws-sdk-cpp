﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{
  class StartSigningJobResult
  {
  public:
    AWS_SIGNER_API StartSigningJobResult();
    AWS_SIGNER_API StartSigningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API StartSigningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of your signing job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartSigningJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartSigningJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartSigningJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the signing job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const{ return m_jobOwner; }
    inline void SetJobOwner(const Aws::String& value) { m_jobOwner = value; }
    inline void SetJobOwner(Aws::String&& value) { m_jobOwner = std::move(value); }
    inline void SetJobOwner(const char* value) { m_jobOwner.assign(value); }
    inline StartSigningJobResult& WithJobOwner(const Aws::String& value) { SetJobOwner(value); return *this;}
    inline StartSigningJobResult& WithJobOwner(Aws::String&& value) { SetJobOwner(std::move(value)); return *this;}
    inline StartSigningJobResult& WithJobOwner(const char* value) { SetJobOwner(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSigningJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSigningJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSigningJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_jobOwner;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws

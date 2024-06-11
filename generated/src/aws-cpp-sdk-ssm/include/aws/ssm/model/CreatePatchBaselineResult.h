/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class CreatePatchBaselineResult
  {
  public:
    AWS_SSM_API CreatePatchBaselineResult();
    AWS_SSM_API CreatePatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreatePatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the created patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }
    inline CreatePatchBaselineResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}
    inline CreatePatchBaselineResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}
    inline CreatePatchBaselineResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePatchBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePatchBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePatchBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

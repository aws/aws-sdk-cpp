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
  class RegisterPatchBaselineForPatchGroupResult
  {
  public:
    AWS_SSM_API RegisterPatchBaselineForPatchGroupResult();
    AWS_SSM_API RegisterPatchBaselineForPatchGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API RegisterPatchBaselineForPatchGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the patch baseline the patch group was registered with.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }
    inline RegisterPatchBaselineForPatchGroupResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}
    inline RegisterPatchBaselineForPatchGroupResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}
    inline RegisterPatchBaselineForPatchGroupResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroup = value; }
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroup = std::move(value); }
    inline void SetPatchGroup(const char* value) { m_patchGroup.assign(value); }
    inline RegisterPatchBaselineForPatchGroupResult& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}
    inline RegisterPatchBaselineForPatchGroupResult& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}
    inline RegisterPatchBaselineForPatchGroupResult& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterPatchBaselineForPatchGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterPatchBaselineForPatchGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterPatchBaselineForPatchGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;

    Aws::String m_patchGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

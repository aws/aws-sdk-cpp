/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OperatingSystem.h>
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
  class GetPatchBaselineForPatchGroupResult
  {
  public:
    AWS_SSM_API GetPatchBaselineForPatchGroupResult();
    AWS_SSM_API GetPatchBaselineForPatchGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetPatchBaselineForPatchGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }

    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline that should be used for the patch group.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}


    /**
     * <p>The name of the patch group.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroup = value; }

    /**
     * <p>The name of the patch group.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroup = std::move(value); }

    /**
     * <p>The name of the patch group.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}


    /**
     * <p>The operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystem = value; }

    /**
     * <p>The operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline GetPatchBaselineForPatchGroupResult& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPatchBaselineForPatchGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPatchBaselineForPatchGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPatchBaselineForPatchGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_baselineId;

    Aws::String m_patchGroup;

    OperatingSystem m_operatingSystem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

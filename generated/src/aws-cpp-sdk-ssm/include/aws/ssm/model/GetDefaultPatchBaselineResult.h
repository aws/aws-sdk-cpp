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
  class GetDefaultPatchBaselineResult
  {
  public:
    AWS_SSM_API GetDefaultPatchBaselineResult();
    AWS_SSM_API GetDefaultPatchBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetDefaultPatchBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the default patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }
    inline GetDefaultPatchBaselineResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}
    inline GetDefaultPatchBaselineResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}
    inline GetDefaultPatchBaselineResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system for the returned patch baseline. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystem = std::move(value); }
    inline GetDefaultPatchBaselineResult& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline GetDefaultPatchBaselineResult& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDefaultPatchBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDefaultPatchBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDefaultPatchBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;

    OperatingSystem m_operatingSystem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

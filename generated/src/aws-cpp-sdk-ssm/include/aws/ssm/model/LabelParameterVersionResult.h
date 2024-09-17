/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class LabelParameterVersionResult
  {
  public:
    AWS_SSM_API LabelParameterVersionResult();
    AWS_SSM_API LabelParameterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API LabelParameterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The label doesn't meet the requirements. For information about parameter
     * label requirements, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-labels.html">Working
     * with parameter labels</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const{ return m_invalidLabels; }
    inline void SetInvalidLabels(const Aws::Vector<Aws::String>& value) { m_invalidLabels = value; }
    inline void SetInvalidLabels(Aws::Vector<Aws::String>&& value) { m_invalidLabels = std::move(value); }
    inline LabelParameterVersionResult& WithInvalidLabels(const Aws::Vector<Aws::String>& value) { SetInvalidLabels(value); return *this;}
    inline LabelParameterVersionResult& WithInvalidLabels(Aws::Vector<Aws::String>&& value) { SetInvalidLabels(std::move(value)); return *this;}
    inline LabelParameterVersionResult& AddInvalidLabels(const Aws::String& value) { m_invalidLabels.push_back(value); return *this; }
    inline LabelParameterVersionResult& AddInvalidLabels(Aws::String&& value) { m_invalidLabels.push_back(std::move(value)); return *this; }
    inline LabelParameterVersionResult& AddInvalidLabels(const char* value) { m_invalidLabels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the parameter that has been labeled.</p>
     */
    inline long long GetParameterVersion() const{ return m_parameterVersion; }
    inline void SetParameterVersion(long long value) { m_parameterVersion = value; }
    inline LabelParameterVersionResult& WithParameterVersion(long long value) { SetParameterVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline LabelParameterVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline LabelParameterVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline LabelParameterVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_invalidLabels;

    long long m_parameterVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

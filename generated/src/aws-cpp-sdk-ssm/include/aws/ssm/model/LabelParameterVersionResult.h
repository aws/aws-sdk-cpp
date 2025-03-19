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
    AWS_SSM_API LabelParameterVersionResult() = default;
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
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const { return m_invalidLabels; }
    template<typename InvalidLabelsT = Aws::Vector<Aws::String>>
    void SetInvalidLabels(InvalidLabelsT&& value) { m_invalidLabelsHasBeenSet = true; m_invalidLabels = std::forward<InvalidLabelsT>(value); }
    template<typename InvalidLabelsT = Aws::Vector<Aws::String>>
    LabelParameterVersionResult& WithInvalidLabels(InvalidLabelsT&& value) { SetInvalidLabels(std::forward<InvalidLabelsT>(value)); return *this;}
    template<typename InvalidLabelsT = Aws::String>
    LabelParameterVersionResult& AddInvalidLabels(InvalidLabelsT&& value) { m_invalidLabelsHasBeenSet = true; m_invalidLabels.emplace_back(std::forward<InvalidLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the parameter that has been labeled.</p>
     */
    inline long long GetParameterVersion() const { return m_parameterVersion; }
    inline void SetParameterVersion(long long value) { m_parameterVersionHasBeenSet = true; m_parameterVersion = value; }
    inline LabelParameterVersionResult& WithParameterVersion(long long value) { SetParameterVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    LabelParameterVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_invalidLabels;
    bool m_invalidLabelsHasBeenSet = false;

    long long m_parameterVersion{0};
    bool m_parameterVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

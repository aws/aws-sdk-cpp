/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/ValidationMessage.h>
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
namespace OSIS
{
namespace Model
{
  class ValidatePipelineResult
  {
  public:
    AWS_OSIS_API ValidatePipelineResult() = default;
    AWS_OSIS_API ValidatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API ValidatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A boolean indicating whether or not the pipeline configuration is valid.</p>
     */
    inline bool GetIsValid() const { return m_isValid; }
    inline void SetIsValid(bool value) { m_isValidHasBeenSet = true; m_isValid = value; }
    inline ValidatePipelineResult& WithIsValid(bool value) { SetIsValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline const Aws::Vector<ValidationMessage>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ValidationMessage>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ValidationMessage>>
    ValidatePipelineResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ValidationMessage>
    ValidatePipelineResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidatePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isValid{false};
    bool m_isValidHasBeenSet = false;

    Aws::Vector<ValidationMessage> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

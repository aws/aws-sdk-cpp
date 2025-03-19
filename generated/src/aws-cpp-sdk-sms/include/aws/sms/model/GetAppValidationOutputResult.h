/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ValidationOutput.h>
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
namespace SMS
{
namespace Model
{
  class GetAppValidationOutputResult
  {
  public:
    AWS_SMS_API GetAppValidationOutputResult() = default;
    AWS_SMS_API GetAppValidationOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppValidationOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The validation output.</p>
     */
    inline const Aws::Vector<ValidationOutput>& GetValidationOutputList() const { return m_validationOutputList; }
    template<typename ValidationOutputListT = Aws::Vector<ValidationOutput>>
    void SetValidationOutputList(ValidationOutputListT&& value) { m_validationOutputListHasBeenSet = true; m_validationOutputList = std::forward<ValidationOutputListT>(value); }
    template<typename ValidationOutputListT = Aws::Vector<ValidationOutput>>
    GetAppValidationOutputResult& WithValidationOutputList(ValidationOutputListT&& value) { SetValidationOutputList(std::forward<ValidationOutputListT>(value)); return *this;}
    template<typename ValidationOutputListT = ValidationOutput>
    GetAppValidationOutputResult& AddValidationOutputList(ValidationOutputListT&& value) { m_validationOutputListHasBeenSet = true; m_validationOutputList.emplace_back(std::forward<ValidationOutputListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppValidationOutputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ValidationOutput> m_validationOutputList;
    bool m_validationOutputListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

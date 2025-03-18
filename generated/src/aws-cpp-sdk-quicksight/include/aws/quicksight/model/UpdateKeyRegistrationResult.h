/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FailedKeyRegistrationEntry.h>
#include <aws/quicksight/model/SuccessfulKeyRegistrationEntry.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateKeyRegistrationResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateKeyRegistrationResult() = default;
    AWS_QUICKSIGHT_API UpdateKeyRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateKeyRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all customer managed key registrations that failed to update.</p>
     */
    inline const Aws::Vector<FailedKeyRegistrationEntry>& GetFailedKeyRegistration() const { return m_failedKeyRegistration; }
    template<typename FailedKeyRegistrationT = Aws::Vector<FailedKeyRegistrationEntry>>
    void SetFailedKeyRegistration(FailedKeyRegistrationT&& value) { m_failedKeyRegistrationHasBeenSet = true; m_failedKeyRegistration = std::forward<FailedKeyRegistrationT>(value); }
    template<typename FailedKeyRegistrationT = Aws::Vector<FailedKeyRegistrationEntry>>
    UpdateKeyRegistrationResult& WithFailedKeyRegistration(FailedKeyRegistrationT&& value) { SetFailedKeyRegistration(std::forward<FailedKeyRegistrationT>(value)); return *this;}
    template<typename FailedKeyRegistrationT = FailedKeyRegistrationEntry>
    UpdateKeyRegistrationResult& AddFailedKeyRegistration(FailedKeyRegistrationT&& value) { m_failedKeyRegistrationHasBeenSet = true; m_failedKeyRegistration.emplace_back(std::forward<FailedKeyRegistrationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of all customer managed key registrations that were successfully
     * updated.</p>
     */
    inline const Aws::Vector<SuccessfulKeyRegistrationEntry>& GetSuccessfulKeyRegistration() const { return m_successfulKeyRegistration; }
    template<typename SuccessfulKeyRegistrationT = Aws::Vector<SuccessfulKeyRegistrationEntry>>
    void SetSuccessfulKeyRegistration(SuccessfulKeyRegistrationT&& value) { m_successfulKeyRegistrationHasBeenSet = true; m_successfulKeyRegistration = std::forward<SuccessfulKeyRegistrationT>(value); }
    template<typename SuccessfulKeyRegistrationT = Aws::Vector<SuccessfulKeyRegistrationEntry>>
    UpdateKeyRegistrationResult& WithSuccessfulKeyRegistration(SuccessfulKeyRegistrationT&& value) { SetSuccessfulKeyRegistration(std::forward<SuccessfulKeyRegistrationT>(value)); return *this;}
    template<typename SuccessfulKeyRegistrationT = SuccessfulKeyRegistrationEntry>
    UpdateKeyRegistrationResult& AddSuccessfulKeyRegistration(SuccessfulKeyRegistrationT&& value) { m_successfulKeyRegistrationHasBeenSet = true; m_successfulKeyRegistration.emplace_back(std::forward<SuccessfulKeyRegistrationT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateKeyRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedKeyRegistrationEntry> m_failedKeyRegistration;
    bool m_failedKeyRegistrationHasBeenSet = false;

    Aws::Vector<SuccessfulKeyRegistrationEntry> m_successfulKeyRegistration;
    bool m_successfulKeyRegistrationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

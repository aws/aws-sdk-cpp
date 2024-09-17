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
    AWS_QUICKSIGHT_API UpdateKeyRegistrationResult();
    AWS_QUICKSIGHT_API UpdateKeyRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateKeyRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all customer managed key registrations that failed to update.</p>
     */
    inline const Aws::Vector<FailedKeyRegistrationEntry>& GetFailedKeyRegistration() const{ return m_failedKeyRegistration; }
    inline void SetFailedKeyRegistration(const Aws::Vector<FailedKeyRegistrationEntry>& value) { m_failedKeyRegistration = value; }
    inline void SetFailedKeyRegistration(Aws::Vector<FailedKeyRegistrationEntry>&& value) { m_failedKeyRegistration = std::move(value); }
    inline UpdateKeyRegistrationResult& WithFailedKeyRegistration(const Aws::Vector<FailedKeyRegistrationEntry>& value) { SetFailedKeyRegistration(value); return *this;}
    inline UpdateKeyRegistrationResult& WithFailedKeyRegistration(Aws::Vector<FailedKeyRegistrationEntry>&& value) { SetFailedKeyRegistration(std::move(value)); return *this;}
    inline UpdateKeyRegistrationResult& AddFailedKeyRegistration(const FailedKeyRegistrationEntry& value) { m_failedKeyRegistration.push_back(value); return *this; }
    inline UpdateKeyRegistrationResult& AddFailedKeyRegistration(FailedKeyRegistrationEntry&& value) { m_failedKeyRegistration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of all customer managed key registrations that were successfully
     * updated.</p>
     */
    inline const Aws::Vector<SuccessfulKeyRegistrationEntry>& GetSuccessfulKeyRegistration() const{ return m_successfulKeyRegistration; }
    inline void SetSuccessfulKeyRegistration(const Aws::Vector<SuccessfulKeyRegistrationEntry>& value) { m_successfulKeyRegistration = value; }
    inline void SetSuccessfulKeyRegistration(Aws::Vector<SuccessfulKeyRegistrationEntry>&& value) { m_successfulKeyRegistration = std::move(value); }
    inline UpdateKeyRegistrationResult& WithSuccessfulKeyRegistration(const Aws::Vector<SuccessfulKeyRegistrationEntry>& value) { SetSuccessfulKeyRegistration(value); return *this;}
    inline UpdateKeyRegistrationResult& WithSuccessfulKeyRegistration(Aws::Vector<SuccessfulKeyRegistrationEntry>&& value) { SetSuccessfulKeyRegistration(std::move(value)); return *this;}
    inline UpdateKeyRegistrationResult& AddSuccessfulKeyRegistration(const SuccessfulKeyRegistrationEntry& value) { m_successfulKeyRegistration.push_back(value); return *this; }
    inline UpdateKeyRegistrationResult& AddSuccessfulKeyRegistration(SuccessfulKeyRegistrationEntry&& value) { m_successfulKeyRegistration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateKeyRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateKeyRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateKeyRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedKeyRegistrationEntry> m_failedKeyRegistration;

    Aws::Vector<SuccessfulKeyRegistrationEntry> m_successfulKeyRegistration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

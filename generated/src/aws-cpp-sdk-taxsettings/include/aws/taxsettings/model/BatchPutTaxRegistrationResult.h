/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/TaxRegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/BatchPutTaxRegistrationError.h>
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
namespace TaxSettings
{
namespace Model
{
  class BatchPutTaxRegistrationResult
  {
  public:
    AWS_TAXSETTINGS_API BatchPutTaxRegistrationResult();
    AWS_TAXSETTINGS_API BatchPutTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API BatchPutTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of errors for the accounts the TRN information could not be added or
     * updated to. </p>
     */
    inline const Aws::Vector<BatchPutTaxRegistrationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchPutTaxRegistrationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchPutTaxRegistrationError>&& value) { m_errors = std::move(value); }
    inline BatchPutTaxRegistrationResult& WithErrors(const Aws::Vector<BatchPutTaxRegistrationError>& value) { SetErrors(value); return *this;}
    inline BatchPutTaxRegistrationResult& WithErrors(Aws::Vector<BatchPutTaxRegistrationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchPutTaxRegistrationResult& AddErrors(const BatchPutTaxRegistrationError& value) { m_errors.push_back(value); return *this; }
    inline BatchPutTaxRegistrationResult& AddErrors(BatchPutTaxRegistrationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of your TRN stored in the system after processing. Based on the
     * validation occurring on the TRN, the status can be <code>Verified</code>,
     * <code>Pending</code> or <code>Rejected</code>. </p>
     */
    inline const TaxRegistrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaxRegistrationStatus& value) { m_status = value; }
    inline void SetStatus(TaxRegistrationStatus&& value) { m_status = std::move(value); }
    inline BatchPutTaxRegistrationResult& WithStatus(const TaxRegistrationStatus& value) { SetStatus(value); return *this;}
    inline BatchPutTaxRegistrationResult& WithStatus(TaxRegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchPutTaxRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchPutTaxRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchPutTaxRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPutTaxRegistrationError> m_errors;

    TaxRegistrationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

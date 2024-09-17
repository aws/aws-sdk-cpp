/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/BatchDeleteTaxRegistrationError.h>
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
  class BatchDeleteTaxRegistrationResult
  {
  public:
    AWS_TAXSETTINGS_API BatchDeleteTaxRegistrationResult();
    AWS_TAXSETTINGS_API BatchDeleteTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API BatchDeleteTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of errors for the accounts the TRN information could not be deleted
     * for. </p>
     */
    inline const Aws::Vector<BatchDeleteTaxRegistrationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteTaxRegistrationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteTaxRegistrationError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteTaxRegistrationResult& WithErrors(const Aws::Vector<BatchDeleteTaxRegistrationError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteTaxRegistrationResult& WithErrors(Aws::Vector<BatchDeleteTaxRegistrationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteTaxRegistrationResult& AddErrors(const BatchDeleteTaxRegistrationError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteTaxRegistrationResult& AddErrors(BatchDeleteTaxRegistrationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteTaxRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteTaxRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteTaxRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteTaxRegistrationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

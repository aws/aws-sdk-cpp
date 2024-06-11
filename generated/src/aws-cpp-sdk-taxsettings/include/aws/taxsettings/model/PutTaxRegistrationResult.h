/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/TaxRegistrationStatus.h>
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
namespace TaxSettings
{
namespace Model
{
  class PutTaxRegistrationResult
  {
  public:
    AWS_TAXSETTINGS_API PutTaxRegistrationResult();
    AWS_TAXSETTINGS_API PutTaxRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API PutTaxRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of your TRN stored in the system after processing. Based on the
     * validation occurring on the TRN, the status can be <code>Verified</code>,
     * <code>Pending</code> or <code>Rejected</code>. </p>
     */
    inline const TaxRegistrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaxRegistrationStatus& value) { m_status = value; }
    inline void SetStatus(TaxRegistrationStatus&& value) { m_status = std::move(value); }
    inline PutTaxRegistrationResult& WithStatus(const TaxRegistrationStatus& value) { SetStatus(value); return *this;}
    inline PutTaxRegistrationResult& WithStatus(TaxRegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutTaxRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutTaxRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutTaxRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TaxRegistrationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

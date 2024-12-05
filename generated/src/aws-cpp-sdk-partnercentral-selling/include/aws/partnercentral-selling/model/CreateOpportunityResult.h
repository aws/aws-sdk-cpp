/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class CreateOpportunityResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateOpportunityResult();
    AWS_PARTNERCENTRALSELLING_API CreateOpportunityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API CreateOpportunityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Read-only, system-generated <code>Opportunity</code> unique identifier.
     * Amazon Web Services creates this identifier, and it's used for all subsequent
     * opportunity actions, such as updates, associations, and submissions. It helps to
     * ensure that each opportunity is accurately tracked and managed.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateOpportunityResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateOpportunityResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateOpportunityResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the opportunity was last modified. When the
     * <code>Opportunity</code> is created, its value is <code>CreatedDate</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline CreateOpportunityResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline CreateOpportunityResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity's unique identifier in the partner's CRM system.
     * This value is essential to track and reconcile because it's included in the
     * outbound payload sent back to the partner.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const{ return m_partnerOpportunityIdentifier; }
    inline void SetPartnerOpportunityIdentifier(const Aws::String& value) { m_partnerOpportunityIdentifier = value; }
    inline void SetPartnerOpportunityIdentifier(Aws::String&& value) { m_partnerOpportunityIdentifier = std::move(value); }
    inline void SetPartnerOpportunityIdentifier(const char* value) { m_partnerOpportunityIdentifier.assign(value); }
    inline CreateOpportunityResult& WithPartnerOpportunityIdentifier(const Aws::String& value) { SetPartnerOpportunityIdentifier(value); return *this;}
    inline CreateOpportunityResult& WithPartnerOpportunityIdentifier(Aws::String&& value) { SetPartnerOpportunityIdentifier(std::move(value)); return *this;}
    inline CreateOpportunityResult& WithPartnerOpportunityIdentifier(const char* value) { SetPartnerOpportunityIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOpportunityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOpportunityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOpportunityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_partnerOpportunityIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

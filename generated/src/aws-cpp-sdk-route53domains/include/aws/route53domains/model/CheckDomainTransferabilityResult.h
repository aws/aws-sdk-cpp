/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/DomainTransferability.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The CheckDomainTransferability response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferabilityResponse">AWS
   * API Reference</a></p>
   */
  class CheckDomainTransferabilityResult
  {
  public:
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult();
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Route 53.</p>
     */
    inline const DomainTransferability& GetTransferability() const{ return m_transferability; }

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Route 53.</p>
     */
    inline void SetTransferability(const DomainTransferability& value) { m_transferability = value; }

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Route 53.</p>
     */
    inline void SetTransferability(DomainTransferability&& value) { m_transferability = std::move(value); }

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Route 53.</p>
     */
    inline CheckDomainTransferabilityResult& WithTransferability(const DomainTransferability& value) { SetTransferability(value); return *this;}

    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Route 53.</p>
     */
    inline CheckDomainTransferabilityResult& WithTransferability(DomainTransferability&& value) { SetTransferability(std::move(value)); return *this;}


    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline CheckDomainTransferabilityResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline CheckDomainTransferabilityResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline CheckDomainTransferabilityResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CheckDomainTransferabilityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CheckDomainTransferabilityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CheckDomainTransferabilityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainTransferability m_transferability;

    Aws::String m_message;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

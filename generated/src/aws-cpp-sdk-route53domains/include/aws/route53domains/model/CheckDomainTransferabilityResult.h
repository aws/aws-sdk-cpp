/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/DomainTransferability.h>
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

  private:

    DomainTransferability m_transferability;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

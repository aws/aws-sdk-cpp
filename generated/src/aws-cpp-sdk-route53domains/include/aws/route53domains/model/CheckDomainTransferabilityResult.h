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
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult() = default;
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that contains information about whether the specified domain
     * can be transferred to Route 53.</p>
     */
    inline const DomainTransferability& GetTransferability() const { return m_transferability; }
    template<typename TransferabilityT = DomainTransferability>
    void SetTransferability(TransferabilityT&& value) { m_transferabilityHasBeenSet = true; m_transferability = std::forward<TransferabilityT>(value); }
    template<typename TransferabilityT = DomainTransferability>
    CheckDomainTransferabilityResult& WithTransferability(TransferabilityT&& value) { SetTransferability(std::forward<TransferabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an explanation for when a domain can't be transferred.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CheckDomainTransferabilityResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CheckDomainTransferabilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainTransferability m_transferability;
    bool m_transferabilityHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

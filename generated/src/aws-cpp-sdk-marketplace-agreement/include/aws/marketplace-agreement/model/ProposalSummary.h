/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/Resource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AgreementService
{
namespace Model
{

  /**
   * <p>A summary of the proposal received from the proposer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ProposalSummary">AWS
   * API Reference</a></p>
   */
  class ProposalSummary
  {
  public:
    AWS_AGREEMENTSERVICE_API ProposalSummary() = default;
    AWS_AGREEMENTSERVICE_API ProposalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ProposalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline const Aws::String& GetOfferId() const { return m_offerId; }
    inline bool OfferIdHasBeenSet() const { return m_offerIdHasBeenSet; }
    template<typename OfferIdT = Aws::String>
    void SetOfferId(OfferIdT&& value) { m_offerIdHasBeenSet = true; m_offerId = std::forward<OfferIdT>(value); }
    template<typename OfferIdT = Aws::String>
    ProposalSummary& WithOfferId(OfferIdT&& value) { SetOfferId(std::forward<OfferIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    ProposalSummary& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    ProposalSummary& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_offerId;
    bool m_offerIdHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws

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
    AWS_AGREEMENTSERVICE_API ProposalSummary();
    AWS_AGREEMENTSERVICE_API ProposalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ProposalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline const Aws::String& GetOfferId() const{ return m_offerId; }

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline bool OfferIdHasBeenSet() const { return m_offerIdHasBeenSet; }

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline void SetOfferId(const Aws::String& value) { m_offerIdHasBeenSet = true; m_offerId = value; }

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline void SetOfferId(Aws::String&& value) { m_offerIdHasBeenSet = true; m_offerId = std::move(value); }

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline void SetOfferId(const char* value) { m_offerIdHasBeenSet = true; m_offerId.assign(value); }

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline ProposalSummary& WithOfferId(const Aws::String& value) { SetOfferId(value); return *this;}

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline ProposalSummary& WithOfferId(Aws::String&& value) { SetOfferId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the offer in AWS Marketplace.</p>
     */
    inline ProposalSummary& WithOfferId(const char* value) { SetOfferId(value); return *this;}


    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline ProposalSummary& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline ProposalSummary& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline ProposalSummary& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The list of resources involved in the agreement.</p>
     */
    inline ProposalSummary& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_offerId;
    bool m_offerIdHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws

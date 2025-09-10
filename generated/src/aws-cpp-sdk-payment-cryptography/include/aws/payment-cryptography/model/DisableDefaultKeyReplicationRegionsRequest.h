/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Input parameters for disabling default key replication regions for the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/DisableDefaultKeyReplicationRegionsInput">AWS
   * API Reference</a></p>
   */
  class DisableDefaultKeyReplicationRegionsRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API DisableDefaultKeyReplicationRegionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableDefaultKeyReplicationRegions"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of Amazon Web Services Regions to remove from the account's default
     * replication regions.</p> <p>New keys created after this operation will not
     * automatically be replicated to these regions, though existing keys with
     * replication to these regions will be unaffected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    DisableDefaultKeyReplicationRegionsRequest& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    DisableDefaultKeyReplicationRegionsRequest& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws

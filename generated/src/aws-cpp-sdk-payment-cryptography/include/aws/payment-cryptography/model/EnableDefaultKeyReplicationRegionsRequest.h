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
   * <p>Input parameters for enabling default key replication regions for the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/EnableDefaultKeyReplicationRegionsInput">AWS
   * API Reference</a></p>
   */
  class EnableDefaultKeyReplicationRegionsRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API EnableDefaultKeyReplicationRegionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableDefaultKeyReplicationRegions"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of Amazon Web Services Regions to enable as default replication
     * regions for the account.</p> <p>New keys created in this account will
     * automatically be replicated to these regions unless explicitly overridden during
     * key creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    EnableDefaultKeyReplicationRegionsRequest& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    EnableDefaultKeyReplicationRegionsRequest& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws

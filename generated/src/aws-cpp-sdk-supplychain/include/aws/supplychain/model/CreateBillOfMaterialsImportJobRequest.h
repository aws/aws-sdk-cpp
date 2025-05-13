/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for CreateBillOfMaterialsImportJob.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateBillOfMaterialsImportJobRequest">AWS
   * API Reference</a></p>
   */
  class CreateBillOfMaterialsImportJobRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API CreateBillOfMaterialsImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillOfMaterialsImportJob"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateBillOfMaterialsImportJobRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline const Aws::String& GetS3uri() const { return m_s3uri; }
    inline bool S3uriHasBeenSet() const { return m_s3uriHasBeenSet; }
    template<typename S3uriT = Aws::String>
    void SetS3uri(S3uriT&& value) { m_s3uriHasBeenSet = true; m_s3uri = std::forward<S3uriT>(value); }
    template<typename S3uriT = Aws::String>
    CreateBillOfMaterialsImportJobRequest& WithS3uri(S3uriT&& value) { SetS3uri(std::forward<S3uriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token ensures the API request is only completed no more than
     * once. This way, retrying the request will not trigger the operation multiple
     * times. A client token is a unique, case-sensitive string of 33 to 128 ASCII
     * characters. To make an idempotent API request, specify a client token in the
     * request. You should not reuse the same client token for other requests. If you
     * retry a successful request with the same client token, the request will succeed
     * with no further actions being taken, and you will receive the same API response
     * as the original successful request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateBillOfMaterialsImportJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_s3uri;
    bool m_s3uriHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws

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
    AWS_SUPPLYCHAIN_API CreateBillOfMaterialsImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBillOfMaterialsImportJob"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline const Aws::String& GetS3uri() const{ return m_s3uri; }

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline bool S3uriHasBeenSet() const { return m_s3uriHasBeenSet; }

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline void SetS3uri(const Aws::String& value) { m_s3uriHasBeenSet = true; m_s3uri = value; }

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline void SetS3uri(Aws::String&& value) { m_s3uriHasBeenSet = true; m_s3uri = std::move(value); }

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline void SetS3uri(const char* value) { m_s3uriHasBeenSet = true; m_s3uri.assign(value); }

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithS3uri(const Aws::String& value) { SetS3uri(value); return *this;}

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithS3uri(Aws::String&& value) { SetS3uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI of the CSV file to be imported. The bucket must grant permissions
     * for AWS Supply Chain to read the file.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithS3uri(const char* value) { SetS3uri(value); return *this;}


    /**
     * <p>An idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>An idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>An idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>An idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>An idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>An idempotency token.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>An idempotency token.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token.</p>
     */
    inline CreateBillOfMaterialsImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_s3uri;
    bool m_s3uriHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class DeleteTapePoolRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteTapePoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTapePool"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline const Aws::String& GetPoolARN() const{ return m_poolARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline bool PoolARNHasBeenSet() const { return m_poolARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline void SetPoolARN(const Aws::String& value) { m_poolARNHasBeenSet = true; m_poolARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline void SetPoolARN(Aws::String&& value) { m_poolARNHasBeenSet = true; m_poolARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline void SetPoolARN(const char* value) { m_poolARNHasBeenSet = true; m_poolARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline DeleteTapePoolRequest& WithPoolARN(const Aws::String& value) { SetPoolARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline DeleteTapePoolRequest& WithPoolARN(Aws::String&& value) { SetPoolARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool to delete.</p>
     */
    inline DeleteTapePoolRequest& WithPoolARN(const char* value) { SetPoolARN(value); return *this;}

  private:

    Aws::String m_poolARN;
    bool m_poolARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

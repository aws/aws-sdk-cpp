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
   * <p>DescribeTapeRecoveryPointsInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeRecoveryPointsInput">AWS
   * API Reference</a></p>
   */
  class DescribeTapeRecoveryPointsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeTapeRecoveryPointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTapeRecoveryPoints"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline DescribeTapeRecoveryPointsRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeTapeRecoveryPointsRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeTapeRecoveryPointsRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline DescribeTapeRecoveryPointsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline DescribeTapeRecoveryPointsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin describing the
     * virtual tape recovery points.</p>
     */
    inline DescribeTapeRecoveryPointsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Specifies that the number of virtual tape recovery points that are described
     * be limited to the specified number.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies that the number of virtual tape recovery points that are described
     * be limited to the specified number.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Specifies that the number of virtual tape recovery points that are described
     * be limited to the specified number.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies that the number of virtual tape recovery points that are described
     * be limited to the specified number.</p>
     */
    inline DescribeTapeRecoveryPointsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

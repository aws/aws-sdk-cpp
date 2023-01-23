/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListTapePoolsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API ListTapePoolsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTapePools"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPoolARNs() const{ return m_poolARNs; }

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline bool PoolARNsHasBeenSet() const { return m_poolARNsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline void SetPoolARNs(const Aws::Vector<Aws::String>& value) { m_poolARNsHasBeenSet = true; m_poolARNs = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline void SetPoolARNs(Aws::Vector<Aws::String>&& value) { m_poolARNsHasBeenSet = true; m_poolARNs = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline ListTapePoolsRequest& WithPoolARNs(const Aws::Vector<Aws::String>& value) { SetPoolARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline ListTapePoolsRequest& WithPoolARNs(Aws::Vector<Aws::String>&& value) { SetPoolARNs(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline ListTapePoolsRequest& AddPoolARNs(const Aws::String& value) { m_poolARNsHasBeenSet = true; m_poolARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline ListTapePoolsRequest& AddPoolARNs(Aws::String&& value) { m_poolARNsHasBeenSet = true; m_poolARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of each of the custom tape pools you want to
     * list. If you don't specify a custom tape pool ARN, the response lists all custom
     * tape pools. </p>
     */
    inline ListTapePoolsRequest& AddPoolARNs(const char* value) { m_poolARNsHasBeenSet = true; m_poolARNs.push_back(value); return *this; }


    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline ListTapePoolsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline ListTapePoolsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools.</p>
     */
    inline ListTapePoolsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An optional number limit for the tape pools in the list returned by this
     * call.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>An optional number limit for the tape pools in the list returned by this
     * call.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>An optional number limit for the tape pools in the list returned by this
     * call.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>An optional number limit for the tape pools in the list returned by this
     * call.</p>
     */
    inline ListTapePoolsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_poolARNs;
    bool m_poolARNsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

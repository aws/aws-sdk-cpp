/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class CancelTraceRetrievalRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API CancelTraceRetrievalRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelTraceRetrieval"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Retrieval token. </p>
     */
    inline const Aws::String& GetRetrievalToken() const { return m_retrievalToken; }
    inline bool RetrievalTokenHasBeenSet() const { return m_retrievalTokenHasBeenSet; }
    template<typename RetrievalTokenT = Aws::String>
    void SetRetrievalToken(RetrievalTokenT&& value) { m_retrievalTokenHasBeenSet = true; m_retrievalToken = std::forward<RetrievalTokenT>(value); }
    template<typename RetrievalTokenT = Aws::String>
    CancelTraceRetrievalRequest& WithRetrievalToken(RetrievalTokenT&& value) { SetRetrievalToken(std::forward<RetrievalTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_retrievalToken;
    bool m_retrievalTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

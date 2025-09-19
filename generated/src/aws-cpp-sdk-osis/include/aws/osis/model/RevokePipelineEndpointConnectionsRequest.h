/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OSIS
{
namespace Model
{

  /**
   */
  class RevokePipelineEndpointConnectionsRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API RevokePipelineEndpointConnectionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokePipelineEndpointConnections"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline from which to revoke endpoint
     * connections.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    RevokePipelineEndpointConnectionsRequest& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of endpoint IDs for which to revoke access to the pipeline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpointIds() const { return m_endpointIds; }
    inline bool EndpointIdsHasBeenSet() const { return m_endpointIdsHasBeenSet; }
    template<typename EndpointIdsT = Aws::Vector<Aws::String>>
    void SetEndpointIds(EndpointIdsT&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = std::forward<EndpointIdsT>(value); }
    template<typename EndpointIdsT = Aws::Vector<Aws::String>>
    RevokePipelineEndpointConnectionsRequest& WithEndpointIds(EndpointIdsT&& value) { SetEndpointIds(std::forward<EndpointIdsT>(value)); return *this;}
    template<typename EndpointIdsT = Aws::String>
    RevokePipelineEndpointConnectionsRequest& AddEndpointIds(EndpointIdsT&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.emplace_back(std::forward<EndpointIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpointIds;
    bool m_endpointIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws

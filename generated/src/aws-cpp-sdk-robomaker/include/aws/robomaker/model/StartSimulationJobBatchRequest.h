/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/BatchPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/SimulationJobRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class StartSimulationJobBatchRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API StartSimulationJobBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSimulationJobBatch"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartSimulationJobBatchRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch policy.</p>
     */
    inline const BatchPolicy& GetBatchPolicy() const { return m_batchPolicy; }
    inline bool BatchPolicyHasBeenSet() const { return m_batchPolicyHasBeenSet; }
    template<typename BatchPolicyT = BatchPolicy>
    void SetBatchPolicy(BatchPolicyT&& value) { m_batchPolicyHasBeenSet = true; m_batchPolicy = std::forward<BatchPolicyT>(value); }
    template<typename BatchPolicyT = BatchPolicy>
    StartSimulationJobBatchRequest& WithBatchPolicy(BatchPolicyT&& value) { SetBatchPolicy(std::forward<BatchPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline const Aws::Vector<SimulationJobRequest>& GetCreateSimulationJobRequests() const { return m_createSimulationJobRequests; }
    inline bool CreateSimulationJobRequestsHasBeenSet() const { return m_createSimulationJobRequestsHasBeenSet; }
    template<typename CreateSimulationJobRequestsT = Aws::Vector<SimulationJobRequest>>
    void SetCreateSimulationJobRequests(CreateSimulationJobRequestsT&& value) { m_createSimulationJobRequestsHasBeenSet = true; m_createSimulationJobRequests = std::forward<CreateSimulationJobRequestsT>(value); }
    template<typename CreateSimulationJobRequestsT = Aws::Vector<SimulationJobRequest>>
    StartSimulationJobBatchRequest& WithCreateSimulationJobRequests(CreateSimulationJobRequestsT&& value) { SetCreateSimulationJobRequests(std::forward<CreateSimulationJobRequestsT>(value)); return *this;}
    template<typename CreateSimulationJobRequestsT = SimulationJobRequest>
    StartSimulationJobBatchRequest& AddCreateSimulationJobRequests(CreateSimulationJobRequestsT&& value) { m_createSimulationJobRequestsHasBeenSet = true; m_createSimulationJobRequests.emplace_back(std::forward<CreateSimulationJobRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSimulationJobBatchRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSimulationJobBatchRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    BatchPolicy m_batchPolicy;
    bool m_batchPolicyHasBeenSet = false;

    Aws::Vector<SimulationJobRequest> m_createSimulationJobRequests;
    bool m_createSimulationJobRequestsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

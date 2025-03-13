/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/ComputeAssetState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/AssetInstanceTypeCapacity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about compute hardware assets. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ComputeAttributes">AWS
   * API Reference</a></p>
   */
  class ComputeAttributes
  {
  public:
    AWS_OUTPOSTS_API ComputeAttributes() = default;
    AWS_OUTPOSTS_API ComputeAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API ComputeAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ComputeAttributes& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline ComputeAssetState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ComputeAssetState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ComputeAttributes& WithState(ComputeAssetState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceFamilies() const { return m_instanceFamilies; }
    inline bool InstanceFamiliesHasBeenSet() const { return m_instanceFamiliesHasBeenSet; }
    template<typename InstanceFamiliesT = Aws::Vector<Aws::String>>
    void SetInstanceFamilies(InstanceFamiliesT&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = std::forward<InstanceFamiliesT>(value); }
    template<typename InstanceFamiliesT = Aws::Vector<Aws::String>>
    ComputeAttributes& WithInstanceFamilies(InstanceFamiliesT&& value) { SetInstanceFamilies(std::forward<InstanceFamiliesT>(value)); return *this;}
    template<typename InstanceFamiliesT = Aws::String>
    ComputeAttributes& AddInstanceFamilies(InstanceFamiliesT&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.emplace_back(std::forward<InstanceFamiliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type capacities configured for this asset. This can be changed
     * through a capacity task.</p>
     */
    inline const Aws::Vector<AssetInstanceTypeCapacity>& GetInstanceTypeCapacities() const { return m_instanceTypeCapacities; }
    inline bool InstanceTypeCapacitiesHasBeenSet() const { return m_instanceTypeCapacitiesHasBeenSet; }
    template<typename InstanceTypeCapacitiesT = Aws::Vector<AssetInstanceTypeCapacity>>
    void SetInstanceTypeCapacities(InstanceTypeCapacitiesT&& value) { m_instanceTypeCapacitiesHasBeenSet = true; m_instanceTypeCapacities = std::forward<InstanceTypeCapacitiesT>(value); }
    template<typename InstanceTypeCapacitiesT = Aws::Vector<AssetInstanceTypeCapacity>>
    ComputeAttributes& WithInstanceTypeCapacities(InstanceTypeCapacitiesT&& value) { SetInstanceTypeCapacities(std::forward<InstanceTypeCapacitiesT>(value)); return *this;}
    template<typename InstanceTypeCapacitiesT = AssetInstanceTypeCapacity>
    ComputeAttributes& AddInstanceTypeCapacities(InstanceTypeCapacitiesT&& value) { m_instanceTypeCapacitiesHasBeenSet = true; m_instanceTypeCapacities.emplace_back(std::forward<InstanceTypeCapacitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of vCPUs possible for the specified asset.</p>
     */
    inline int GetMaxVcpus() const { return m_maxVcpus; }
    inline bool MaxVcpusHasBeenSet() const { return m_maxVcpusHasBeenSet; }
    inline void SetMaxVcpus(int value) { m_maxVcpusHasBeenSet = true; m_maxVcpus = value; }
    inline ComputeAttributes& WithMaxVcpus(int value) { SetMaxVcpus(value); return *this;}
    ///@}
  private:

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    ComputeAssetState m_state{ComputeAssetState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceFamilies;
    bool m_instanceFamiliesHasBeenSet = false;

    Aws::Vector<AssetInstanceTypeCapacity> m_instanceTypeCapacities;
    bool m_instanceTypeCapacitiesHasBeenSet = false;

    int m_maxVcpus{0};
    bool m_maxVcpusHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws

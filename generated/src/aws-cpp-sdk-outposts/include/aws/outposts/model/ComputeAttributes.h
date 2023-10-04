/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/ComputeAssetState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_OUTPOSTS_API ComputeAttributes();
    AWS_OUTPOSTS_API ComputeAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API ComputeAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline ComputeAttributes& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline ComputeAttributes& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p> The host ID of the Dedicated Host on the asset. </p>
     */
    inline ComputeAttributes& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline const ComputeAssetState& GetState() const{ return m_state; }

    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline void SetState(const ComputeAssetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline void SetState(ComputeAssetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline ComputeAttributes& WithState(const ComputeAssetState& value) { SetState(value); return *this;}

    /**
     * <p>The state.</p> <ul> <li> <p>ACTIVE - The asset is available and can provide
     * capacity for new compute resources.</p> </li> <li> <p>ISOLATED - The asset is
     * undergoing maintenance and can't provide capacity for new compute resources.
     * Existing compute resources on the asset are not affected.</p> </li> <li>
     * <p>RETIRING - The underlying hardware for the asset is degraded. Capacity for
     * new compute resources is reduced. Amazon Web Services sends notifications for
     * resources that must be stopped before the asset can be replaced.</p> </li> </ul>
     */
    inline ComputeAttributes& WithState(ComputeAssetState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceFamilies() const{ return m_instanceFamilies; }

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline bool InstanceFamiliesHasBeenSet() const { return m_instanceFamiliesHasBeenSet; }

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline void SetInstanceFamilies(const Aws::Vector<Aws::String>& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = value; }

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline void SetInstanceFamilies(Aws::Vector<Aws::String>&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies = std::move(value); }

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline ComputeAttributes& WithInstanceFamilies(const Aws::Vector<Aws::String>& value) { SetInstanceFamilies(value); return *this;}

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline ComputeAttributes& WithInstanceFamilies(Aws::Vector<Aws::String>&& value) { SetInstanceFamilies(std::move(value)); return *this;}

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline ComputeAttributes& AddInstanceFamilies(const Aws::String& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(value); return *this; }

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline ComputeAttributes& AddInstanceFamilies(Aws::String&& value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the names of instance families that are currently associated with a
     * given asset.</p>
     */
    inline ComputeAttributes& AddInstanceFamilies(const char* value) { m_instanceFamiliesHasBeenSet = true; m_instanceFamilies.push_back(value); return *this; }

  private:

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    ComputeAssetState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceFamilies;
    bool m_instanceFamiliesHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
